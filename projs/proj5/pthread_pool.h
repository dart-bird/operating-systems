#ifndef _PTHREAD_POOL_H_
#define _PTHREAD_POOL_H_

#include <pthread.h>
#include <stdbool.h>

#define POOL_MAXBSIZE 128
#define POOL_MAXQSIZE 512
#define POOL_WAIT 0
#define POOL_NOWAIT 1
#define POOL_SUCCESS 0
#define POOL_FAIL 1
#define POOL_FULL 2
#define POOL_DISCARD 0
#define POOL_COMPLETE 1

typedef struct {
    void (*function)(void* param);
    void* param;
} task_t;

typedef struct {
    bool running; /* 스레드풀의 실행 또는 종료 상태 */
    task_t* q; /* FIFO 작업 대기열로 사용할 원형 버퍼 */
    int q_size; /* 원형 버퍼 q 배열의 크기 */
    int q_front; /* 대기열에서 다음에 실행될 작업의 위치 */
    int q_len; /* 대기열의 길이, 0이면 현재 대기하고 있는 작업이 없다는 뜻 */
    pthread_t* bee; /* 일꾼(일벌) 스레드의 ID를 저장하기 위한 배열 */
    int bee_size; /* bee 배열의 크기로 일꾼 스레드의 수를 의미 */
    pthread_mutex_t mutex; /* 대기열을 접근하기 위해 사용하는 상호배타 락 */
    pthread_cond_t full; /* 빈 대기열에 새 작업이 들어올 때까지 기다리는 곳 */
    pthread_cond_t empty; /* 대기열에 빈 자리가 발생할 때까지 기다리는 곳 */

} pthread_pool_t;

int pthread_pool_init(pthread_pool_t* pool, size_t bee_size, size_t queue_size);
int pthread_pool_submit(pthread_pool_t* pool, void (*f)(void* p), void* p, int flag);
int pthread_pool_shutdown(pthread_pool_t* pool, int how);

#endif
