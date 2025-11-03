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
    //如果这个地方没有节点,直接插入
    if(hashTable->table[index]==NULL){
        //这个指针数组的这一个元素存放新的节点
        hashTable->table[index] = newNode;
        return 0;
    }
    else{//说明这个指针存放了,如果要插入得插在这个后面,或者改变后面相同key的值
        //开始时标记头结点,随后使用这个tmp指针来进行操作
        HashNode *tmp = hashTable->table[index];
        while(tmp!=NULL)//以这个节点来判断链表是否还存在节点
        {
            //判断是否有相同key节点,有的话直接改变值并且释放新建节点
            if(tmp->key == key){
                tmp->value = e;
                return 0;
            }
            //在里面判断tmp是否走到最后一个有效节点,在外面判断的话,无法找到前一个节点,导致无法插入
            if(tmp->next == NULL){
                break;
            }
            //刷新节点
            tmp = tmp->next;
        }
        //此时tmp指向的就是最后一个有效节点,直接可以插入到tmp后面
        tmp->next = newNode;
        return 0;
    }

}

//3.删除元素
int deletHashElement(HashTable *hashTable,int key){
    //判断元素合法性
    if(hashTable==NULL){
        printf("要删除元素的哈希表不存在\n");
        return -1;
    }
    //记录是在表的第几行的链表
    int index = funcHash(key,hashTable->size);
    //定下链表头的节点,用来进行对链表的操作
    HashNode *tmp = hashTable->table[index];
    //进行这个哈希表的对应行的链表遍历,直到找到要删除的节点
    while(tmp!=NULL){
        if()
    }
}

//4.查找
int searchHash(HashTable *hashTable,int key);

//5.释放
int releaseHash(HashTable *hashTable);


