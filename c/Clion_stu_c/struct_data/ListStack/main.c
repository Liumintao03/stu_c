//
// Created by 35376 on 2025/10/30.
//
#include "ListStack.h"

int main(){
    ListStack *Stack = CreateInitStack();
    //��ջ
    for(int i = 1;i<=10;i++){
        pushListStack(Stack,&i);
    }
    //��ӡ
    printListStackinfo(Stack);
    //��ջ
    int n = Stack->count;
    for(int i = 1;i<= n;i++){
        popListStack(Stack);
    }
    //��ӡ
    printListStackinfo(Stack);
    //�ͷ�
    releaseListStack(Stack);

}











