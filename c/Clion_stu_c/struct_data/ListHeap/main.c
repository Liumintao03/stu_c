//
// Created by 35376 on 2025/10/31.
//
#include "ListHeap.h"

int main(){
    //创建
    HeapList *heapList = createListHeapInit();
    //插入
    for(int i = 1;i<=10;i++){
        addListHeap(heapList,&i);
    }
    //打印
    printHeapListinfo(heapList);
    //出队
    for(int i = 1;i<=heapList->count;i++){
        popListHeap(heapList);
        printHeapListinfo(heapList);

    }

    //打印
    printHeapListinfo(heapList);
    //释放
    releaseHeapList(heapList);



    return 0;
}