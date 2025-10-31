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
//插入尾插
int addelementListnode(Listnode *listnode,Element *e){
    //判断合法性
    if(listnode == NULL){
        printf("要插入的链表不存在");
        return -1;
    }
    Listnode *tmp = (Listnode *) malloc(sizeof (Listnode));
    tmp->data = *e;
    tmp->next = NULL;
    listnode->next = tmp;
    return 0;

}
//释放
int releaseListnode(Listnode *listnode){
    //判断合法性
    if(listnode == NULL){
        printf("要插入的链表不存在");
        return -1;
    }





}
//翻转
int oppositeListnode(Listnode *listnode);
//合并
int uniteListnode(Listnode *listnode1,Listnode *listnode2);

