//
// Created by 35376 on 2025/11/18.
//
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>




char buf_read[1024];
char buf_write[1024];


//创建接收线程
void* receive(void* arg) {
    //接收功能
    int read_fd = *(int *)arg;
    while(read(read_fd,buf_read,sizeof(buf_read)-1)>0){
        printf("传出结果为：%s\n",buf_read);
    }
    return 0;
}

int main(){
    //有名管道位置
    char *path1 = "/home/lmt/project/pipes/my_fifo1";//只写
    mkfifo(path1,0777);
    int fd1 = open(path1,O_WRONLY);
    char *path2 = "/home/lmt/project/pipes/my_fifo2";//只读
    mkfifo(path2,0777);
    int fd2 = open(path2,O_RDONLY);

    if(fd1<0||fd2<0){
        perror("open");
        return -1;
    }
    printf("fifo1 and fifo2 open success\n");


    //创建子线程进行监听
    pthread_t tid;
    pthread_create(&tid, NULL, (void *(*)(void *)) receive, &fd2);

    //进行写入操作
    while(1){
        printf("input:");
        fgets(buf_write,sizeof (buf_write),stdin);
        if(strcmp(buf_write,"quit\n")==0){
            break;
        }
        write(fd1,buf_write,strlen(buf_write));

    }

    pthread_join(tid,NULL);
    return 0;
}