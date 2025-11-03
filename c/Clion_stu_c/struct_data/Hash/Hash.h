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
    struct HashTable **table;
}HashTable;

//1.初始化表,返回表地址
 HashTable *createinithasbtable(int size);

 //2.插入元素,传入表,插入元素的键值,元素的值
 int insertHashElement(HashTable *hashTable,int key,Element e);

 //3.删除元素
 int deletHashElement(HashTable *hashTable,int key);

 //4.查找
 int searchHash(HashTable *hashTable,int key);

 //5.遍历
 int printHashinfo(HashTable *hashTable);

 //6.释放
 int releaseHash(HashTable *hashTable);
















//







#endif //CLION_STU_C_HASH_H
