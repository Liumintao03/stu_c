//一个一个字节打印
//标准io，为c支持的io,所以调用的是c库
#include <stdio.h>
#include <unistd.h>


int main(){
    char *path = "/home/lmt/project/C_lion/stu_linux_c/build_dir/src.file";
    FILE *fp;
    //判断要打开的文件是否存在
    fp = fopen(path,"r");
    //如果不存在
    if(fp==NULL){
        perror("fopen");
        return -1;
    }

    //如果存在
    //标记打印字节数量
    int cnt = 0;
    //将ret
    int ret = fgetc(fp);
    //直到ret走到最后
    while(ret!=EOF){
        sleep(1);
        putchar(ret);

        fflush(stdout);
        ret = fgetc(fp);
        cnt++;
    }
    printf("%d\n",cnt);
    fclose(fp);






    return 0;
}