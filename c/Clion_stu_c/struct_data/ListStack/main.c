//
// Created by 35376 on 2025/10/30.
//
#include "ListStack.h"

int main(){
    ListStack *Stack = CreateInitStack();
    //入栈
    for(int i = 1;i<=10;i++){
        pushListStack(Stack,&i);
    }
    //打印
    printListStackinfo(Stack);
    //出栈
    int n = Stack->count;
    for(int i = 1;i<= n;i++){
        popListStack(Stack);
    }
    //打印
    printListStackinfo(Stack);
    //释放
    releaseListStack(Stack);

}











