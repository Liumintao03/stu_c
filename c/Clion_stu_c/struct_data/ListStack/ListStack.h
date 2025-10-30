//
// Created by 35376 on 2025/10/30.
//

#ifndef CLION_STU_C_LISTSTACK_H
#define CLION_STU_C_LISTSTACK_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef int Element;


//����ڵ�
typedef struct StackNode{
    Element data;
    struct StackNode *next;
}StackNode;

//����ͷ���
typedef struct ListStack{
    int count;
    StackNode *top;
}ListStack;

//����ջ��ʼ��
ListStack *CreateInitStack();
//ͷ��ջ
int pushListStack(ListStack *stack,Element *e);
//ͷ��ջ
int popListStack(ListStack *stack);
//��ӡ
int printListStackinfo(ListStack *stack);
//�ͷ�
int releaseListStack(ListStack *stack);






#endif //CLION_STU_C_LISTSTACK_H
