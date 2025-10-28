//
// Created by 35376 on 2025/10/28.
//

#include "variable_list.h"

int main(){

    SeqTable *list = (SeqTable *)creatTableinit();
    printf("======================================\n");
    printf("===========欢迎来到学生管理系统===========\n");
    printf("======================================\n");
    while(1){
        printf("===========请选择你的操作:===========\n");
        printf("1.查询\t2.增添\t3.删除\t4.退出");

        int op = 0;
        scanf("%d",&op);
        if(op == 4){
            break;
        }
        int res = operation(list,op);
    }




    return 0;
}





















