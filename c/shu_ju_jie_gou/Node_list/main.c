//
// Created by 35376 on 2025/10/24.
//
#include "fun.h"

int main() {




    //================学习链表=============

//    Node *list = (Node *) initList();
//    //头插法
//    insertHead(list, 10);
//    insertHead(list, 20);
//    NodelistInfo(list);
//    //尾插法
//    Node *tail = (Node *) TailNode(list);//声明的同时求得尾节点
//    tail = insertTail(tail, 30);//从尾结点开始尾差,并且插完之后保存尾结点
//    tail = insertTail(tail, 40);
//    NodelistInfo(list);
//    //找位置插入
//    insertNodeAnywhere(list, 3, 11);//在第三个位置插入11
//    NodelistInfo(list);
//    //删除指定位置节点
//    deletNode(list, 4);
//    NodelistInfo(list);
//    //计算链表长度
//    int len = Nodelistlength(list);
//    printf("链表长度为:%d\n",len);
//
//    //释放链表
//    freeNodelist(list);
//    free(list);

    //==================end================


    //=================快慢指针==============
    Node *list = (Node*) initList();//链表初始化
    Node *tail = list;
    for(int i=0;i<10;i++){
        tail = insertTail(tail,i+1);
    }
    NodelistInfo(list);
    ElemType data = fast_or_slow_check(list,NUM);
    printf("倒数第%d个节点的值为%d\n",NUM,data);
    //快慢指针查找倒数第3个元素




    return 0;
}