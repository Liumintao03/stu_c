//链表


#include<stdio.h>
#include<stdlib.h>

#define ElemType int

//链表一个节点
typedef struct node{
    ElemType data;
    struct node *nect;
}Node;

//链表初始化

Node *initList(){
    Node *head = (Node*)malloc(sizeof(Node));
    head->data = 0;
    head->nect = NULL;
    return head;
}

void insertHead(Node *L,ElemType e){



    
}


int main(){

    Node *list = (Node *)initList();




    return 0;
}












