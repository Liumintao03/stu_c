//
// Created by 35376 on 2025/11/6.
//


#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


int main(){

    //excl
    //文件不存在新建,存在忽略
    //O_CREAT|O_RDWR

    //文件存在报错
    //O_CREAT|O_EXCL|O_RDWR

    //文件不存在新建
    //O_

    int fb = open("abc.ini",O_CREAT|O_EXCL|O_RDWR,0644);

    if(fb<0){
        perror("open:");
        return -1;
    }
    close(fb);
    return 0;
}


