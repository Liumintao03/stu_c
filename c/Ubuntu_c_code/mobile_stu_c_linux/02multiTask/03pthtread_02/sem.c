//
// Created by 35376 on 2025/11/17.
//
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <string.h>
#include <semaphore.h>

char buf[128];
//定下sem
sem_t sem1;
sem_t sem2;
pthread_t ptr1;
pthread_t ptr2;
int fun1(){

    while(1){
        sem_wait(&sem1);//消耗sem1
        printf("input:");
        fflush(stdout);
        fgets(buf,sizeof(buf),stdin);
        if(strncmp(buf,"quit",4)==0){//如果相同，则strncmp函数返回0


            pthread_cancel(ptr2);
            return 0;
        }
        sem_post(&sem2);//给予sem2
    }

    return 0;
}

int fun2(){
    while(1){
        sem_wait(&sem2);//消耗sem2
        printf("strlen:%d\n",strlen(buf));
        sem_post(&sem1);//给予sem1
    }

    return 0;
}

int main(){

    sem_init(&sem1,0,1);//初始化sem1
    sem_init(&sem2,0,0);//初始化sem2

    pthread_create(&ptr1, NULL, (void *(*)(void *)) fun1, NULL);
    pthread_create(&ptr2, NULL, (void *(*)(void *)) fun2, NULL);

    pthread_join(ptr1,NULL);
    pthread_join(ptr2,NULL);

    sem_destroy(&sem1);//释放sem1
    sem_destroy(&sem2);//释放sem2

    return 0;
}