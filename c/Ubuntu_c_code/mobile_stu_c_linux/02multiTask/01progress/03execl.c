//
// Created by 35376 on 2025/11/12.
//
#include <stdio.h>
#include <unistd.h>

int main(){

    printf("before execl\n");
    int ret;
    ret = execlp("ls","随便填","-a","-l",NULL);
    if(ret ==-1){
        fprintf(stderr,"execl error");
        printf("error\n");
    }
    printf("after execl\n");


    return 0;
}
