//fork 三个子进程, 这三个子进程通过无名管道分别向父进程发数据,
//    第一个子进程发送'A'  第二个子进程发'B' 第三个子进程发'C'
//    各发送1000个给父进程, 父进程接收并写入一个文件中
//    [考虑: lockf()]

#include <unistd.h>
#include <stdio.h>
#include <string.h>


int main(){
    //先创建管道，使得子进程和父进程都能使用
    int pipe_fd[2];
    int ret = pipe(pipe_fd);
    


    return 0;
}

