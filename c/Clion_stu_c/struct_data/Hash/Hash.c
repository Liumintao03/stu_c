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
        printf("申请哈希表失败\n");
        return NULL;
    }
    //确认表大小
    hashTable->size = size;
    //申请哈希表空间大小
    hashTable->table = (HashNode**) malloc(sizeof (HashNode)*size);
    memset(hashTable->table,0,sizeof (HashNode)*size);
    return hashTable;
}

//计算位置函数
static int funcHash(int key,int size){
    return key%size;
}

//2.插入元素,传入表,插入元素的键值,元素的值
int insertHashElement(HashTable *hashTable,int key,Element e){
    //验证元素合法性
    if(hashTable == NULL){
        printf("要插入元素的哈希表为空\n");
        return -1;
    }
    //插入
    //找到插入节点
    int index = funcHash(key,hashTable->size);
    //创建新节点
    HashNode *newNode = (HashNode *)malloc(sizeof (HashNode));
    newNode->key = key;
    newNode->value = e;
    newNode->next = NULL;













}

//3.删除元素
int deletHashElement(HashTable *hashTable,int key);

//4.查找
int searchHash(HashTable *hashTable,int key);

//5.释放
int releaseHash(HashTable *hashTable);


