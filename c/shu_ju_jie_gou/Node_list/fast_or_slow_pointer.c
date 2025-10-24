
//快慢指针查找链表倒数第n个元素
//传入参数:链表,n(倒数第几个元素)

#include "fun.h"

ElemType fast_or_slow_check(Node *L,int n){
    //定义出快慢指针
    Node *fast = L;
    Node *slow = L;
    //快指针指向后面n个
    for(int i=0;i<n;i++){
        fast=fast->next;
    }
    slow = slow->next;
    //遍历直到fast为最后一个指针
    while(fast->next!=NULL){
        fast = fast->next;
        slow = slow->next;
    }
    return slow->data;
    printf("%d\n",fast->data);
}





