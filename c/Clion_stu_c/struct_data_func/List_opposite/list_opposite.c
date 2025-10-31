//
// Created by 35376 on 2025/10/31.
//

#include "list_opposite.h"

//��������
Listnode *createListnode(){
    Listnode *head = (Listnode *)malloc(sizeof(Listnode));
    memset(head,0,sizeof (Listnode));
    head ->next = NULL;
    return head;
}
//����ͷ��
int addelementListnode(Listnode *listnode,Element *e){
    //�жϺϷ���
    if(listnode == NULL){
        printf("Ҫ�������������\n");
        return -1;
    }
    Listnode *tmp = (Listnode *) malloc(sizeof (Listnode));
    tmp->data = *e;
    tmp->next = listnode->next;
    listnode->next = tmp;
    return 0;

}
//��ӡ
int printListnode(Listnode *listnode){
    //�жϺϷ���
    if(listnode == NULL||listnode->next==NULL){
        printf("Ҫ��ӡ����������\n");
        return -1;
    }
    Listnode *tmp = listnode->next;
    while(tmp!=NULL){
        printf("%d\t",tmp->data);
        tmp = tmp->next;
    }
    printf("��ӡ���\n");
    return 0;
}
//�ͷ�
int releaseListnode(Listnode *listnode){
    //�жϺϷ���
    if(listnode == NULL||listnode->next==NULL){
        printf("Ҫ�ͷŵ���������\n");
        return -1;
    }
    Listnode *tmp = listnode->next;
    while(listnode->next!=NULL){
        tmp = listnode->next;
        listnode->next = tmp->next;
        free(tmp);
    }
    printf("�ͷ����\n");
    return 0;



}
//��ת
int oppositeListnode(Listnode *listnode){
    //�жϺϷ���
    if(listnode == NULL||listnode->next==NULL){
        printf("Ҫ��ת����������\n");
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
//�ϲ�
Listnode *uniteListnode(Listnode *listnode1,Listnode *listnode2){
    if(listnode1==NULL||listnode1->next==NULL){
        if(listnode2&&listnode2->next){
            printf("����1Ϊ��,��������2");
            return listnode2;
        }
    }
    if(listnode2==NULL||listnode2->next==NULL){
        if(listnode1&&listnode1->next){
            printf("����2Ϊ��,��������1");
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

