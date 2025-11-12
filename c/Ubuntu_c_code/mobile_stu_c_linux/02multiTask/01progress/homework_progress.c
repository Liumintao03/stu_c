//
// Created by 35376 on 2025/11/13.
//

#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <time.h>


int main(){
    srand(time(NULL));
    int ret;
    ret = fork();
    int num = rand()%10+2;
    int cnt = 0;
    int status;
    if(ret ==0){
        //子进程
        while(cnt<num){
            printf("=\n");
            cnt++;
        }
        return cnt;
    }else{
        //父进程
        ret = waitpid(ret,&status, WNOHANG);
        if(ret==-1){
            perror("wait:\n");
            return -1;
        }
        while(ret==0){
            sleep(1);
            printf("wait......\n");
            ret = wait(&status);
            if(ret>0){
                break;
            }
        }
        printf("child:num:%d\n",ret);

    }





    return 0;
}
