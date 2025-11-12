//
// Created by 35376 on 2025/11/12.
//

//打印当前目录文件
#include<sys/types.h>
#include <dirent.h>
#include <unistd.h>
#include <stdio.h>



int main(){
    char *dir_name = ".";
    DIR *dir = opendir(dir_name);
    if(dir==NULL){
        perror("opendir");
        return -1;
    }

    struct dirent *pDirent = readdir(dir);
    while(pDirent){
        if(pDirent->d_name[0]!='.'){
            printf("%s\t",pDirent->d_name);
        }
        pDirent = readdir(dir);
    }

    closedir(dir);



    return 0;
}
