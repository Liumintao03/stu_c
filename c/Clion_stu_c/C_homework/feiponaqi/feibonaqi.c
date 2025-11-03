//
// Created by 35376 on 2025/11/3.
//


//斐波那契数列
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//传入的是多少位数
//递归
int fbnq1(int n){
    if(n ==1){
        return 0;
    }
    if(n ==2){
        return 1;
    }
    //返回前两个数相加的和
    return fbnq1(n-1)+fbnq1(n-2);

}

//数组
int fbnq2(int n){
    if(n==1||n==2){
        return 1;
    }

}


int main(){

    clock_t start = clock();
    printf("fib = %d\n", fbnq1(45));
    clock_t end = clock();
    printf("cost time: %f\n", ((double )(end - start))/CLOCKS_PER_SEC);

    return 0;
}
