//联合体所占空间大小是最大成员所占空间的大小
//定义与用法与结构体相同


#include<stdio.h>


union aabbcc{
    int a;
    char b;

};

int main(){

    union aabbcc var;
    var.a=0x12345678;
    printf("var:%x\n",var.b);



    return 0;
}








