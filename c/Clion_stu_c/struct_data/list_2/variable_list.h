//
// Created by 35376 on 2025/10/28.
//

#ifndef CLION_STU_C_VARIABLE_LIST_H
#define CLION_STU_C_VARIABLE_LIST_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

//表中一个元素信息
typedef struct student{
    int id;
    char name[200];
    int age;
}Student;

typedef Student  Element;

//保存元素的表
typedef struct seqTable{
    Element **data;
    int capacity;//表中元素最大数量
    int cnt;//元素数量
}SeqTable;

//顺序表创建,初始化
SeqTable *creatTableinit();
//插入元素
//头插
int addElementHead(SeqTable *table,Element *e);
//尾插
int addElementTail(SeqTable *table,Element *e);
//选择位置插
int addElementPose(SeqTable *table,int pos,Element *e);
//随机位置插
int addElementRand(SeqTable *table,Element *e);

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

int operation( SeqTable *table,int op);









#endif //CLION_STU_C_VARIABLE_LIST_H
