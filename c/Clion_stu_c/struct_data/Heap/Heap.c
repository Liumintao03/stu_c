//
// Created by 35376 on 2025/10/30.
//

#include "Heap.h"

//创建初始化队列
Heap *createInitHeap(){
    Heap *heap = (Heap *)malloc(sizeof (Heap));
    memset(heap,0,sizeof (Heap));
    heap->count=0;
    heap->front =0;
    heap->rear = 0;
}
//插入
int insertHeap(Heap *heap,Element *e){
    //判断合法性
    if(heap == NULL){
        printf("传入的为空\n");
        return -1;
    }
    if(heap->front==(heap->rear+1)%MAXSIZE){
        printf("队列满了,无法添加\n");
        return -1;
    }
    //插入元素,后面那位更新
    heap->data[(heap->rear+1)%MAXSIZE]=*e;
    heap->rear=(heap->rear+1%MAXSIZE);
//    printHeapinfo(heap);
    return 0;

}
//删除
int deletHeap(Heap *heap){
    //校验合法性
    if(heap == NULL){
        printf("传入的为空\n");
        return -1;
    }
    if(heap->rear==heap->front){
        printf("队列为空,无法删除\n");
        return -1;
    }
    //删除
    heap->front = (heap->front+1)%MAXSIZE;
    return 0;

}
//打印
int printHeapinfo(Heap *heap){
    if(heap == NULL){
        printf("传入的为空\n");
        return -1;
    }
    if(heap->rear==heap->front){
        printf("队列为空,没有元素打印\n");
        return -1;
    }
    int i = heap->front;
    while(i!=heap->rear){
        printf("%d\t",heap->data[i+1]);
        i = (i+1)%MAXSIZE;
    }

    printf("打印完成\n");
    return 0;
}
//释放
int releaseHeap(Heap *heap){
    if(heap == NULL){
        printf("传入的为空\n");
        return -1;
    }
    free(heap);
    printf("释放完成\n");
    return 0;
}













