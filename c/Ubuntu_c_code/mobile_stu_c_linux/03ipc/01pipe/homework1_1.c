//fork 三个子进程, 这三个子进程通过无名管道分别向父进程发数据,
//    第一个子进程发送'A'  第二个子进程发'B' 第三个子进程发'C'
//    各发送1000个给父进程, 父进程接收并写入一个文件中
//    [考虑: lockf()]

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

//pthread_mutex_t mutex;

int main() {
//    //初始化锁
//    pthread_mutex_init(&mutex, NULL);
    //先创建管道，使得子进程和父进程都能使用
    int pipe_fd[2];
    int ret = pipe(pipe_fd);
    //检测管道创建是否成功
    if (ret != 0) {
        perror("pipe");
        return -1;
    }


    pid_t child[3];
    for(int i = 0;i<3;i++){
        child[i] = fork();
        if(child[i]==0){
            //进入第i个子进程
            if(i == 0){
                //这是发送'A'
                int n1 = 0;
                while(n1<1000){
                    //关闭管道写
                    close(pipe_fd[1]);

                    n1++
                    
                }
            }else if(i == 1){
                //这是发送'B'


            }else if(i == 2){
                //这是发送'C'


            }
        }
    }































//    int status;
//    int cnt = 0;
//    //创建三个子进程
//    int child01 = fork();
//    int child02 = fork();
//    int child03 = fork();
//
//    if (child01 == 0) {
//
//        //第一个子进程
//
//        int i1 = 0;
//        while(i1<1000){
////            //锁上
////            pthread_mutex_lock(&mutex);
////            //关闭读管道
////            close(buf[0]);
//            //写入管道
//            char *a = "A";
//            ret = write(pipe_fd[1],a,1);
//            printf("child1_write:A\n");
//            cnt++;
////            pthread_mutex_unlock(&mutex);
//        }
//        exit(0);
//
//    } else if (child02 == 0) {
//        int i2 = 0;
//        while(i2<1000){
////            //锁上
////            pthread_mutex_lock(&mutex);
////            //关闭读管道
////            close(buf[0]);
//            //写入管道
//            char *a = "B";
//            ret = write(pipe_fd[1],a,1);
//            printf("child2_write:B\n");
//            cnt++;
//
////            pthread_mutex_unlock(&mutex);
//        }
//
//
//
//
//    } else if (child03 == 0) {
//        int i3 = 0;
//        while(i3<1000){
////            //锁上
////            pthread_mutex_lock(&mutex);
////            //关闭读管道
////            close(buf[0]);
//            //写入管道
//            char *a = "C";
//            ret = write(pipe_fd[1],a,1);
//            printf("child3_write:C\n");
//            cnt++;
//
////            pthread_mutex_unlock(&mutex);
//        }
//
//
//    }else{
//        //父进程
//        //定下buf
//        char buf[10000];
//
////        //等待子进程全部完成，不然每次都要去读很麻烦
////        ret = waitpid(child01,&status, WNOHANG);
////        ret = waitpid(child02,&status, WNOHANG);
////        ret = waitpid(child03,&status, WNOHANG);
//        //打开文件
//        int fb = open("abc.txt",O_CREAT|O_RDWR,0664);
//        if(fb<0){
//            perror("open");
//            return -1;
//        }
//        ret = read(pipe_fd[0],buf,1);
//
//
//
//
//
//    }
//

    return 0;
}

