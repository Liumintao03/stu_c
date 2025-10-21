#include<stdio.h>

typedef int ElemType;

#define MAXSIZE 100
typedef struct{
    ElemType data[MAXSIZE];
    int length;
}SeqList;

void initList(SeqList *L){
    L->length =0;

}

int main(){
    SeqList L;
    initList(&L);

    return  0;
}