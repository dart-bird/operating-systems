#include <pthread.h>
#include <semaphore.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define N 5

sem_t semaphore;
int alive = 1;
int cnt = 0;
int arg[5] = { 1, 2, 3, 4, 5 };

void* toilet(void* arg)
{
    while (alive) {
        int temp = *((int*)arg);
        sem_wait(&semaphore);
        printf("스레드 %d가 화장실을 이용하기 시작합니다.\n", temp);
        sleep(rand() % 2 + 1);
        printf("스레드 %d가 화장실 이용을 마쳤습니다.\n", temp);
        sem_post(&semaphore);
        usleep(1);
    }
    pthread_exit(NULL);
}

int main()
{

    pthread_t thread_id[N];
    sem_init(&semaphore, 0, 3);
    printf("Semaphore test Start!\n");
    for (int i = 0; i < N; i++) {
        pthread_create(&thread_id[i], NULL, toilet, arg + i);
    }

    sleep(5);
    alive = 0;
    for (int i = 0; i < N; i++) {
        pthread_join(thread_id[i], NULL);
    }
    printf("모든 스레드가 화장실 이용을 끝냈습니다.\n");
    sem_destroy(&semaphore);

    return 0;
}