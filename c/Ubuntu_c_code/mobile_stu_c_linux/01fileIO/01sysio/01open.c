//
// Created by 35376 on 2025/11/6.
//

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
    //open 打开一个文件
    //不存在的时候,文件名,创建一个文件|赋予fb操作权限,赋予文件操作权限
    int fb = open("abc.ini",O_CREAT|O_RDWR,0664);
    if(fb<0){
        perror("open:");
        return -1;
    }
    printf("=========\n");

    int ret = write(fb,"hello\n",6);
    printf("ret:%d\n",ret);

    


    close(fb);
    return 0;
}




