//
// Created by 35376 on 2025/11/6.
//

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
    //trunc
    //清空
    int fb = open("abc.ini",O_TRUNC|O_RDWR);
    if(fb<0){
        perror("trunc:");
        return -1;
    }
    close(fb);



    return 0;
}