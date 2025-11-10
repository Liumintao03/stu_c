//
// Created by 35376 on 2025/11/10.
//

#include <stdio.h>

int fun_fgetc(int *argc,char *argv,FILE *fp);
int fun_read(int *argc,char *argv,FILE *fp);

int main(int argc,char *argv[]){

    char *old_file = "/home/lmt/project/C_lion/stu_linux_c/build_dir/01fileIO/src_file";
    //1.选择是按fgetc/fputc 还是 按fread/ fwrite【块的⼤⼩按1B】的程序
    // 定下操作指针
    FILE *fp = fopen(old_file,"r");
    int ret;


    //判断打开是否有效
    if(fp==NULL){
        perror("open_r:\n");
        return -1;
    }
    //打开成功，判断fgetc还是fread
    if(argv[1]=="char"||argv[1]=="block"){
        //进入fgetc操作
        if(argv[1]=="char"){
            ret = fun_fgetc(&argc,argv,fp);
        }
        //进入fread操作
        else if(argv[1]=="block"){
            ret = fun_read(&argc,argv,fp);
        }
    }else{
        printf("操作错误");
        return -1;
    }


    return 0;
}

//实现fgetc
int fun_fgetc(int *argc,char *argv,FILE *fp){
    

}

//实现fgetc
int fun_read(int *argc,char *argv,FILE *fp){

}