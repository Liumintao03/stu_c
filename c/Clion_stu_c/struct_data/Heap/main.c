//
// Created by 35376 on 2025/10/30.
//
#include "Heap.h"

int main(){

    //创建队列
    Heap *heap = createInitHeap();
    //添加
    for(int i = 1;i<=10;i++){
        insertHeap(heap,&i);
    }
    //打印
    printHeapinfo(heap);
    //删除
    for(int i = 0;i<=10;i++){
        deletHeap(heap);
    }
    //打印
    printHeapinfo(heap);
    //释放
    releaseHeap(heap);


    return 0;
}