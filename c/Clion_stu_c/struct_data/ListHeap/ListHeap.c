//
// Created by 35376 on 2025/10/31.
//

#include "ListHeap.h"

//������ʼ��
HeapList *createListHeapInit(){

    HeapList *heapList = (HeapList *)malloc(sizeof(HeapList));
    memset(heapList,0,sizeof (HeapList));
    heapList->count==0;
    heapList->font = NULL;
    heapList->rear= NULL;

    return heapList;
}
//ͷ���
int addListHeap(HeapList *heapList,Element *e){
    //�жϺϷ���
    if(heapList==NULL){
        printf("��Ӷ��в�����\n");
        return -1;
    }
    Heap *tmp = (Heap *) malloc(sizeof (Heap));
    tmp->data = *e;
    tmp->next = NULL;
    if(heapList->font==NULL &&heapList->rear==NULL){//��ʼʱ�򴴽�
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
//β����
int popListHeap(HeapList *heapList){

    if(heapList==NULL){
        printf("ɾ�����в�����\n");
        return -1;
    }

    if(heapList->font==NULL&&heapList->rear== NULL){
        printf("ɾ������Ϊ��\n");
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

//��ӡ
int printHeapListinfo(HeapList *heapList){
    if(heapList==NULL){
        printf("��ӡ���в�����\n");
        return -1;
    }

    if(heapList->font==NULL||heapList->rear== NULL){
        printf("��ӡ����Ϊ��\n");
        return -1;
    }
    Heap *tmp = heapList->font;
    while(tmp!=NULL){
        printf("%d\t",tmp->data);
        tmp = tmp->next;
    }

    printf("��ӡ���\n");
    return 0;


}
//�ͷ�
int releaseHeapList(HeapList *heapList){
    if(heapList==NULL){
        printf("�ͷŶ��в�����\n");
        return -1;
    }

    if(heapList->font==NULL||heapList->rear== NULL){
        printf("�ͷŶ���Ϊ��\n");
        return -1;
    }
    Heap *tmp = heapList->font;
    for(int i = 1;i<=heapList->count;i++){
        free(tmp);
        tmp = tmp->next;
    }
    printf("�ͷ����\n");
    return 0;


}



