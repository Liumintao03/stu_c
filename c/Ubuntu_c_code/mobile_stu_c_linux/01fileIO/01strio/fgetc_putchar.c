
//标准io，为c支持的io,所以调用的是c库
#include <stdio.h>


int mian(){
    char *path = "/home/lmt/project/C_lion/stu_linux_c/build_dir/src.file";
    FILE *ret;
    //判断要打开的文件是否存在
    ret = fopen(path,"-r");
    //如果不存在
    if(ret==NULL){
        perror("fopen");
        return -1;
    }

    //如果存在
    int cnt = 0;
    





    return 0;
}