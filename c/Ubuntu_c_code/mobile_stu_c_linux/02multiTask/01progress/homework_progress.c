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
    int child_id;
    child_id = fork();
    int num = rand()%8+2;
    int cnt = 1;
    int status;
    int ret;
    if(child_id ==0){
        //子进程
        while(cnt<=num){
            sleep(1);
            printf("子进程%d\n",cnt);
            cnt++;
        }
        return cnt;
    }else{
        //父进程
        ret = waitpid(child_id,&status, WNOHANG);
        if(ret==-1){
            perror("wait:\n");
            return -1;
        }
        while(ret==0){
            sleep(1);
            printf("父进程wait......\n");
            ret= waitpid(child_id,&status, WNOHANG);
            if(ret>0){
                break;
            }
        }
        printf("child:num:%d\n",ret);

    }





    return 0;
}
