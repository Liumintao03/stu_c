//
// Created by 35376 on 2025/10/27.
//

#include "list.h"
int main(){
    //初始化
    SseqTable *list = (SseqTable *)createSseqTable(list);

    //插入元素
    //尾插
    insertSseqTableElementByTail(list, 1);
    insertSseqTableElementByTail(list, 9);
    insertSseqTableElementByTail(list, 8);
    showTable(list);
    //头插
    insertSseqTableElementByHead(list, 2);
    showTable(list);
    //随机插
    insertSseqTableElementByRandom(list,3);
    showTable(list);
    //固定插
    insertSseqTableElementByPos(list,2,4);
    showTable(list);

    //删除元素
    //随机删
    deleteSseqTableElementByRandom(list);
    showTable(list);
    //尾删
    deleteSseqTableElementByTail(list);
    showTable(list);
    //头删
    deleteSseqTableElementByHead(list);
    showTable(list);
    //固定删
    deleteSseqTableElementByPos(list,2);
    showTable(list);

    //释放
    releaseSseqTable(list);

    return 0;
}