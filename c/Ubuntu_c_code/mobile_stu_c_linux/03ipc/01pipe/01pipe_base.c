//
// Created by 35376 on 2025/11/18.
//
#include <unistd.h>
#include <stdio.h>

int main(){
    //定下管道的流入和流出
    int pipe_fd[2];
    int ret = pipe(pipe_fd);


    return 0;
}
