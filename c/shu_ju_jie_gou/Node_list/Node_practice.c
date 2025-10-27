
// //快慢指针查找链表倒数第n个元素
// //传入参数:链表,n(倒数第几个元素)

// #include "fun.h"
// //快慢指针解题
// ElemType fast_or_slow_check(Node *L,int n){
//     //定义出快慢指针
//     Node *fast = L->next;
//     Node *slow = L->next;
//     //快指针指向后面n个
//     for(int i=1;i<n;i++){
//         fast=fast->next;
//     }
//     //遍历直到fast为最后一个指针
//     while(fast->next != NULL){
//         fast = fast->next;
//         slow = slow->next;
//     }
//     return slow->data;
// }


// //反转链表
// void reversalNodeList(Node *L){
//     //1. 定义出first,second,third三个指针,分别指向head,head->next,second->next
//     Node *first = NULL;
//     Node *second = L->next;
//     Node *third = second->next;

//     //4.循环2===3步
//     while(second!=NULL){
//         //2.使得second指向first,
//         second->next = first;
//         //3.first,second,third向后挪一位
//         first = second;
//         second = third;
//         if(third!=NULL){
//         third = third->next;
//         }
//     }
//     L->next = first;
    


// }



