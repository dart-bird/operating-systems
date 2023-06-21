#include "pthread_pool.h"
#include <stdlib.h>

static void* worker(void* param)
{
    pthread_pool_t* pool = (pthread_pool_t*)param;

    while (1) {
        pthread_mutex_lock(&pool->mutex);
        while (pool->running && pool->q_len == 0)
            pthread_cond_wait(&pool->full, &pool->mutex);

        if (!pool->running) {
            pthread_mutex_unlock(&pool->mutex);
            pthread_exit(NULL);
        }

        task_t task = pool->q[pool->q_front];
        pool->q_front = (pool->q_front + 1) % pool->q_size;
        pool->q_len--;

        pthread_cond_signal(&pool->empty);
        pthread_mutex_unlock(&pool->mutex);

        (*(task.function))(task.param);
    }
}

int pthread_pool_init(pthread_pool_t* pool, size_t bee_size, size_t queue_size)
{
    if (bee_size > POOL_MAXBSIZE || queue_size > POOL_MAXQSIZE)
        return POOL_FAIL;

    if (bee_size > queue_size) {
        queue_size = bee_size;
    }

    pool->q = (task_t*)malloc(sizeof(task_t) * queue_size);
    pool->q_size = queue_size;
    pool->q_front = 0;
    pool->q_len = 0;

    pool->bee = (pthread_t*)malloc(sizeof(pthread_t) * bee_size);
    pool->bee_size = bee_size;

    pthread_mutex_init(&pool->mutex, NULL);
    pthread_cond_init(&pool->empty, NULL);
    pthread_cond_init(&pool->full, NULL);

    pool->running = true;
    for (int i = 0; i < bee_size; ++i)
        pthread_create(&(pool->bee[i]), NULL, worker, pool);

    return POOL_SUCCESS;
}

int pthread_pool_submit(pthread_pool_t* pool, void (*f)(void* p), void* p, int flag)
{
    pthread_mutex_lock(&pool->mutex);

    if (pool->q_len == pool->q_size) {
        if (flag == POOL_NOWAIT) {
            pthread_mutex_unlock(&pool->mutex);
            return POOL_FULL;
        } else if (flag == POOL_WAIT) {
            while (pool->q_len == pool->q_size) {
                pthread_cond_wait(&pool->empty, &pool->mutex);
            }
        }
    }

    int index = (pool->q_front + pool->q_len) % pool->q_size;
    pool->q[index].function = f;
    pool->q[index].param = p;
    pool->q_len++;
    pthread_cond_signal(&pool->full);

    pthread_mutex_unlock(&pool->mutex);
    if (!pool->running) {
        pthread_mutex_unlock(&pool->mutex);
        return POOL_FAIL;
    }
    return POOL_SUCCESS;
}

int pthread_pool_shutdown(pthread_pool_t* pool, int how)
{
    pthread_mutex_lock(&pool->mutex);
    if (!pool->running) {
        pthread_mutex_unlock(&pool->mutex);
        return POOL_FAIL;
    }

    if (how == POOL_COMPLETE) {
        while (pool->q_len != 0) {
            pthread_cond_wait(&pool->empty, &pool->mutex);
        }

    } else if (how == POOL_DISCARD) {
        pool->q_len = 0;
    }
    pool->running = false;
    pthread_cond_broadcast(&pool->full);
    pthread_mutex_unlock(&pool->mutex);

    for (int i = 0; i < pool->bee_size; ++i)
        pthread_join(pool->bee[i], NULL);

    pthread_mutex_destroy(&pool->mutex);
    pthread_cond_destroy(&pool->empty);
    pthread_cond_destroy(&pool->full);
    free(pool->q);
    free(pool->bee);

    return POOL_SUCCESS;
}
