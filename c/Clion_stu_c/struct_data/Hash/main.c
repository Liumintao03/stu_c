//
// Created by 35376 on 2025/11/3.
//

#include "Hash.h"


int main(){
    //创建哈希表
    HashTable *hashTable = createinithasbtable(10);
    //插入元素
    for(int i = 0;i<39;i++){
        insertHashElement(hashTable,i,i*2);
    }
    //打印
    printHashinfo(hashTable);
    //删除指定key
    deletHashElement(hashTable,22);
    //打印
    printHashinfo(hashTable);
    //删除指定key
    deletHashElement(hashTable,5);
    //打印
    printHashinfo(hashTable);
    //释放
    releaseHash(hashTable);







    return 0;
}