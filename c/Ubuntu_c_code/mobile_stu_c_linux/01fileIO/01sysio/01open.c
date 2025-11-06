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

    //lseek指针偏移，返回偏移位数
    //off_t lseek(int fd, off_t offset, int whence);
    int ret_num = lseek(fb,0,SEEK_END);
    printf("file_size: %d\n",ret_num);

    //使指针回到最开头
    lseek(fb,0,SEEK_SET);



    char buf[200] = {0};
    //read
    //ssize_t read(int fd, void *buf, size_t count);
    //读取什么,存到哪里，存多少个数据
    int red_ret = read(fb,buf,ret);
    printf("red_ret:%d\n",red_ret);
    //red_ret==0;到达文件末尾就是0


    close(fb);
    return 0;
}




