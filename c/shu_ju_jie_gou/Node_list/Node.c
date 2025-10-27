// //链表

// #include "fun.h"

// //链表初始化
// Node *initList() {
//     Node *head = (Node *) malloc(sizeof(Node));
//     head->data = 0;
//     head->next = NULL;
//     return head;
// }

// //链表插入
// void insertHead(Node *L, ElemType e) {//头插法 head -- insert -- list1 -- list2 --list3
//     //1.创建一个单位连表节
//     //2.将值插入到这个单位链表节
//     //3.这个节点指向head原本指向的地址(NULL)
//     //4.将上个节点的next指向这个节点
//     Node *p = (Node *) malloc(sizeof(Node));
//     p->data = e;
//     p->next = L->next;
//     L->next = p;
// }


// //找到尾节点
// Node *TailNode(Node *L) {
//     //1.创建一个临时节点用于遍历到链表找到最后一个节点

//     Node *tail = L;
//     while (tail->next != NULL) {
//         tail = tail->next;
//     }
//     return tail;
// }

// //尾结点插入数据
// Node *insertTail(Node *L, ElemType e) {
//     //2.插入数据
//     //此时p的下一个节点为NULL了,说明p已经是最后一个节点
//     //创建新节点,写入数据
//     Node *p = (Node *) malloc(sizeof(Node));
//     p->data = e;
//     p->next = L->next;
//     //将最后一个节点指向这个新建的要插入的节点
//     L->next = p;
//     return p;
// }

// //指定位置插入,需要传入链表,位置,插入元素
// Node *insertNodeAnywhere(Node *L, Location pos, ElemType e) {
//     //1.遍历到要插入的位置
//     Node *tmp = L;
//     int i = 0;//定下遍历锚点
//     while (i < pos - 1) {
//         tmp = tmp->next;
//         i++;
//         if (tmp == NULL) {
//             printf("位置错误\n");
//             return NULL;
//         }
//     }
//     //2.创建要插入的节点
//     Node *p = (Node *) malloc(sizeof(Node));
//     p->data = e;
//     p->next = tmp->next;
//     //3.插入节点,街上后面链表
//     tmp->next = p;

// }

// //删除指定位置的节点
// Node *deletNode(Node *L, Location pos) {
//     //定下遍历节点
//     //该节点遍历到要删除的节点的上一个
//     Node *p = L;
//     for (int i = 0; i < pos - 1; i++) {
//         p = p->next;
//         if (p == NULL || p->next == NULL) {
//             printf("错误,删除位置超出范围");
//             return NULL;
//         }
//     }
//     //标记要删除的节点
//     Node *tmp = p->next;
//     //要删除的上一个节点指向删除节点的下一个节点
//     p->next = tmp->next;
//     //释放要删除的节点
//     free(tmp);
// }

// //获取链表长度
// int Nodelistlength(Node *L){
//     Node *p = L;
//     if(p->next==NULL){
//         printf("空链表\n");
//         return 0;
//     }
//     int i=0;
//     while(p->next!=NULL){
//         p = p->next;
//         i++;
//     }
//     return i;
// }

// //遍历打印链表
// void NodelistInfo(Node *L) {
//     Node *p = L->next;
//     while (p != NULL) {
//         printf("%d\n", p->data);
//         p = p->next;
//     }
//     printf("\n");
// }

// //释放链表
// int freeNodelist(Node *L){
//     Node *p = L->next;
//     Node *q;

//     while(p!=NULL){
//         q= p->next;
//         free(p);
//         p = q;
//     }
//     L->next = NULL;
//     return 0;
// }














