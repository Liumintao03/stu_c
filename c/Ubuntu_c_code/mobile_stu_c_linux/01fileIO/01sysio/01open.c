//
// Created by 35376 on 2025/11/6.
//

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int mian(){
    //open 打开一个文件
    //不存在的时候，创建一个文件
    int fb = open("abc.ini",O_CREAT,0664);
    



    return 0;
}




