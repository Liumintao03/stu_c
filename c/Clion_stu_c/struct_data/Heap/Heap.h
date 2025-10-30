//
// Created by 35376 on 2025/10/30.
//

#ifndef CLION_STU_C_HEAP_H
#define CLION_STU_C_HEAP_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef int Element;
#define MAXSIZE 200

typedef struct Heap{
    Element data[MAXSIZE];
    int front;//头
    int rear;//尾
    int count;
}Heap;
//创建初始化队列
Heap *createInitHeap();
//



#endif //CLION_STU_C_HEAP_H
