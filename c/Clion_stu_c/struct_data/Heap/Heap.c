//
// Created by 35376 on 2025/10/30.
//

#include "Heap.h"

//创建初始化队列
Heap *createInitHeap(){
    Heap *heap = (Heap *)malloc(sizeof (Heap));
    memset(heap,0,sizeof (Heap));
    heap->count=0;
    heap->front = 1;
}
//插入
int insertHeap(Heap *heap,Element *e){
    //判断合法性
    if(heap == NULL){
        printf("传入的为空\n");
        return -1;
    }
    if(heap->front==(heap->rear+1)%MAXSIZE){
        printf("栈满了\n");
        return -1;
    }
    //插入元素,后面那位更新
    heap->data[(heap->rear+1)%MAXSIZE]==*e;
    heap->rear=(heap->rear+1%MAXSIZE);


}
//删除
int deletHeap(Heap *heap){
    //校验合法性
    
}
//打印
int printHeapinfo(Heap *heap);
//释放
int releaseHeap(Heap *heap);













