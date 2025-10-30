//
// Created by 35376 on 2025/10/30.
//

#include "Stack-c.h"


//创建栈,初始化
SeqStack *createinit(){
    SeqStack *Stack = (SeqStack *)malloc(sizeof (SeqStack));
    if(Stack == NULL){
        printf("创建失败");
        return NULL;
    }
    memset(Stack,0,sizeof (SeqStack));
    Stack->top = 0;
    return Stack;

}
//入栈
int pushElement(SeqStack *Stack,Element *e){
    //判断是否合法
    if(Stack == NULL){
        printf("栈不存在");
        return -1;
    }
    if(Stack->top >= MAXSIZE){
        printf("满了");
        return -1;
    }
    //元素增加
    Stack->data[Stack->top] = *e;
    Stack->top++;
    return 0;
}
//弹栈
int popElement(SeqStack *Stack){
    //判断合法性
    if(Stack == NULL){
        printf("栈不存在");
        return -1;
    }
    if(Stack->top <=0){
        printf("栈中元素为空,不能弹出");
        return -1;
    }
    //弹出操作
    Stack->top--;
    return 0;
}
//打印
int printStackinfo(SeqStack *Stack){
    //校验合法性
    if(Stack == NULL){
        printf("栈不存在");
        return -1;
    }
    if(Stack->top == 0){
        printf("栈为空");
    }
    for(int i = 0;i<=Stack->top-1;i++){
        printf("%d\t",Stack->data[i]);
    }
    printf("\n");
    return 0;
}

//释放栈
void ReleaseStack(SeqStack *Stack){
    if(Stack){
        free(Stack);
    }
    printf("释放完成 ");
}
















