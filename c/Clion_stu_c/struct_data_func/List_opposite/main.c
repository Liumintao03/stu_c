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
    for(int i = 0;i<=13;i+=3){
        addelementListnode(listnode1,&i);
    }
    for(int i = 1;i<=14;i+=3){
        addelementListnode(listnode2,&i);
    }
    //��ӡ
    printListnode(listnode1);
    printListnode(listnode2);
    //����
    Listnode *newListnode =  uniteListnode(listnode1,listnode2);
    //��ӡ
    printListnode(newListnode);
    //�ͷ�
    releaseListnode(listnode1);
    releaseListnode(listnode2);
    releaseListnode(newListnode);




    return 0;
}
