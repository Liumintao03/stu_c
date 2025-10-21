#include<stdio.h>

typedef int ElemType;
#define MAXSIZE 100

//创建顺序表,以结构体形式
typedef struct{
    ElemType data[MAXSIZE];
    int length;
}SeqList;

//顺序表初始化
void initList(SeqList *L){
    L->length =0;
}

//顺序表尾部添加元素
int appendElem(SeqList *L,ElemType e){
    if(L->length>=MAXSIZE){
        printf("顺序表已经满了");
        return -1;
    }
    L->data[L->length] = e;
    L->length++;
    return 0;
}

//遍历顺序表
void listElem(SeqList *L){
    for(int i = 0;i < L->length;i++){
        printf("%d\n",L->data[i]);
    }
    printf("\n");
}

int main(){
    SeqList list;
    initList(&list);//初始化顺序表
    ElemType e = 100;
    int add_res = appendElem(&list,e);//顺序表尾部添加元素
    listElem(&list);////遍历顺序表


    return  0;
}