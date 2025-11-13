//
// Created by 35376 on 2025/11/13.
//


#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <string.h>
#include <stdlib.h>

int fun(char *arg){
    //1.转成数字
    //2.字符串
    if(strcmp("1",arg)==0){
        printf("thread return\n");
        return 1;
    }else if(strcmp("2",arg)==0){
        printf("thread pthread_exit\n");
        pthread_exit((void *)2);
    }else if(strcmp("3",arg)==0){
        printf("thread exit\n");
        exit(3);
    }else{
        printf(("=========\n"));
    }
    return 0;
}


int main(int argc,char *argv[]){

    if(argc!=2){
        fprintf(stderr,"1 - 3 \n");
        return -1;
    }

    //创建线程
    pthread_t tid;
    pthread_create(&tid,NULL,(void *)fun,argv[1]);
    printf("create pthread success\n");

    int retval;
    pthread_join(tid,(void **)&retval);
    printf("retval:%d\n",retval);



    return 0;
}