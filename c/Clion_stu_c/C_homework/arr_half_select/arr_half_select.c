//
// Created by 35376 on 2025/11/3.
//



//数组二分查找

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int arr_half_select(int *arr,int len,int e){
    int addr = len/2;
    int min = 0;
    int max = len-1;
    while(arr[addr]!=e){
        if(arr[addr]>e){
            max = addr;
            addr = (min+max)/2;
        }else if(arr[addr]<e){
            min = addr;
            addr = (min+max)/2;
        }
    }
    return addr;
}




int main(){
    int arr[50];
    for(int i = 0;i<50;i++){
        arr[i] = i;
    }
    int len = sizeof (arr)/sizeof (arr[0]);
    int res = arr_half_select(arr,len,13);
    printf("%d",res);




}
