//
// Created by 35376 on 2025/10/28.
//

#include "variable_list.h"

int main(){
    SeqTable *list = (SeqTable *)creatTableinit();
    int res = 1;
    printf("======================================\n");
    printf("===========��ӭ����ѧ������ϵͳ===========\n");
    printf("======================================\n");
    while(res){
        printf("===========��ѡ����Ĳ���:===========\n");
        printf("1.��ѯ\t2.����\t3.ɾ��\t4.�˳�\n");
        int op = 0;
        scanf("%d",&op);
        if(op == 4){
            break;
        }
        res = operation(list,op);
    }
    releaseTable(list);
    printf("��л���ʹ��\n");
    return 0;
}





















