//
// Created by 35376 on 2025/10/31.
//
#include "ListHeap.h"

int main(){
    //����
    HeapList *heapList = createListHeapInit();
    //����
    for(int i = 1;i<=10;i++){
        addListHeap(heapList,&i);
    }
    //��ӡ
    printHeapListinfo(heapList);
    //����
    for(int i = 1;i<=heapList->count;i++){
        popListHeap(heapList);
        printHeapListinfo(heapList);

    }

    //��ӡ
    printHeapListinfo(heapList);
    //�ͷ�
    releaseHeapList(heapList);



    return 0;
}