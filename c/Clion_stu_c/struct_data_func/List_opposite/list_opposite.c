//
// Created by 35376 on 2025/10/31.
//

#include "list_opposite.h"

//��������
Listnode *createListnode(){
    Listnode *head = (Listnode *)malloc(sizeof(Listnode));
    memset(head,0,sizeof (Listnode));
    head ->next = NULL;
    return head;
}
//����ͷ��
int addelementListnode(Listnode *listnode,Element *e){
    //�жϺϷ���
    if(listnode == NULL){
        printf("Ҫ�������������");
        return -1;
    }
    Listnode *tmp = (Listnode *) malloc(sizeof (Listnode));
    tmp->data = *e;
    tmp->next = listnode->next;
    listnode->next = tmp;
    return 0;

}
//��ӡ
int printListnode(Listnode *listnode){
    //�жϺϷ���
    if(listnode == NULL||listnode->next==NULL){
        printf("Ҫ��ӡ����������");
        return -1;
    }
    Listnode *tmp = listnode->next;
    while(tmp!=NULL){
        printf("%d\t",tmp->data);
        tmp = tmp->next;
    }
    printf("��ӡ���");
    return 0;
}
//�ͷ�
int releaseListnode(Listnode *listnode){
    //�жϺϷ���
    if(listnode == NULL||listnode->next==NULL){
        printf("Ҫ�ͷŵ���������");
        return -1;
    }
    Listnode *tmp = listnode->next;
    while(listnode->next!=NULL){
        tmp = listnode->next;
        listnode->next = tmp->next;
        free(tmp);
    }
    printf("�ͷ����\n");
    return 0;



}
//��ת
int oppositeListnode(Listnode *listnode){
    //�жϺϷ���
    if(listnode == NULL||listnode->next==NULL){
        printf("Ҫ��ת����������");
        return -1;
    }

    Listnode *first = NULL;
    Listnode *second = listnode->next;
    Listnode *third = second->next;
    while(third!=NULL){
        second->next = first;
        first = second;
        second = third;
        third = third->next;
    }
    listnode->next = second;
    return 0;

}
//�ϲ�
int uniteListnode(Listnode *listnode1,Listnode *listnode2);

