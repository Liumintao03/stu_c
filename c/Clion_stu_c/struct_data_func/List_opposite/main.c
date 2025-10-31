//
// Created by 35376 on 2025/10/31.
//

#include "list_opposite.h"


int main(){

    //创建链表
    Listnode *listnode = createListnode();
    //插入元素
    for (int i = 1; i <=10 ; ++i) {
        addelementListnode(listnode,&i);
    }
    printListnode(listnode);
    //翻转
    oppositeListnode(listnode);
    //打印
    printListnode(listnode);
    //释放
    releaseListnode(listnode);
    //创建两条链表
    Listnode *listnode1 = createListnode();
    Listnode *listnode2 = createListnode();
    //插入
    for(int i = 1;i<=10;i+=2){
        
    }



    return 0;
}
