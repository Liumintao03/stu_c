//
// Created by 35376 on 2025/10/30.
//

#include "Stack-c.h"


//����ջ,��ʼ��
SeqStack *createinit(){
    SeqStack *Stack = (SeqStack *)malloc(sizeof (SeqStack));
    if(Stack == NULL){
        printf("����ʧ��");
        return NULL;
    }
    memset(Stack,0,sizeof (SeqStack));
    Stack->top = 0;
    return Stack;

}
//��ջ
int pushElement(SeqStack *Stack,Element *e){
    //�ж��Ƿ�Ϸ�
    if(Stack == NULL){
        printf("ջ������");
        return -1;
    }
    if(Stack->top >= MAXSIZE){
        printf("����");
        return -1;
    }
    //Ԫ������
    Stack->data[Stack->top] = *e;
    Stack->top++;
    return 0;
}
//��ջ
int popElement(SeqStack *Stack){
    //�жϺϷ���
    if(Stack == NULL){
        printf("ջ������");
        return -1;
    }
    if(Stack->top <=0){
        printf("ջ��Ԫ��Ϊ��,���ܵ���");
        return -1;
    }
    //��������
    Stack->top--;
    return 0;
}
//��ӡ
int printStackinfo(SeqStack *Stack){
    //У��Ϸ���
    if(Stack == NULL){
        printf("ջ������");
        return -1;
    }
    if(Stack->top == 0){
        printf("ջΪ��");
    }
    for(int i = 0;i<=Stack->top-1;i++){
        printf("%d\t",Stack->data[i]);
    }
    printf("\n");
    return 0;
}

//�ͷ�ջ
void ReleaseStack(SeqStack *Stack){
    if(Stack){
        free(Stack);
    }
    printf("�ͷ���� ");
}
















