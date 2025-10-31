//
// Created by 35376 on 2025/10/31.
//
#include "list_opposite.h"

//有序数组的归并
int *unitedarr(int *arr1,int len1,int *arr2,int len2){
    //求arr1的空间大小
    //求arr2的空间大小
    int size1 = sizeof(arr1[0])*len1;
    int size2 = sizeof(arr2[0])*len2;
    int *arr = (int *) malloc(size1+size2);
    int i = 0,j=0,k=0;
    while(i<len1){
        arr[i+j]=arr1[i];
        i++;
    }
    printf("\n");
    while(j<len2){
        arr[i+j]=arr2[j];
        j++;
    }
    printf("\n");
    //排个序从小到大
    for(int n = 0;n<len1+len2;n++){
        int min = arr[n];
        int max = arr[n];
        for(int m = n;m<len1+len2;m++){
            if(arr[m]<arr[n]){
                min = arr[m];
                max = arr[n];
                arr[m] = max;
                arr[n] = min;
            }
        }
    }
    return arr;
}

