//
// Created by 35376 on 2025/11/13.
//
#include <pthread.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(){

    printf("pthread_self\t%d\n", pthread_self());

    printf("getpid\t%d\n",getpid());


    return 0;
}