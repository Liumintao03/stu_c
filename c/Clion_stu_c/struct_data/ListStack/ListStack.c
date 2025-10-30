//
// Created by 35376 on 2025/10/30.
//

#include "ListStack.h"

//����ջ��ʼ��
ListStack *CreateInitStack() {
    ListStack *stack = (ListStack *) malloc(sizeof(ListStack));
    memset(stack, 0, sizeof(ListStack));
    stack->top = NULL;
    stack->count = 0;
    return stack;
}

//ͷ��ջ
int pushListStack(ListStack *stack, Element *e) {
    //����Ϸ���
    if (stack == NULL) {
        printf("ջ������\n");
        return -1;
    }


    //���½ڵ�
    StackNode *stacknode = (StackNode *) malloc(sizeof(StackNode));
    memset(stacknode, 0, sizeof(StackNode));
    //����ͷ���
    stacknode->data = *e;
    stacknode->next = stack->top;
    stack->top = stacknode;
    stack->count++;
    return -0;

}

//ͷ��ջ
int popListStack(ListStack *stack) {
    if (stack == NULL) {
        printf("ջ������\n");
        return -1;
    }

    if (stack->top == 0) {
        printf("Ϊ��\n");
        return -1;
    }
    ListStack *tmp = stack->top;
    stack->top = stack->top->next;
    free(tmp);
    stack->count--;
    return 0;


}

//��ӡ
int printListStackinfo(ListStack *stack) {
    if (stack == NULL) {
        printf("ջ������\n");
        return -1;
    }

    if (stack->top == 0) {
        printf("Ϊ��\n");
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

//�ͷ�
int releaseListStack(ListStack *stack) {
    if (stack == NULL) {
        printf("ջ������\n");
        return -1;
    }

    if (stack->top == 0) {
        printf("Ϊ��\n");
        free(stack);
        return 0;

    }
    StackNode *tmp = stack->top;
    for (int i = 1; i <= stack->count; i++) {
        free(tmp);
        tmp = tmp->next;
    }
    free(stack);
    printf("�ͷ����\n");
    return 0;
}
