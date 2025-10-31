//
// Created by 35376 on 2025/10/31.
//

#ifndef CLION_STU_C_LISTHEAP_H
#define CLION_STU_C_LISTHEAP_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef int Element;

typedef struct Heap{
    Element data;
    struct Heap *next;
}Heap;
typedef struct HeapList{
    struct Heap *font;
    struct Heap *rear;
    int count;

}HeapList;

//创建初始化
HeapList *createListHeapInit();
//头添加
int addListHeap(HeapList *heapList);
//尾出队
int popListHeap(HeapList *heapList);
//打印
int printHeapListinfo(HeapList *heapList);
//释放
int releaseHeapList(HeapList *heapList);





#endif //CLION_STU_C_LISTHEAP_H
