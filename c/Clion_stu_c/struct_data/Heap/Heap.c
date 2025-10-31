//
// Created by 35376 on 2025/10/30.
//

#include "Heap.h"

//������ʼ������
Heap *createInitHeap(){
    Heap *heap = (Heap *)malloc(sizeof (Heap));
    memset(heap,0,sizeof (Heap));
    heap->count=0;
    heap->front =0;
    heap->rear = 0;
}
//����
int insertHeap(Heap *heap,Element *e){
    //�жϺϷ���
    if(heap == NULL){
        printf("�����Ϊ��\n");
        return -1;
    }
    if(heap->front==(heap->rear+1)%MAXSIZE){
        printf("��������,�޷����\n");
        return -1;
    }
    //����Ԫ��,������λ����
    heap->data[(heap->rear+1)%MAXSIZE]=*e;
    heap->rear=(heap->rear+1%MAXSIZE);
//    printHeapinfo(heap);
    return 0;

}
//ɾ��
int deletHeap(Heap *heap){
    //У��Ϸ���
    if(heap == NULL){
        printf("�����Ϊ��\n");
        return -1;
    }
    if(heap->rear==heap->front){
        printf("����Ϊ��,�޷�ɾ��\n");
        return -1;
    }
    //ɾ��
    heap->front = (heap->front+1)%MAXSIZE;
    return 0;

}
//��ӡ
int printHeapinfo(Heap *heap){
    if(heap == NULL){
        printf("�����Ϊ��\n");
        return -1;
    }
    if(heap->rear==heap->front){
        printf("����Ϊ��,û��Ԫ�ش�ӡ\n");
        return -1;
    }
    int i = heap->front;
    while(i!=heap->rear){
        printf("%d\t",heap->data[i+1]);
        i = (i+1)%MAXSIZE;
    }

    printf("��ӡ���\n");
    return 0;
}
//�ͷ�
int releaseHeap(Heap *heap){
    if(heap == NULL){
        printf("�����Ϊ��\n");
        return -1;
    }
    free(heap);
    printf("�ͷ����\n");
    return 0;
}













