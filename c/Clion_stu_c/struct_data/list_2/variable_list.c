//
// Created by 35376 on 2025/10/28.
//

#include "variable_list.h"


//顺序表创建,初始化
SeqTable *creatTableinit(){
    SeqTable *table = (SeqTable *)malloc(sizeof (SeqTable));
    memset(table,0,sizeof (SeqTable ));
    table->capacity = 10;
    table->data = (Element *) malloc(sizeof(table->capacity)*sizeof (table->data));

    return table;
}

//插入元素
//增加容量
SeqTable *Expand(SeqTable *table){
    //得到容量大小
    Element **tmp = (Element *) malloc(sizeof(table->data[0])*sizeof(table->capacity)*2);
    //数据转移
    for(int i = 0;i<table->capacity;i++){
        tmp[i] = table->data[i];
    }
    //释放原空间
    free(table->data);
    //指向新空间
    table->data = tmp;
}



//头插
int addElementHead(SeqTable *table,Element *e){
    //判断元素合法性
    if(table = NULL){
        printf("表不存在\n");
        return -1;
    }
    if(table->cnt>=table->capacity){
        printf("满了\n");
        return -1;
    }
    //找到要插入的地方
    for(int i = table->cnt-1;i>=0;i--){
        table->data[i+1] = table->data[i];
    }
    //插入
    table->data[0] = e;
    table->cnt++;
    return 0;
}


//尾插
int addElementTail(SeqTable *table,Element *e){
    //判断元素合法性
    if(table = NULL){
        printf("表不存在\n");
        return -1;
    }
    if(table->cnt>=table->capacity){
        printf("满了\n");
        return -1;
    }
    //直接插入到最后
    table->data[table->cnt] = e;
    table->cnt++;

};
//选择位置插
int addElementPose(SeqTable *table,int pos,Element *e){
    //判断元素合法性
    if(table = NULL){
        printf("表不存在\n");
        return -1;
    }
    if(table->cnt>=table->capacity){
        printf("满了\n");
        return -1;
    }
    //找到位置
    for (int i = table->cnt-1; i >= pos-1; i--) {
        table->data[i+1] = table->data[i];
    }
    //插入
    table->data[pos-1] = e;
    table->cnt++;
    return 0;


}
//随机位置插
int addElementRand(SeqTable *table,Element *e){
    //判断元素合法性
    if(table = NULL){
        printf("表不存在\n");
        return -1;
    }
    if(table->cnt>=table->capacity){
        printf("满了\n");
        return -1;
    }
    //随机数种子
    srand(time(NULL));
    int pos = rand()%table->cnt+1;
    addElementPose(table,pos,e);
    return 0;
}



//删除元素
//头删
int deletElementHead(SeqTable *table,Element *e);

//尾删
int deletElementtail(SeqTable *table,Element *e);

//选择位置删
int deletElementpos(SeqTable *table,int pos,Element *e);

//随机位置删
int deletElementrand(SeqTable *table,Element *e);
//打印
int showTableinfo(SeqTable *table);

//释放
int releaseTable(SeqTable *table);




