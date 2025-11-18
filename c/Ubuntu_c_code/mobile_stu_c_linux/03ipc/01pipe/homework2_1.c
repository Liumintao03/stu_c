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
    char *path1 = "/home/lmt/project/pipes/my_fifo1";//只读
    int fd1 = open(path1,O_RDONLY);
    char *path2 = "/home/lmt/project/pipes/my_fifo2";//只写
    int fd2 = open(path2,O_WRONLY);

    if(fd1<0||fd2<0){
        perror("open");
        return -1;
    }
    printf("fifo1 and fifo2 open success\n");
    char buf[1024] = {0};
    while(1){

    }




    return 0;
}
