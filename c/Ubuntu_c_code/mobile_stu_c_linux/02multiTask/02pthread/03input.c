//
// Created by 35376 on 2025/11/13.
//


#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <string.h>
#include <stdlib.h>

void* fun(void *arg){

}


int main(int argc,char *argv[]){

    if(argc!=2){
        fprintf(stderr,"1 - 3 \n");
        return -1;
    }

    //创建线程
    pthread_t tid;
    pthread_create(&tid,NULL,void* fun,argv[1]);




    return 0;
}