//
// Created by 35376 on 2025/10/31.
//

#include "list_opposite.h"

//创建链表
Listnode *createListnode(){
    Listnode *head = (Listnode *)malloc(sizeof(Listnode));
    memset(head,0,sizeof (Listnode));
    head ->next = NULL;
    return head;
}
//插入头插
int addelementListnode(Listnode *listnode,Element *e){
    //判断合法性
    if(listnode == NULL){
        printf("要插入的链表不存在");
        return -1;
    }
    Listnode *tmp = (Listnode *) malloc(sizeof (Listnode));
    tmp->data = *e;
    tmp->next = listnode->next;
    listnode->next = tmp;
    return 0;

}
//打印
int printListnode(Listnode *listnode){
    //判断合法性
    if(listnode == NULL||listnode->next==NULL){
        printf("要打印的链表不存在");
        return -1;
    }
    Listnode *tmp = listnode->next;
    while(tmp!=NULL){
        printf("%d\t",tmp->data);
        tmp = tmp->next;
    }
    printf("打印完成");
    return 0;
}
//释放
int releaseListnode(Listnode *listnode){
    //判断合法性
    if(listnode == NULL||listnode->next==NULL){
        printf("要释放的链表不存在");
        return -1;
    }
    Listnode *tmp = listnode->next;
    while(listnode->next!=NULL){
        tmp = listnode->next;
        listnode->next = tmp->next;
        free(tmp);
    }
    printf("释放完成\n");
    return 0;



}
//翻转
int oppositeListnode(Listnode *listnode){
    //判断合法性
    if(listnode == NULL||listnode->next==NULL){
        printf("要翻转的链表不存在");
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
//合并
int uniteListnode(Listnode *listnode1,Listnode *listnode2);

