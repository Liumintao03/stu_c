//
// Created by 35376 on 2025/10/27.
//

#include "list.h"

//创建顺序表,初始化
SseqTable *createSseqTable(){
    SseqTable *list = (SseqTable *)malloc(sizeof (SseqTable));
    memset(list,0,sizeof(SseqTable));
    list->capacity = 200;
    return list;
}

// 顺序表的销毁
int releaseSseqTable(SseqTable *table){
    if(table==NULL){
        printf("不需要销毁,因为为空\n");
        return -1;
    }
    free(table);
};

//尾部插入元素
int insertSseqTableElementByTail(SseqTable *table, Element e){
    //判断传入的表是否为空
    if(table==NULL){
        printf("插入元素传入的表为空");
        return -1;
    }
    //判断是否表满
    if(table->count>=table->capacity){
        printf("元素满了\n");
        return -1;
    }
    table->data[table->count]=e;
    table->count++;
    return 0;
}

//头部插入元素
int insertSseqTableElementByHead(SseqTable *table, Element e){
    //判断传入的表是否为空
    if(table==NULL){
        printf("插入元素传入的表为空");
        return -1;
    }
    //判断是否表满
    if(table->count>=table->capacity){
        printf("元素满了\n");
        return -1;
    }

    //将每个元素往后移一位
    for(int i=table->count-1;i>=0;i--){
        table->data[i+1] = table->data[i];
    }
    table->data[0] = e;
    table->count++;
    return  0;
}

//随机位置插入元素
int insertSseqTableElementByRandom(SseqTable *table, Element e){
    srand(time(NULL));
    int pos = rand()%table->count+1;
    insertSseqTableElementByPos(table,pos,e);
}

//指定位置插入元素
// pos 【1, cnt + 1】
int insertSseqTableElementByPos(SseqTable *table, int pos, Element e){
    //判断传入的表是否为空
    if(table==NULL){
        printf("插入元素传入的表为空");
        return -1;
    }
    //判断是否表满
    if(table->count>=table->capacity){
        printf("元素满了\n");
        return -1;
    }
    if(pos>table->count||pos<0){
        printf("插入的元素位置不符合要求");
        return  -1;
    }
    for(int i = table->count-1;i>=pos-1;i--){
        table->data[i+1] = table->data[i];
    }
    table->data[pos-1] = e;
    table->count++;
    return 0;
}

// 删除元素
//尾部删除元素
int deleteSseqTableElementByTail(SseqTable *table){
    //判断传入的表是否为空
    if(table==NULL){
        printf("插入元素传入的表为空");
        return -1;
    }
    //判断表里面是否还有元素
    if(table->count==0){
        printf("表内元素为空,无法删除\n");
        return -1;
    }
    table->count--;
    return 0;
}

//头部删除元素
int deleteSseqTableElementByHead(SseqTable *table){
    //判断传入的表是否为空
    if(table==NULL){
        printf("删除元素传入的表为空");
        return -1;
    }
    //判断表里面是否还有元素
    if(table->count==0){
        printf("表内元素为空,无法删除\n");
        return -1;
    }
    for(int i = 0;i<table->count-1;i++){
        table->data[i] = table->data[i+1];
    }
    table->count--;
    return 0;


}

//随机位置删除元素
int deleteSseqTableElementByRandom(SseqTable *table){
    srand(time(NULL));
    int pos = rand()%table->count+1;
    deleteSseqTableElementByPos(table,pos);
}

//指定位置删除元素
int deleteSseqTableElementByPos(SseqTable *table, int pos){
    if(table==NULL){
        printf("删除元素传入的表为空");
        return -1;
    }
    //判断表里面是否还有元素
    if(table->count==0){
        printf("表内元素为空,无法删除\n");
        return -1;
    }
    if(pos>table->count||pos<0){
        printf("插入的元素位置不符合要求");
        return  -1;
    }

    for(int i=pos-1;i<table->count-1;i++){
        table->data[i] = table->data[i+1];
    }
    table->count--;
    return 0;

}

// 遍历表 打印所有的元素信息
int showTable(SseqTable *table){
    if(table==NULL){
        printf("打印元素传入的表为空");
        return -1;
    }
    printf("顺序表长度为:%d\n",table->count);
    for(int i = 0;i<table->count;i++){
        printf("%d\n",table->data[i]);

    }
    return 0;
}