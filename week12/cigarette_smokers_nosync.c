#include <fcntl.h>
#include <pthread.h>
#include <semaphore.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>

#define TABACCO "\e[0;32m연초\e[0m"
#define PAPER "\e[0;34m종이\e[0m"
#define MATCH "\e[0;31m성냥\e[0m"

sem_t *tabacco, *paper, *matches, *done;

void* tabacco_smoker(void* arg)
{
    while (true) {
        sem_wait(paper);
        if (sem_trywait(matches) == 0) {
            printf(TABACCO " 흡연자\n");
            sem_post(done);
        } else {
            sem_post(paper);
        }
    }
}

void* paper_smoker(void* arg)
{
    while (true) {
        sem_wait(tabacco);
        if (sem_trywait(matches) == 0) {
            printf(PAPER " 흡연자\n");
            sem_post(done);
        } else {
            sem_post(tabacco);
        }
    }
}

void* matches_smoker(void* arg)
{
    while (true) {
        sem_wait(paper);
        if (sem_trywait(tabacco) == 0) {
            printf(MATCH " 흡연자\n");
            sem_post(done);
        } else {
            sem_post(paper);
        }
    }
}

void* agent(void* arg)
{
    int turn;

    srand(202305);
    while (true) {
        turn = rand() % 6;
        switch (turn) {
        case 0:
            printf(TABACCO ", " PAPER " -> ");
            sem_post(tabacco);
            sem_post(paper);
            break;
        case 1:
            printf(PAPER ", " TABACCO " -> ");
            sem_post(paper);
            sem_post(tabacco);
            break;
        case 2:
            printf(PAPER ", " MATCH " -> ");
            sem_post(paper);
            sem_post(matches);
            break;
        case 3:
            printf(MATCH ", " PAPER " -> ");
            sem_post(matches);
            sem_post(paper);
            break;
        case 4:
            printf(TABACCO ", " MATCH " -> ");
            sem_post(tabacco);
            sem_post(matches);
            break;
        case 5:
            printf(MATCH ", " TABACCO " -> ");
            sem_post(matches);
            sem_post(tabacco);
            break;
        default:;
        }
        sem_wait(done);
    }
}

int main(void)
{
    pthread_t tabacco_id, paper_id, matches_id, agent_id;

    tabacco = sem_open("tabacco", O_CREAT, 0600, 0);
    paper = sem_open("paper", O_CREAT, 0600, 0);
    matches = sem_open("matches", O_CREAT, 0600, 0);
    done = sem_open("done", O_CREAT, 0600, 0);

    pthread_create(&tabacco_id, NULL, tabacco_smoker, NULL);
    pthread_create(&paper_id, NULL, paper_smoker, NULL);
    pthread_create(&matches_id, NULL, matches_smoker, NULL);
    pthread_create(&agent_id, NULL, agent, NULL);

    sleep(1);

    pthread_cancel(tabacco_id);
    pthread_cancel(paper_id);
    pthread_cancel(matches_id);
    pthread_cancel(agent_id);

    sem_unlink("tabacco");
    sem_unlink("paper");
    sem_unlink("matches");
    sem_unlink("done");

    pthread_join(tabacco_id, NULL);
    pthread_join(paper_id, NULL);
    pthread_join(matches_id, NULL);
    pthread_join(agent_id, NULL);

    return 0;
}
