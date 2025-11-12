//
// Created by 35376 on 2025/11/12.
//

//打印当前目录

#include <stdio.h>
#include <sys/types.h>
#include <pwd.h>
#include <unistd.h>
#include <string.h>
#include <string.h>


int main(){

    char buf[1024];
    memset(buf,0,sizeof (buf));
    char*p = getcwd(buf,sizeof (buf));

    if(p){
        printf("current dir:%s\n",p);
    }



    return 0;
}





