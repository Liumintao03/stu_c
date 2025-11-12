//
// Created by 35376 on 2025/11/12.
//


#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main(){

    printf("hello\n");

    //创建子进程
    pid_t ret = fork();
    if(ret<0){
        perror("fork:");
    }else if(ret==0){
        printf("在子进程\n");
    }else{
        printf("在父进程\n");
    }

    return 0;
}