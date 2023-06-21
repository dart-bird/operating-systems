#include <inttypes.h>
#include <pthread.h>
#include <stdatomic.h>
#include <stdbool.h>
#include <stdio.h>
#include <sys/time.h>
#include <time.h>

#define GROUP 16
#define START 0x3B9ACA00
#define SPAN 0x002625A0

atomic_int count;

bool isprime(uint64_t n)
{
    uint64_t p = 5;

    if (n == 2 || n == 3)
        return true;
    if (n == 1 || n % 2 == 0 || n % 3 == 0)
        return false;
    while (n >= p * p)
        if (n % p == 0 || n % (p + 2) == 0)
            return false;
        else
            p += 6;
    return true;
}

void* foo(void* arg)
{
    int i = *(int*)arg;

    for (int n = START + i * SPAN; n < START + (i + 1) * SPAN; ++n)
        if (isprime(n))
            ++count;
    pthread_exit(NULL);
}

int main(void)
{
    int i, arg[GROUP];
    pthread_t tid[GROUP];
    struct timeval start, end;
    double elapsed;

    printf("%d부터 %d까지 소수를 찾는다.\n", START, START + GROUP * SPAN);

    gettimeofday(&start, NULL);
    printf("순차 계산...\n");
    int cnt = 0;
    for (i = 0; i < GROUP; ++i)
        for (int n = START + i * SPAN; n < START + (i + 1) * SPAN; ++n)
            if (isprime(n))
                ++cnt;
    gettimeofday(&end, NULL);
    elapsed = (double)(end.tv_sec - start.tv_sec) + (double)(end.tv_usec - start.tv_usec) * 1e-6;
    printf("소수 개수: %d개\n실행 시간: %.4f초\n---\n", cnt, elapsed);

    gettimeofday(&start, NULL);
    printf("순차 계산...\n");
    count = 0;
    for (int i = 0; i < GROUP; ++i) {
        arg[i] = i;
        pthread_create(&tid[i], NULL, foo, &arg[i]);
    }
    for (int i = 0; i < GROUP; ++i) {
        arg[i] = i;
        pthread_join(tid[i], NULL);
    }
    gettimeofday(&end, NULL);
    elapsed = (double)(end.tv_sec - start.tv_sec) + (double)(end.tv_usec - start.tv_usec) * 1e-6;
    printf("소수 개수 %d개\n실행 시간: %.4f초\n---\n", count, elapsed);

    gettimeofday(&start, NULL);
    printf("병렬 계산 (OpenMP)...\n");
    count = 0;
#pragma omp parallel for
    for (int i = 0; i < GROUP; ++i) {
        int cnt = 0;
        for (int n = START + i * SPAN; n < START + (i + 1) * SPAN; ++n)
            if (isprime(n))
                ++cnt;
#pragma omp critical
        count += cnt;
    }

    gettimeofday(&end, NULL);
    elapsed = (double)(end.tv_sec - start.tv_sec) + (double)(end.tv_usec - start.tv_usec) * 1e-6;
    printf("소수 개수 %d개\n실행 시간: %.4f초\n---\n", count, elapsed);

    return 0;
}
