//
// Created by 35376 on 2025/10/31.
//

#include "list_opposite.h"


int main(){

    //��������
    Listnode *listnode = createListnode();
    //����Ԫ��
    for (int i = 1; i <=10 ; ++i) {
        addelementListnode(listnode,&i);
    }
    printListnode(listnode);
    //��ת
    oppositeListnode(listnode);
    //��ӡ
    printListnode(listnode);
    //�ͷ�
    releaseListnode(listnode);
    //������������
    Listnode *listnode1 = createListnode();
    Listnode *listnode2 = createListnode();
    //����
    for(int i = 1;i<=10;i+=2){
        
    }



    return 0;
}
