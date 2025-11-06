//
// Created by 35376 on 2025/11/6.
//
#include <stdio.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

//MyCp 1.src_file 2.new_file
//      要拷贝     拷贝到

int main(int argc, char *argv[]) {
//argc（参数计数）
//类型：int
//含义：命令行参数的总个数
//包括程序名本身
//至少为 1（因为程序名总是第一个参数）
//argv（参数数组）
//类型：char *argv[]（字符串指针数组）
//含义：存储所有命令行参数的字符串数组
//argv[0] = 程序名（或完整路径）
//argv[1] = 第一个参数
//argv[2] = 第二个参数


    //参数判断      3
    if (argc != 3) {
        fprintf(stderr,)
        dprintf(STDOUT_FILENO,"using error:MyCp src_file new_file")


        return -1;
    }



    //sec_fd
    //不存在
    //存在
    //只读


    //new_fd
    //存在？清空？不清空？
    //不存在，新建


    //拷贝代码



    //cnt


    return 0;
}
