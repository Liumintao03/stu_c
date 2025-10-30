//
// Created by 35376 on 2025/10/30.
//

#ifndef CLION_STU_C_STACK_C_H
#define CLION_STU_C_STACK_C_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


typedef int Element;

#define MAXSIZE 500

typedef struct SeqStack{
    Element data[MAXSIZE];
    int top;
}SeqStack;


//创建栈,初始化
SeqStack *createinit();
//入栈
int pushElement(SeqStack *Stack,Element *e);
//弹栈
int popElement(SeqStack *Stack);
//打印栈
int printStackinfo(SeqStack *Stack);
//释放栈
void ReleaseStack(SeqStack *Stack);
















#endif //CLION_STU_C_STACK_C_H
