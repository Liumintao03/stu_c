//fork 三个子进程, 这三个子进程通过无名管道分别向父进程发数据,
//    第一个子进程发送'A'  第二个子进程发'B' 第三个子进程发'C'
//    各发送1000个给父进程, 父进程接收并写入一个文件中
//    [考虑: lockf()]

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <pthread.h>


pthread_mutex_t mutex;

int main() {
    //初始化锁
    pthread_mutex_init(&mutex, NULL);
    //先创建管道，使得子进程和父进程都能使用
    int pipe_fd[2];
    int ret = pipe(pipe_fd);
    //检测管道创建是否成功
    if (ret != 0) {
        perror("pipe");
        return -1;
    }
    //定下buf
    char buf[128];
    //创建三个子进程
    int child01 = fork();
    int child02 = fork();
    int child03 = fork();

    if (child01 == 0) {

        //第一个子进程

        int i1 = 0;
        while(i1<1000){
            //锁上
            pthread_mutex_lock(&mutex);
//            //关闭读管道
//            close(buf[0]);
            //写入管道
            char *a = "A";
            ret = write(pipe_fd[1],a,1);
            printf("child1_write:A\n");
            pthread_mutex_unlock(&mutex);
        }

        pthread_mutex_unlock(&mutex);
    } else if (child02 == 0) {
        int i2 = 0;
        while(i2<1000){
            //锁上
            pthread_mutex_lock(&mutex);
//            //关闭读管道
//            close(buf[0]);
            //写入管道
            char *a = "B";
            ret = write(pipe_fd[1],a,1);
            printf("child1_write:A\n");
            pthread_mutex_unlock(&mutex);
        }




    } else if (child03 == 0) {
        int i2 = 0;
        while(i2<1000){
            //锁上
            pthread_mutex_lock(&mutex);
//            //关闭读管道
//            close(buf[0]);
            //写入管道
            char *a = "C";
            ret = write(pipe_fd[1],a,1);
            printf("child1_write:A\n");
            pthread_mutex_unlock(&mutex);
        }


    }

    return 0;
}

