#include<stdio.h>
#include"strOps.h"


int mian(){
    //统计字符串中指定字符出现的个数
    char arr1[] = "asdfghjklkjhgfdsasdfghjklkjhgfdsasdfghj";
    char ch1 = 'a';
    int res1 = strnum(arr1,ch1);
    printf("在字符%s\n有%d个所查找的字符\n\n\n",arr1,res1);
    
    //删除字符空间⾥指定的字符(必须是是可变字符串，不能上是常量区的)
    char arr2[] = "helloworld";
    char dech = 'l';
    int res2 = delestr(arr2,dech);
    printf("删除操作结果为%d\n删除后的字符串为:%s\n\n\n",res2,arr2);

    //查找⼀个⻓串中，短串出现的位置，
    char arr3[] = "helloworld";
    char arr4[]= "owor";
    int res3 = checkstr(arr3,arr4);
    printf("短串在第%d个字符出现\n",res3);



    return 0;

}

