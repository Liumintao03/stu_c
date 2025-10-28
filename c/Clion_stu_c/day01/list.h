//
// Created by 35376 on 2025/10/27.
//

#ifndef CLION_STU_C_LIST_H
#define CLION_STU_C_LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


#define Element int


typedef struct seqTable{
    Element data[200];
    int capacity;//最大容量
    int count;//存了多少元素

}SseqTable;
//创建顺序表,初始化
SseqTable *createSseqTable();
// 顺序表的销毁
int releaseSseqTable(SseqTable *table);
// 添加元素
int insertSseqTableElementByTail(SseqTable *table, Element e);
int insertSseqTableElementByHead(SseqTable *table, Element e);
int insertSseqTableElementByRandom(SseqTable *table, Element e);
// pos 【1, cnt + 1】
int insertSseqTableElementByPos(SseqTable *table, int pos, Element e);
// 删除元素
int deleteSseqTableElementByTail(SseqTable *table);
int deleteSseqTableElementByHead(SseqTable *table);
int deleteSseqTableElementByRandom(SseqTable *table);
int deleteSseqTableElementByPos(SseqTable *table, int pos);
// 遍历表 打印所有的元素信息
int showTable(SseqTable *table);
#endif //CLION_STU_C_LIST_H
