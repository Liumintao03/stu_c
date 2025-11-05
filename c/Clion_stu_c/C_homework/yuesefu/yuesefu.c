//
// Created by 35376 on 2025/11/4.
//


//约瑟夫环

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define Element int

//创建节点
typedef struct ListNode{
    Element data;
    struct ListNode *next;
    int count ;
}ListNode;

//创建环形链表

ListNode *createListNode(){
    ListNode *listnode = (ListNode *)malloc(sizeof (ListNode));
    if(listnode == NULL){
        printf("创建失败\n");
        return NULL;
    }
    memset(listnode,0,sizeof (ListNode));
    listnode->data = 0;
    listnode->count = 0;
    listnode->next = NULL;
    return listnode;
}

//插入节点
int insertListnodedata(ListNode *listNode,Element data){
    //验证元素合法性
    if(listNode==NULL){
        printf("要插入的链表为空\n");
        return -1;
    }

    //如果是第一个节点
    if(listNode->next==NULL){
        ListNode *node = (ListNode *)malloc(sizeof (ListNode));
        node->data = data;
        node->next = node;
        listNode->next = node;
        listNode->count++;
        return 0;
    }


    //如果后面有元素
    ListNode *tmp = listNode->next;
    do{
        tmp = tmp->next;
    }while(tmp->next!=listNode->next);
    //创建要插入的节点
    ListNode *node = (ListNode *)malloc(sizeof (ListNode));
    node->data = data;
    node->next = listNode->next;
    //插入
    tmp->next = node;
    listNode->count++;

    return 0;
}




//打印
int printflisenodeinfo(ListNode *listNode){
    //验证元素合法性
    if(listNode==NULL||listNode->next ==NULL){
        printf("要打印的链表为空\n");
        return -1;
    }
    //顶下循环操作节点
    ListNode *tmp = listNode->next;
    do{
        printf("%d\t",tmp->data);
        tmp = tmp->next;
    }while(tmp != listNode->next);
    printf("\n");
    return 0;


}


//yuesefu环实现
//传入参数：n-》总人数，m-》第几个被删除
int yuesefu(int n,int m){
    //创建圆环
    // 创建链表
    ListNode *listNode = createListNode();
    //组成圆环
    for(int i = 1;i<=n;i++){
        insertListnodedata(listNode,i);
    }
    //打印
    printflisenodeinfo(listNode);

    //实现约瑟夫环
    ListNode *tmp = listNode->next;
    while(listNode->count>1){
        //进行移位
        for(int i = 1;i<m-1;i++){
            tmp = tmp->next;
        }
        ListNode *freeNode = tmp->next;
        tmp->next = freeNode->next;
        tmp = tmp->next;
        free(freeNode);
        listNode->count--;
        listNode->next = tmp;
        printflisenodeinfo(listNode);
    }


    return 0;
}

int main(){

    yuesefu(10,3);



    return 0;
}






















