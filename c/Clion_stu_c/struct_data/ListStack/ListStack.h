//
// Created by 35376 on 2025/10/30.
//

#ifndef CLION_STU_C_LISTSTACK_H
#define CLION_STU_C_LISTSTACK_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef int Element;


//定义节点
typedef struct StackNode{
    Element data;
    struct StackNode *next;
}StackNode;

//定义头结点
typedef struct ListStack{
    int count;
    StackNode *top;
}ListStack;

//创建栈初始化
ListStack *CreateInitStack();
//头入栈
int pushListStack(ListStack *stack,Element *e);
//头出栈
int popListStack(ListStack *stack);
//打印
int printListStackinfo(ListStack *stack);
//释放
int releaseListStack(ListStack *stack);






#endif //CLION_STU_C_LISTSTACK_H
