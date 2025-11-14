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
int arr[3]={0};

int fun(int *num){

    while(*num<=100){
        *num = *num+rand()/3+2;
        if (*num>100){
            *num = 100;
        }
    }
    return *num;
}

int main(){
    srand(time(NULL));

    pthread_t ptr1;
    pthread_t ptr2;
    pthread_t ptr3;
    pthread_create(&ptr1,NULL,(void*(*)(void*))fun,&arr[1]);
    pthread_create(&ptr2,NULL,(void*(*)(void*))fun,&arr[2]);
    pthread_create(&ptr3,NULL,(void*(*)(void*))fun,&arr[3]);


}