//
// Created by 35376 on 2025/10/28.
//

#include "variable_list.h"


//顺序表创建,初始化
SeqTable *creatTableinit(){
    SeqTable *table = (SeqTable *)malloc(sizeof (SeqTable));
    memset(table,0,sizeof (SeqTable ));
    table->capacity = 10;
    return table;
};

//插入元素
//头插
int addElementHead(SeqTable *table,Element e){
    

};
