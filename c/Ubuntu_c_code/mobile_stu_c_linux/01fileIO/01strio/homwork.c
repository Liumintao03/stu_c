//
// Created by 35376 on 2025/11/10.
//

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int fun_fgetc(FILE *fp,FILE *newfp);
int fun_read(FILE *fp,FILE *newfp);

int main(int argc,char *argv[]){

    //char *old_file = "/home/lmt/project/C_lion/stu_linux_c/build_dir/01fileIO/src_file";
    char *old_file = argv[2];
    char *new_file = argv[3];
    //1.选择是按fgetc/fputc 还是 按fread/ fwrite【块的⼤⼩按1B】的程序
    // 定下操作指针
    FILE *fp = fopen(old_file,"r");
    FILE *newfp = fopen(new_file,"w+");

    int ret;


    //判断打开是否有效
    if(fp==NULL){
        perror("open_r:\n");
        return -1;
    }
    if(newfp==NULL){
        perror("open_newfp:\n");
        return -1;
    }
    //打开成功，判断fgetc还是fread
    if(strcmp(argv[1],"char")==0||strcmp(argv[1],"block")==0){
        //进入fgetc操作
        if(argv[1]=="char"){
            ret = fun_fgetc(fp,newfp);
        }
        //进入fread操作
        else if(argv[1]=="block"){
            ret = fun_read(fp,newfp);
        }
    }else{
        printf("操作错误");
        return -1;
    }

    fclose(fp);
    fclose(newfp);

    return 0;
}

//实现fgetc
int fun_fgetc(FILE *fp,FILE *newfp){

    //存下
    int ret = fgetc(fp);
    int cnt = 0;
    //进行读取与写入
    while(ret!=EOF){
        fputc(ret,newfp);
        sleep(1);
        putchar(ret);
        fflush(stdout );
        ret = fgetc(fp);
        cnt++;
    }
    fclose(newfp);
    return 0;

}

//实现fead
int fun_read(FILE *fp,FILE *newfp){


    //存下
    char buf[1024];
    memset(buf,0,sizeof (buf));
    fread(buf,buf[0],1024,fp);
    fwrite(buf,buf[0],1024,newfp);
    return 0;

}