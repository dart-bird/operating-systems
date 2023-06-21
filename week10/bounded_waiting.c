#include <pthread.h>
#include <stdatomic.h>
#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>

#define N 8
#define RUNTIME 100000

char* color[N + 1] = { "\e[0;30m", "\e[0;31m", "\e[0;32m", "\e[0;33m", "\e[0;34m", "\e[0;35m", "\e[0;36m", "\e[0;37m", "\e[0m" };

pthread_mutex_t mutex;
bool alive = true;

void* worker(void* arg)
{
    int i = *(int*)arg;
    while (alive) {
        pthread_mutex_lock(&mutex);

        for (int k = 0; k < 400; ++k) {
            printf("%s%c%s", color[i], 'A' + i, color[N]);
            if ((k + 1) % 40 == 0)
                printf("\n");
        }

        pthread_mutex_unlock(&mutex);
    }
    pthread_exit(NULL);
}

int main(void)
{
    pthread_t tid[N];
    int i, id[N];
    pthread_mutex_init(&mutex, NULL);
    for (i = 0; i < N; ++i) {
        id[i] = i;
        pthread_create(tid + i, NULL, worker, id + i);
    }
    usleep(RUNTIME);
    alive = false;
    for (i = 0; i < N; ++i)
        pthread_join(tid[i], NULL);
    pthread_mutex_destroy(&mutex);
    return 0;
}
