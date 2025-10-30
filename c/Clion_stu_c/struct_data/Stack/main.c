//
// Created by 35376 on 2025/10/30.
//

#include "Stack-c.h"



int main(){
    SeqStack *Stack = createinit();
    for(int i = 1;i<=10;i++){//—π’ª
        pushElement(Stack,&i);
    }
    //¥Ú”°
    printStackinfo(Stack);
    //≥ˆ’ª
    for(int i = Stack->top-1;i>=0;i--){//—π’ª
        popElement(Stack);
    }
    //¥Ú”°
    printStackinfo(Stack);
    // Õ∑≈
    ReleaseStack(Stack);


    return 0;
}