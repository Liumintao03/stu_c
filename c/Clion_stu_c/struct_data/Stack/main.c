//
// Created by 35376 on 2025/10/30.
//

#include "Stack-c.h"



int main(){
    SeqStack *Stack = createinit();
    for(int i = 1;i<=10;i++){//ѹջ
        pushElement(Stack,&i);
    }
    //��ӡ
    printStackinfo(Stack);
    //��ջ
    for(int i = Stack->top-1;i>=0;i--){//ѹջ
        popElement(Stack);
    }
    //��ӡ
    printStackinfo(Stack);
    //�ͷ�
    ReleaseStack(Stack);


    return 0;
}