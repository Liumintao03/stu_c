//
// Created by 35376 on 2025/11/3.
//

#ifndef CLION_STU_C_HASH_H
#define CLION_STU_C_HASH_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Element int

//定义节点
typedef struct HashNode{
    //键值
    int key;
    //存放的值
    Element value;
    //下一个节点
    struct  HashNode *next;
}HashNode;

//定义哈希表
typedef struct HashTable{
    //大小
    int size;
    //表的指针数组,头指针就是hashtable
    struct HashTable **hashtable;

}HashTable;








//







#endif //CLION_STU_C_HASH_H
