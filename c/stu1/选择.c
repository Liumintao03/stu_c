#include<stdio.h>


int main(){
    int day = 0;
    scanf("%d",&day);


    switch(day){
        case 1://case 必须是 整形 常量 表达式
        printf("星期1");break;
        case 2:
        printf("星期2");break;
        case 3:
        printf("星期3");break;
        case 4:
        printf("星期4");break;
        case 5:
        printf("星期5");break;
        case 6:
        printf("星期6");break;
        case 7:
        printf("星期天");break;
        default://输入的值不在case范围内，全部进入default
        printf("选择错误");break;

    }

    return 0;
}