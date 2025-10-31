//
// Created by 35376 on 2025/10/31.
//

#ifndef CLION_STU_C_LIST_OPPOSITE_H
#define CLION_STU_C_LIST_OPPOSITE_H

typedef int Element;

typedef struct Listnode{
    Element data;
    struct Listnode *next;
}Listnode;

//创建链表
Listnode *createListnode(Listnode *listnode);
//插入尾插
int addelementListnode(Listnode *listnode,Element *e);
//释放
int releaseListnode(Listnode *listnode,Element *e);
//翻转
int oppositeListnode(Listnode *listnode);
//合并
int 



#endif //CLION_STU_C_LIST_OPPOSITE_H
