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
    int n = heapList->count;
    for(int i = 1;i<=n;i++){
        popListHeap(heapList);

    }

    //��ӡ
    printHeapListinfo(heapList);
    //�ͷ�
    releaseHeapList(heapList);



    return 0;
}