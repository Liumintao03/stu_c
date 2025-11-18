//
// Created by 35376 on 2025/11/18.
//

//利用有名管道 实现两个非亲缘进程的双向通信

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


int main(){
    //有名管道位置
    char *path = "/home/lmt/project/pipes/my_fifo1";
    int fd = open(path,O_RDWR);
    if(fd<0){
        perror("open");
        return -1;
    }
    printf("reader open success\n");




    return 0;
}
