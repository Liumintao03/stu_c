//
// Created by 35376 on 2025/10/24.
//

#ifndef C_FUN_H
#define C_FUN_H


#include<stdio.h>
#include<stdlib.h>


#define ElemType int
#define Location int

#define NUM 4

//链表一个节点
typedef struct node {
    ElemType data;
    struct node *next;//创建指向下一个节点的指针为链表节类型
} Node;

//链表初始化
Node *initList();
//链表插入
void insertHead(Node *L, ElemType e);
//找到尾节点
Node *TailNode(Node *L);
//尾结点插入数据
Node *insertTail(Node *L, ElemType e);
//指定位置插入,需要传入链表,位置,插入元素
Node *insertNodeAnywhere(Node *L, Location pos, ElemType e);
//删除指定位置的节点
Node *deletNode(Node *L, Location pos);
//获取链表长度
int Nodelistlength(Node *L);
//遍历打印链表
void NodelistInfo(Node *L);
//释放链表
int freeNodelist(Node *L);
//快慢指针,查找倒数第n个节点的数据
ElemType fast_or_slow_check(Node *L,int n);

#endif //C_FUN_H
