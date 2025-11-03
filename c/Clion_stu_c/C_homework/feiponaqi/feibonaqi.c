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
    if(n==1||n==2){
        return 1;
    }
    //返回前两个数相加的和
    return fbnq1(n-1)+fbnq1(n-2);

}

//思路为数组+临长变量
int fbnq2(int n){
    if(n==1||n==2){
        return 1;
    }

    int arr[n+1];
    arr[1] = 1;
    arr[2] = 1;
    for(int i = 3;i<=n;i++){
        int res = arr[i-1]+arr[i-2];
        arr[i] = res;
    }
    return arr[n];
}


int main(){

    clock_t start = clock();
    printf("fib = %d\n", fbnq2(45));
    clock_t end = clock();
    printf("cost time: %f\n", ((double )(end - start))/CLOCKS_PER_SEC);

    return 0;
}
