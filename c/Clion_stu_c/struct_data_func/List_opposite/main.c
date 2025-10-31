//
// Created by 35376 on 2025/10/31.
//

#include "list_opposite.h"


int main(){

    //创建链表
    Listnode *listnode = createListnode();
    //插入元素
    for (int i = 1; i <=10 ; ++i) {
        addelementListnode(listnode,&i);
    }
    printListnode(listnode);
    //翻转
    oppositeListnode(listnode);
    //打印
    printListnode(listnode);
    //释放
    releaseListnode(listnode);
    //创建两条链表
    Listnode *listnode1 = createListnode();
    Listnode *listnode2 = createListnode();
    //插入
    for(int i = 0;i<=13;i+=3){
        addelementListnode(listnode1,&i);
    }
    for(int i = 1;i<=14;i+=3){
        addelementListnode(listnode2,&i);
    }
    //打印
    printListnode(listnode1);
    printListnode(listnode2);
    //联合
    Listnode *newListnode =  uniteListnode(listnode1,listnode2);
    //打印
    printListnode(newListnode);
    //释放
    releaseListnode(listnode1);
    releaseListnode(listnode2);
    releaseListnode(newListnode);

    int arr1[]={1,3,5,7,9};
    int arr2[]={2,4,6,8,10};
    int len1= sizeof (arr1)/sizeof (arr1[0]);
    int len2= sizeof (arr2)/sizeof (arr2[0]);

    int *arr = unitedarr(arr1,len1,arr2,len2);
    //打印
    for(int i = 0;i<len1+len2;i++){
        printf("%d\t",arr[i]);
    }



    return 0;
}
