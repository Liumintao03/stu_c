//
// Created by 35376 on 2025/11/18.
//
#include <unistd.h>
#include <stdio.h>
#include <string.h>

//子进程和父进程通信
//子进程写，父进程读

int main(){
    //声明子进程
    pid_t pid;

    //定下管道的流入和流出
    int pipe_fd[2];
    //创建管道
    int ret = pipe(pipe_fd);
    //判断管道是否创建成功
    if(ret<0){
        perror("pipe");
        return -1;
    }
    //创建子进程
    pid = fork();
    //判断子进程创建是否成功
    if(pid<0){
        perror("fork");
        //关闭管道
        close(pipe_fd[0]);//关读
        close(pipe_fd[1]);//关写
        return -1;
    }else if(pid ==0){
        //子进程先写
        close(pipe_fd[0]);//关闭子进程读取
        char *text = "hello";
        ret = write(pipe_fd[1],text,strlen(text));
        printf("chiled ret: %d\n",ret);
        close(pipe_fd[1]);//最后关闭子进程写
    } else{
        //父进程先读
        close(pipe_fd[1]);//关闭父进程写入
        char buf[256];
        ret = read(pipe_fd[0],buf,sizeof (buf)-1);
        buf[ret] = 0;//给结尾加0表示结尾
        printf("red %d bytes\n",ret);
        printf("read: %s\n",buf);
        close(pipe_fd[0]);//最后关闭父进程读取
    }





    return 0;
}
