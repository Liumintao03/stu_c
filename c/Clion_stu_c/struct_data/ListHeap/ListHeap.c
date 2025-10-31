//
// Created by 35376 on 2025/10/31.
//

#include "ListHeap.h"

//创建初始化
HeapList *createListHeapInit(){

    HeapList *heapList = (HeapList *)malloc(sizeof(HeapList));
    memset(heapList,0,sizeof (HeapList));
    heapList->count==0;
    heapList->font = NULL;
    heapList->rear= NULL;

    return heapList;
}
//头添加
int addListHeap(HeapList *heapList,Element *e){
    //判断合法性
    if(heapList==NULL){
        printf("添加队列不存在\n");
        return -1;
    }
    Heap *tmp = (Heap *) malloc(sizeof (Heap));
    tmp->data = *e;
    tmp->next = NULL;
    if(heapList->font==NULL &&heapList->rear==NULL){//开始时候创建
        heapList->font = tmp;
        heapList->rear = tmp;
        heapList->count++;

        return 0;
    }

    heapList->rear->next = tmp;
    heapList->rear = tmp;
    heapList->count++;
    return 0;
}
//尾出队
int popListHeap(HeapList *heapList){

    if(heapList==NULL){
        printf("删除队列不存在\n");
        return -1;
    }

    if(heapList->font==NULL&&heapList->rear== NULL){
        printf("删除队列为空\n");
        return -1;
    }
    Heap *tmp = heapList->font;
    heapList->font=heapList->font->next;
    free(tmp);
    if(heapList->font == NULL){
        heapList->rear = NULL;
    }

    heapList->count--;
    return 0;
}

//打印
int printHeapListinfo(HeapList *heapList){
    if(heapList==NULL){
        printf("打印队列不存在\n");
        return -1;
    }

    if(heapList->font==NULL||heapList->rear== NULL){
        printf("打印队列为空\n");
        return -1;
    }
    Heap *tmp = heapList->font;
    while(tmp!=NULL){
        printf("%d\t",tmp->data);
        tmp = tmp->next;
    }

    printf("打印完成\n");
    return 0;


}
//释放
int releaseHeapList(HeapList *heapList){
    if(heapList==NULL){
        printf("释放队列不存在\n");
        return -1;
    }

    if(heapList->font==NULL||heapList->rear== NULL){
        printf("释放队列为空\n");
        return -1;
    }
    Heap *tmp = heapList->font;
    for(int i = 1;i<=heapList->count;i++){
        free(tmp);
        tmp = tmp->next;
    }
    printf("释放完成\n");
    return 0;


}



