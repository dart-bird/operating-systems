#include "pthread_pool.h"
#include <inttypes.h>
#include <stdatomic.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <time.h>

#define NTASK 64
#define NLOOP 1024
#define RED "\e[0;31m"
#define CYAN "\e[0;36m"
#define RESET "\e[0m"

void number1(void* param)
{
    int num;

    num = *(int*)param;
    printf("<%d>", num);
}

void number2(void* param)
{
    int num;

    num = *(int*)param;
    printf("[%d]", num);
}

void number3(void* param)
{
    int num;

    num = *(int*)param;
    printf("{%d}", num);
}

void dot(void* param)
{
    if ((rand() % 16384) == 0) {
        printf(".");
        fflush(stdout);
    }
}

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

atomic_int count;
struct foo {
    int id;
    uint64_t num;
};

void find_primes(void* arg)
{
    int id = (*(struct foo*)arg).id;
    uint64_t n = (*(struct foo*)arg).num;

    for (int i = 0; i < 100; ++i, ++n)
        if (isprime(n)) {
            printf(CYAN "[T%d]" RESET "%" PRIu64 "\n", id, n);
            count++;
        }
}

int main(void)
{
    int i, num[NTASK];
    pthread_pool_t pool1, pool2, pool3, pool4;
    struct timeval start, end;
    double elapsed;

    gettimeofday(&start, NULL);
    printf("--- 스레드풀 파라미터 한계 검증 ---\n");
    if (pthread_pool_init(&pool1, 65536, 16) == POOL_FAIL)
        printf("pthread_pool_init(): 일꾼 스레드 최대 수 초과.....PASSED\n");
    else {
        printf("Error: 일꾼 스레드 갯수 검사 오류\n");
        return -1;
    }
    if (pthread_pool_init(&pool1, 16, 65536) == POOL_FAIL)
        printf("pthread_pool_init(): 대기열 최대 용량 초과.....PASSED\n");
    else {
        printf("Error: 대기열 용량 검사 오류\n");
        return -1;
    }

    printf("--- 스레드풀 최기화와 종료 검증 ---\n");
    if (pthread_pool_init(&pool1, 64, 64)) {
        printf("Error: 스레드풀 초기화 오류\n");
        return -1;
    }
    printf("pthread_pool_init(): 완료......PASSED\n");
    if (pthread_pool_shutdown(&pool1, POOL_DISCARD)) {
        printf("Error: 스레드풀 종료 오류\n");
        return -1;
    }
    printf("pthread_pool_shutdown(): 완료......PASSED\n");
    if (pthread_pool_init(&pool1, 64, 64)) {
        printf("Error: 스레드풀 초기화 오류\n");
        return -1;
    }
    printf("pthread_pool_init(): 완료......PASSED\n");
    if (pthread_pool_shutdown(&pool1, POOL_COMPLETE)) {
        printf("Error: 스레드풀 종료 오류\n");
        return -1;
    }
    printf("pthread_pool_shutdown(): 완료......PASSED\n");

    printf("--- 스레드풀 기본 동작 검증 ---\n");
    pthread_pool_init(&pool1, 3, 10);
    for (i = 0; i < NTASK; ++i) {
        num[i] = i;
        if (pthread_pool_submit(&pool1, number1, num + i, POOL_NOWAIT))
            printf(RED "<%d>" RESET, i);
    }
    for (i = 0; i < NTASK; ++i) {
        num[i] = i;
        if (pthread_pool_submit(&pool1, number2, num + i, POOL_WAIT)) {
            printf("Error: POOL_WAIT 옵션 오류\n");
            return -1;
        }
    }
    pthread_pool_shutdown(&pool1, POOL_DISCARD);
    printf("......PASSED\n");

    printf("--- 스레드풀 종료 방식 검증 ---\n");
    struct foo arg[16];
    pthread_pool_init(&pool1, 8, 16);
    count = 0;
    for (i = 0; i < 16; ++i) {
        arg[i].id = i;
        arg[i].num = 0x0fffffff00000000 + i * 100;
        pthread_pool_submit(&pool1, find_primes, arg + i, POOL_WAIT);
    }
    pthread_pool_shutdown(&pool1, POOL_DISCARD);
    printf("소수 %d개를 찾았다.\n", count);
    if (count < 18)
        printf("일부 일꾼 스레드가 구동되기 전에 풀이 종료되었을 가능성이 높다. 오류는 아니다.\n");
    printf("스레드가 출력한 소수의 개수가 일치하는지 아래 값과 확인한다......PASSED\n");
    printf("T0(2), T1(3), T2(1), T3(1), T4(5), T5(3), T6(1), T7(2)\n");

    pthread_pool_init(&pool1, 8, 16);
    count = 0;
    for (i = 0; i < 16; ++i) {
        arg[i].id = i;
        arg[i].num = 0x0fffffff00000000 + i * 100;
        pthread_pool_submit(&pool1, find_primes, arg + i, POOL_WAIT);
    }

    pthread_pool_shutdown(&pool1, POOL_COMPLETE);
    if (count != 31) {
        printf("Error: POOL_COMPLETE 옵션 오류\n");
        return -1;
    }
    printf("소수 31개를 모두 찾았다.\n스레드가 출력한 소수의 개수가 일치하는지 아래 값과 확인한다......PASSED\n");
    printf("T0(2), T1(3), T2(1), T3(1), T4(5), T5(3), T6(1), T7(2)\n");
    printf("T8(2), T9(0), T10(1), T11(3), T12(1), T13(3), T14(0), T15(3)\n");

    printf("--- 무작위 검증 ---\n");
    srand(time(NULL));
    pthread_pool_init(&pool1, 3, 10);
    for (i = 0; i < NLOOP; ++i) {
        pthread_pool_init(&pool2, rand() % POOL_MAXBSIZE + 1, rand() % POOL_MAXQSIZE + 1);
        pthread_pool_init(&pool3, rand() % POOL_MAXBSIZE + 1, rand() % POOL_MAXQSIZE + 1);
        pthread_pool_init(&pool4, rand() % POOL_MAXBSIZE + 1, rand() % POOL_MAXQSIZE + 1);
        for (int j = 0; j < 2 * NLOOP; ++j) {
            pthread_pool_submit(&pool2, dot, NULL, rand() % 2 ? POOL_WAIT : POOL_NOWAIT);
            pthread_pool_submit(&pool3, dot, NULL, rand() % 2 ? POOL_WAIT : POOL_NOWAIT);
            pthread_pool_submit(&pool4, dot, NULL, rand() % 2 ? POOL_WAIT : POOL_NOWAIT);
        }

        pthread_pool_submit(&pool1, number3, &i, POOL_NOWAIT);
        pthread_pool_shutdown(&pool2, rand() % 2 ? POOL_COMPLETE : POOL_DISCARD);
        pthread_pool_shutdown(&pool3, rand() % 2 ? POOL_COMPLETE : POOL_DISCARD);
        pthread_pool_shutdown(&pool4, rand() % 2 ? POOL_COMPLETE : POOL_DISCARD);
    }
    pthread_pool_shutdown(&pool1, POOL_COMPLETE);
    printf("......PASSED\n");
    gettimeofday(&end, NULL);
    elapsed = (double)(end.tv_sec - start.tv_sec) + (double)(end.tv_usec - start.tv_usec) * 1e-6;
    printf("총 실행시간: %.4f초\n", elapsed);

    return 0;
}
