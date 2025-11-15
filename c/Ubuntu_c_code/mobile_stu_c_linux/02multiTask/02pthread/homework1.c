//
// Created by 35376 on 2025/11/14.
//
//创建5个线程, 模拟下载器的进度,
// 在全局变量中定义一个 int 类型的数组, 每一个线程负责一个盒子, 第一个创建的线程负责第一个盒子, 以此类推
// 每个线程负责把各自的盒子的数据加到目标值后退出, 目标值可以设置为100, 可以随机增加一个[2,5]的数字,再sleep一下
// 主线程负责遍历盒子并打印里面的数值，直到所有的盒子都加到目标值后，程序退出。

#include <stdio.h>
#include <pthread.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

int arr[5]={0};

int fun(int *num){
    //下载线程
    while(*num<100){
        *num = *num+rand()%4+2;
        if (*num>100){
            *num = 100;
        }
        //延迟
        sleep(1);

    }
    return *num;
}

//显示函数
void show_display_progress(){
//    printf("\033[0;0H");  // 移动到第0行第0列（左上角）
//    printf("\033[2J\033[0;0H");  // 清屏并移动到左上角
    printf("\r");
    //显示进度
    for(int i = 0;i<5;i++){
        //是哪个盒子
        printf("盒子%d:[",i);
        //进度条显示
        //100个进度.一个进度1%
        int width = 50;
        int pos = width*arr[i]/100;
        //循环打印
        for(int j = 0;j<width;j++){
            if(j<pos)printf("*");//已经完成的部分
            else if(j==pos)printf("->");//完成到的部分
            else printf("=");//未完成的部分
        }
        printf("]%3d%%\n",arr[i]);

    }

    //检查是否全部完成
    int res = 1;
    for(int i = 0;i<5;i++){
        if(arr[i]<100){
            res = 0;
            break;
        }
    }

    if(res){
        printf("全部完成\n");
    }
    fflush(stdout);

}


int main(){
    srand(time(NULL));

    //创建5个线程
    pthread_t ptr1;
    pthread_t ptr2;
    pthread_t ptr3;
    pthread_t ptr4;
    pthread_t ptr5;

    pthread_create(&ptr1,NULL,(void*(*)(void*))fun,&arr[0]);
    pthread_create(&ptr2,NULL,(void*(*)(void*))fun,&arr[1]);
    pthread_create(&ptr3,NULL,(void*(*)(void*))fun,&arr[2]);
    pthread_create(&ptr4,NULL,(void*(*)(void*))fun,&arr[3]);
    pthread_create(&ptr5,NULL,(void*(*)(void*))fun,&arr[4]);

    printf("查看进度\n");
    int all_completed = 0;
    while(all_completed==0){
        show_display_progress();
        //检查是否所有线程都完成
        all_completed = 1;
        for(int i = 0;i<5;i++){
            if(arr[i]<100){
                printf("还没完成\n");
                all_completed = 0;
                break;
            }
        }
        usleep(100000);
    }
//    printf("按下任意按键结束\n");
//    getchar();
    pthread_join(ptr1,NULL);
    pthread_join(ptr2,NULL);
    pthread_join(ptr3,NULL);
    pthread_join(ptr4,NULL);
    pthread_join(ptr5,NULL);


    return 0;

}