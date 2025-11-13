//
// Created by 35376 on 2025/11/13.
//

#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

int thread_fun(){
    printf("new thread\n");
    return 0;
}


int main(){
    pthread_t tid;
    int ret = pthread_create(&tid,NULL,(void*(*)(void *))thread_fun,NULL);
    if(ret!=0){
        fprintf(stderr,"pthread created faild\n");
        return -1;
    }
    printf("pthread created success\n");
    sleep(1);
    return 0;
}