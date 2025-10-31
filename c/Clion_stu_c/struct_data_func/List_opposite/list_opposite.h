//
// Created by 35376 on 2025/10/31.
//

#ifndef CLION_STU_C_LIST_OPPOSITE_H
#define CLION_STU_C_LIST_OPPOSITE_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef int Element;

typedef struct Listnode{
    Element data;
    struct Listnode *next;
}Listnode;

//创建链表
Listnode *createListnode();
//插入尾插
int addelementListnode(Listnode *listnode,Element *e);
//打印
int printListnode(Listnode *listnode);
//释放
int releaseListnode(Listnode *listnode);
//翻转
int oppositeListnode(Listnode *listnode);
//有序链表合并
Listnode *uniteListnode(Listnode *listnode1,Listnode *listnode2);
//有序数组合并
int *unitedarr(int *arr1,int *arr2);


#endif //CLION_STU_C_LIST_OPPOSITE_H
