//
// Created by 35376 on 2025/10/30.
//

#include "ListStack.h"

//创建栈初始化
ListStack *CreateInitStack() {
    ListStack *stack = (ListStack *) malloc(sizeof(ListStack));
    memset(stack, 0, sizeof(ListStack));
    stack->top = NULL;
    stack->count = 0;
    return stack;
}

//头入栈
int pushListStack(ListStack *stack, Element *e) {
    //检验合法性
    if (stack == NULL) {
        printf("栈不存在\n");
        return -1;
    }


    //定下节点
    StackNode *stacknode = (StackNode *) malloc(sizeof(StackNode));
    memset(stacknode, 0, sizeof(StackNode));
    //插入头结点
    stacknode->data = *e;
    stacknode->next = stack->top;
    stack->top = stacknode;
    stack->count++;
    return -0;

}

//头出栈
int popListStack(ListStack *stack) {
    if (stack == NULL) {
        printf("栈不存在\n");
        return -1;
    }

    if (stack->top == 0) {
        printf("为空\n");
        return -1;
    }
    ListStack *tmp = stack->top;
    stack->top = stack->top->next;
    free(tmp);
    stack->count--;
    return 0;


}

//打印
int printListStackinfo(ListStack *stack) {
    if (stack == NULL) {
        printf("栈不存在\n");
        return -1;
    }

    if (stack->top == 0) {
        printf("为空\n");
        return -1;
    }
    StackNode *tmp = stack->top;
    for (int i = 1; i <= stack->count; i++) {
        printf("%d\t", tmp->data);
        tmp = tmp->next;
    }
    printf("\n");
    return 0;
}

//释放
int releaseListStack(ListStack *stack) {
    if (stack == NULL) {
        printf("栈不存在\n");
        return -1;
    }

    if (stack->top == 0) {
        printf("为空\n");
        free(stack);
        return 0;

    }
    StackNode *tmp = stack->top;
    for (int i = 1; i <= stack->count; i++) {
        free(tmp);
        tmp = tmp->next;
    }
    free(stack);
    printf("释放完成\n");
    return 0;
}
