//
// Created by 35376 on 2025/10/31.
//

#include "ListHeap.h"

//创建初始化
HeapList *createListHeapInit(){
    Heap *heap = (Heap *)malloc(sizeof (Heap));
    memset(heap,0,sizeof (Heap));
    HeapList *heapList = (HeapList *)malloc(sizeof(HeapList));
    memset(heapList,0,sizeof (HeapList));
    heapList->count==0;
    heapList->font = heap;
    heapList->rear= heap;
    heap->data = 0;
    heap->next = NULL;
    return heapList;
}
//头添加
int addListHeap(HeapList *heapList,Element *e){
    //判断合法性
    if(heapList==NULL){
        printf("队列不存在");
        return -1;
    }
    Heap *tmp = (Heap *) malloc(sizeof (Heap));
    tmp->data = *e;
    tmp->next = NULL;
    heapList->rear->next = tmp;
    heapList->rear = tmp;
    heapList->count++;
    return 0;
}
//尾出队
int popListHeap(HeapList *heapList){
    if(heapList==NULL){
        printf("队列不存在");
        return -1;
    }

    if(heapList->rear = heapList->font){
        printf("队列为空");
        return -1;
    }
    Heap *tmp = heapList->font->next;
    heapList->font



}

//打印
int printHeapListinfo(HeapList *heapList);
//释放
int releaseHeapList(HeapList *heapList);



