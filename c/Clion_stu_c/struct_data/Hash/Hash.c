//
// Created by 35376 on 2025/11/3.
//

#include "Hash.h"



//1.初始化表,返回表地址
HashTable *createinithasbtable(int size){
    //申请哈希表
    HashTable *hashTable = (HashTable *) malloc(sizeof (HashTable));
    //判断是否申请成功
    if(hashTable==NULL){
        printf("申请哈希表失败");
        return NULL;
    }
     //确认表大小
     




}

//2.插入元素,传入表,插入元素的键值,元素的值
int insertHashElement(HashTable *hashTable,int key,Element e);

//3.删除元素
int deletHashElement(HashTable *hashTable,int key);

//4.查找
int searchHash(HashTable *hashTable,int key);

//5.释放
int releaseHash(HashTable *hashTable);


