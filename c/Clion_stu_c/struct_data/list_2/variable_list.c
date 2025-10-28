//
// Created by 35376 on 2025/10/28.
//

#include "variable_list.h"


//顺序表创建,初始化
SeqTable *creatTableinit() {
    SeqTable *table = (SeqTable *) malloc(sizeof(SeqTable));
    memset(table, 0, sizeof(SeqTable));
    table->capacity = 10;
    table->data = (Element **) malloc(sizeof(table->capacity) * sizeof(Element *));

    return table;
}

//插入元素
//增加容量
SeqTable *Expand(SeqTable *table) {
    //得到容量大小
    int len = table->capacity * sizeof(Element *);
    Element **tmp = (Element **) malloc(len * 2);
    //数据转移
    memset(tmp, 0, len);
    for (int i = 0; i < table->capacity; i++) {
        tmp[i] = table->data[i];
    }
    //释放原空间
    free(table->data);
    //指向新空间
    table->data = tmp;
    table->capacity = table->capacity * 2;

}


//头插
int addElementHead(SeqTable *table, Element *e) {
    //判断元素合法性
    if (table == NULL) {
        printf("表不存在\n");
        return -1;
    }
    if (table->cnt >= table->capacity) {
        printf("满了\n");
        Expand(table);
        printf("扩容成功\n");

    }
    //找到要插入的地方
    for (int i = table->cnt - 1; i >= 0; i--) {
        table->data[i + 1] = table->data[i];
    }
    //插入
    table->data[0] = e;
    table->cnt++;
    return 0;
}


//尾插
int addElementTail(SeqTable *table, Element *e) {
    //判断元素合法性
    if (table == NULL) {
        printf("表不存在\n");
        return -1;
    }
    if (table->cnt >= table->capacity) {
        printf("满了\n");
        Expand(table);
        printf("扩容成功\n");
    }
    //直接插入到最后
    table->data[table->cnt] = e;
    table->cnt++;

};

//选择位置插
int addElementPose(SeqTable *table, int pos, Element *e) {
    //判断元素合法性
    if (table == NULL) {
        printf("表不存在\n");
        return -1;
    }
    if (table->cnt >= table->capacity) {
        printf("满了\n");
        Expand(table);
        printf("扩容成功\n");
    }
    //找到位置
    for (int i = table->cnt - 1; i >= pos - 1; i--) {
        table->data[i + 1] = table->data[i];
    }
    //插入
    table->data[pos - 1] = e;
    table->cnt++;
    return 0;


}

//随机位置插
int addElementRand(SeqTable *table, Element *e) {
    //判断元素合法性
    if (table == NULL) {
        printf("表不存在\n");
        Expand(table);
        printf("扩容成功\n");
    }
    if (table->cnt >= table->capacity) {
        printf("满了\n");
        return -1;
    }
    //随机数种子
    srand(time(NULL));
    int pos = rand() % table->cnt + 1;
    addElementPose(table, pos, e);
    return 0;
}


//删除元素
//头删
int deletElementHead(SeqTable *table, Element *e) {
    //验证参数合法性
    if (table == NULL) {
        printf("要删除的表不存在\n");
        return -1;

    }
    if (table->cnt <= 0) {
        printf("表是空的");
        return -1;
    }

    //往前移
    for (int i = 0; i < table->cnt - 1; ++i) {
        table->data[i] = table->data[i - 1];

    }
    //更新
    table->cnt--;
    return 0;

}

//尾删
int deletElementtail(SeqTable *table, Element *e) {
    //验证参数合法性
    if (table == NULL) {
        printf("要删除的表不存在\n");
        return -1;

    }
    if (table->cnt <= 0) {
        printf("表是空的");
        return -1;
    }
    //删除
    table->cnt--;
    return 0;

}

//选择位置删
int deletElementpos(SeqTable *table, int pos, Element *e) {
    //验证参数合法性
    if (table == NULL) {
        printf("要删除的表不存在\n");
        return -1;

    }
    if (table->cnt <= 0) {
        printf("表是空的");
        return -1;
    }
    //这个位置后面的节点全部往前移
    for (int i = pos; i < table->cnt-1;i++){
        table->data[i] = table->data[i+1];

    }
    //更新
    table->cnt--;
    return 0;


}

//随机位置删
int deletElementrand(SeqTable *table, Element *e){
    //验证参数合法性
    if (table == NULL) {
        printf("要删除的表不存在\n");
        return -1;

    }
    if (table->cnt <= 0) {
        printf("表是空的");
        return -1;
    }
    srand(time(NULL));
    int pos = rand() % table->cnt + 1;
    deletElementpos(table,pos,e);
    return 0;
}

//打印
int showTableinfo(SeqTable *table){
    //验证参数合法性
    if (table == NULL) {
        printf("要打印的表不存在\n");
        return -1;

    }

    for (int i = 0;i<table->cnt;i++){
        printf("[%d]:id:%d, name:%s, age:%d\n",i,table->data[i]->id,table->data[i]->name,table->data[i]->age);
    }
    return 0;
}

//释放
int releaseTable(SeqTable *table){
    if (table == NULL) {
        printf("要释放的表不存在\n");
        return -1;
    }
    if(table->data == NULL){
        printf("表中的数据不存在\n");
        return -1;
    }
    free(table->data);
    free(table);
    return 0;
}




