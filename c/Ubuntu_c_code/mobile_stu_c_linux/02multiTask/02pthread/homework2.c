//
// Created by 35376 on 2025/11/14.
//
//有一个全局的字符数组char buf[3000], 和 指示buf 待填充位置的下标pos
// 现在创建3个线程, 都对这个buf 进行填充
// 第一个线程填充1000字符'A', 第二个线程填充1000个'B', 第三个线程填充1000个'C'
// 如果缺少其他变量, 自行定义
// 最后打印填充完成后, 主线程打印 buf内容 和 pos 下标表示位置, 分析现象
// 修改代码, 如何 将因为调度随机产生的字符串乱序 变得有序

#include <stdio.h>
#include <pthread.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>


//因为要多线程填充，所以要定义一个全局变量来存
//多线程要全部变量标志存储位置。
char buf[3000];
int pos = 0;

int fun(char *ch){
    while(pos!=3000){
        buf[pos] = *ch;
        pos ++;
        usleep(rand() % 1000);//添加随机延迟，不如全是A线程
    }

}

int order(){
    char tmp1;//头
    char tmp2;//往后走的
    char tmp3;//暂存的
    for(int i = 0;i<3000;i++){
        
    }


}



int main(){
    pthread_t ptr1;
    pthread_t ptr2;
    pthread_t ptr3;
    char ch1 = 'A';
    char ch2 = 'B';
    char ch3 = 'C';

    srand(time(NULL));


    pthread_create(&ptr1,NULL,(void*(*)(void *))fun,&ch1);
    pthread_create(&ptr2,NULL,(void*(*)(void *))fun,&ch2);
    pthread_create(&ptr3,NULL,(void*(*)(void *))fun,&ch3);

    pthread_join(ptr1,NULL);
    pthread_join(ptr2,NULL);
    pthread_join(ptr3,NULL);

    int i = 0;
    while(i<3000){
        for (int j=0;j<50;j++){
            printf("%c",buf[i]);
            i++;
        }
        printf("\n");
    }

    return 0;
}