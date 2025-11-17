#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <semaphore.h>
#include <string.h>
// 两个线程
// 1. 采集数据
// stdin --> string
// 2. 处理数据 strlen
int size = 0;
pthread_t tid1, tid2, tid3;
pthread_mutex_t mutex;
pthread_cond_t cond;
void create_task() {
    while (1) {
        pthread_mutex_lock(&mutex);
        while (size >= 5) {
            pthread_cond_wait(&cond, &mutex);
        }
// [0, 5]
// while (size < 5) {
        size++;
        printf(" create_task %d\n", size);
// }
// pthread_cond_signal(&cond);
        pthread_cond_broadcast(&cond);
        pthread_mutex_unlock(&mutex);
    }
}
void run_task1() {
    while (1) {
        pthread_mutex_lock(&mutex);
        while (size <= 0) {
            pthread_cond_wait(&cond, &mutex);
        }
// size > 0
//while (size > 0) {
        size--;
        printf(" running %d run_task1\n", size);
//sleep(1);
//}
        pthread_cond_broadcast(&cond);
        pthread_mutex_unlock(&mutex);
    }
}
void run_task2() {
    while (1) {
        pthread_mutex_lock(&mutex);
        while (size <= 0) {
            pthread_cond_wait(&cond, &mutex);
        }
// size > 0
//while (size > 0) {
        size--;
        printf(" running %d run_task2\n", size);
//sleep(1);
//}
        pthread_cond_broadcast(&cond);
        pthread_mutex_unlock(&mutex);
    }
}
int main() {
    pthread_cond_init(&cond, NULL);
    pthread_mutex_init(&mutex, NULL);
    pthread_create(&tid1, NULL, (void *(*)(void *)) create_task, NULL);
    pthread_create(&tid2, NULL, (void *(*)(void *)) run_task1, NULL);
    pthread_create(&tid3, NULL, (void *(*)(void *)) run_task2, NULL);
    pthread_join(tid1, NULL);
    pthread_join(tid2, NULL);
    pthread_cond_destroy(&cond);
    pthread_mutex_destroy(&mutex);
    printf("all exit\n");
    return 0;
}