#include <pthread.h>
#include <stdatomic.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define N 8
#define MAX 1024
#define BUFSIZE 4
#define RED "\e[0;31m"
#define RESET "\e[0m"

pthread_mutex_t mutex;
pthread_cond_t empty;
pthread_cond_t full;

int buffer[BUFSIZE];
int in = 0;
int out = 0;
int counter = 0;
int next_item = 0;
int task_log[MAX][2];
int produced = 0;
int consumed = 0;
bool alive = true;

void* producer(void* arg)
{
    int i = *(int*)arg;
    int item;

    while (alive) {

        pthread_mutex_lock(&mutex);
        while (counter == BUFSIZE) {
            pthread_cond_wait(&full, &mutex);
        }
        item = next_item++;
        buffer[in] = item;
        in = (in + 1) % BUFSIZE;
        counter++;

        if (task_log[item][0] == -1) {
            task_log[item][0] = i;
            produced++;
        } else {
            printf("<P%d,%d>....ERROR: 아이템 %d 중복생산\n", i, item, item);
            continue;
        }
        printf("<P%d,%d>\n", i, item);
        pthread_cond_signal(&empty);
        pthread_mutex_unlock(&mutex);
    }
    pthread_exit(NULL);
}

void* consumer(void* arg)
{
    int i = *(int*)arg;
    int item;

    while (alive) {
        pthread_mutex_lock(&mutex);
        while (counter == 0) {
            pthread_cond_wait(&empty, &mutex);
        }
        item = buffer[out];
        out = (out + 1) % BUFSIZE;
        counter--;
        if (task_log[item][0] == -1) {
            printf(RED "<C%d,%d>" RESET "....ERROR: 아이템 %d 미생산\n", i, item, item);
            continue;
        } else if (task_log[item][1] == -1) {
            task_log[item][1] = i;
            consumed++;
        } else {
            printf(RED "<C%d,%d>" RESET "....ERROR: 아이템 %d 중복소비\n", i, item, item);
            continue;
        }

        pthread_cond_signal(&full);
        pthread_mutex_unlock(&mutex);
        printf(RED "<C%d,%d>" RESET "\n", i, item);
    }
    pthread_exit(NULL);
}

int main(void)
{
    pthread_t tid[N];
    int i, id[N];

    pthread_mutex_init(&mutex, NULL);
    pthread_cond_init(&empty, NULL);
    pthread_cond_init(&full, NULL);
    for (i = 0; i < MAX; ++i)
        task_log[i][0] = task_log[i][1] = -1;
    for (i = 0; i < N / 2; ++i) {
        id[i] = i;
        pthread_create(tid + i, NULL, consumer, id + i);
    }
    for (i = N / 2; i < N; ++i) {
        id[i] = i;
        pthread_create(tid + i, NULL, producer, id + i);
    }
    usleep(1000);
    alive = false;
    for (i = 0; i < N; ++i)
        pthread_join(tid[i], NULL);
    for (i = 0; i < consumed; ++i)
        if (task_log[i][1] == -1) {
            printf("....ERROR: 아이템 %d 미소비\n", i);
            return 1;
        }
    if (next_item == produced) {
        printf("Total %d items were produced.\n", produced);
        printf("Total %d items were consumed.\n", consumed);
    } else {
        printf("....ERROR: 생산량 불일치\n");
        return 1;
    }

    pthread_mutex_destroy(&mutex);
    pthread_cond_destroy(&empty);
    pthread_cond_destroy(&full);

    return 0;
}
