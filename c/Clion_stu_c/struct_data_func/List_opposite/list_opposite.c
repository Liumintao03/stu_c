//
// Created by 35376 on 2025/10/31.
//

#include "list_opposite.h"

//创建链表
Listnode *createListnode(){
    Listnode *head = (Listnode *)malloc(sizeof(Listnode));
    memset(head,0,sizeof (Listnode));
    head ->next = NULL;
    return head;
}
//插入头插
int addelementListnode(Listnode *listnode,Element *e){
    //判断合法性
    if(listnode == NULL){
        printf("要插入的链表不存在\n");
        return -1;
    }
    Listnode *tmp = (Listnode *) malloc(sizeof (Listnode));
    tmp->data = *e;
    tmp->next = listnode->next;
    listnode->next = tmp;
    return 0;

}
//打印
int printListnode(Listnode *listnode){
    //判断合法性
    if(listnode == NULL||listnode->next==NULL){
        printf("要打印的链表不存在\n");
        return -1;
    }
    Listnode *tmp = listnode->next;
    while(tmp!=NULL){
        printf("%d\t",tmp->data);
        tmp = tmp->next;
    }
    printf("打印完成\n");
    return 0;
}
//释放
int releaseListnode(Listnode *listnode){
    //判断合法性
    if(listnode == NULL||listnode->next==NULL){
        printf("要释放的链表不存在\n");
        return -1;
    }
    Listnode *tmp = listnode->next;
    while(listnode->next!=NULL){
        tmp = listnode->next;
        listnode->next = tmp->next;
        free(tmp);
    }
    printf("释放完成\n");
    return 0;



}
//翻转
int oppositeListnode(Listnode *listnode){
    //判断合法性
    if(listnode == NULL||listnode->next==NULL){
        printf("要翻转的链表不存在\n");
        return -1;
    }

    Listnode *first = NULL;
    Listnode *second = listnode->next;
    Listnode *third = second->next;
    while(third!=NULL){
        second->next = first;
        first = second;
        second = third;
        third = third->next;
    }
    second->next = first;
    listnode->next = second;
    return 0;

}
//合并
Listnode *uniteListnode(Listnode *listnode1,Listnode *listnode2){
    if(listnode1==NULL||listnode1->next==NULL){
        if(listnode2&&listnode2->next){
            printf("链表1为空,返回链表2");
            return listnode2;
        }
    }
    if(listnode2==NULL||listnode2->next==NULL){
        if(listnode1&&listnode1->next){
            printf("链表2为空,返回链表1");
            return listnode1;
        }
    }
    Listnode *l1 = listnode1->next;
    Listnode *l2 = listnode2->next;
    Listnode *newListnode = createListnode();
    Listnode *p = newListnode;
    while(l1!=NULL||l2!=NULL){
        Listnode *tmp1 = (Listnode *) malloc(sizeof (Listnode));

        if(l1==NULL){
            tmp1->data = l2->data;
            tmp1->next = NULL;
            p->next = tmp1;
            p = p->next;
            l2 = l2->next;
        } else if(l2 ==NULL){
            tmp1->data = l1->data;
            tmp1->next = l1;
            p->next = tmp1;
            p = p->next;
            l2 = l1->next;
        }
        else if(l1&&l2){
            Listnode *tmp2 = (Listnode *) malloc(sizeof (Listnode));
            if(l1->data>=l2->data){
                tmp1->data = l1->data;
                tmp2->data = l2->data;
                tmp1->next = tmp2;
                tmp2->next=NULL;
                p->next = tmp1;
                p = p->next->next;
                l1 = l1->next;
                l2 = l2->next;
            }
            else if(l2->data>=l1->data){
                tmp1->data = l2->data;
                tmp2->data = l1->data;
                tmp1->next = tmp2;
                tmp2->next=NULL;
                p->next = tmp1;
                p = p->next->next;
                l1 = l1->next;
                l2 = l2->next;
            }
        }



    }



    return newListnode;
}

