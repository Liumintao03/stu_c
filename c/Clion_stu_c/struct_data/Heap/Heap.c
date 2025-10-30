//
// Created by 35376 on 2025/10/30.
//

#include "Heap.h"

//创建初始化队列
Heap *createInitHeap(){
    Heap *heap = (Heap *)malloc(sizeof (Heap));
    memset(heap,0,sizeof (Heap));
    
}
//插入
int insertHeap(Heap *heap,Element *e);
//删除
int deletHeap(Heap *heap);
//打印
int printHeapinfo(Heap *heap);
//释放
int releaseHeap(Heap *heap);













