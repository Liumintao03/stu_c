//
// Created by 35376 on 2025/11/10.
//


//从键盘输入到文件里面
#include <stdio.h>
#include <string.h>


int main(){
    //把要写的文件用指针表示
    FILE *fp = fopen("new_test","w+");
    //定下缓冲区
    char buf[1024];
    char *p;
    memset(fp,0,sizeof (buf));
    puts("请输入\n");
    while(1){
        //输入到哪里,使用标准输入流
        p = fgets(buf,sizeof (buf),stdin);
        if(p == NULL){
            break;
        }
        fputs(buf,fp);
    }



    return 0;
}
