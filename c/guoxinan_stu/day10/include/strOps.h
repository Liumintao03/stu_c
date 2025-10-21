/**
 * 
模块
A
是提供字符串操作的功能，命名为
strOps.c/.h
，实现如下接⼝：
1 
统计字符串中指定字符出现的个数
2 
删除字符空间⾥指定的字符
3 
查找⼀个⻓串中，短串出现的位置，
strstr()
 */

 #ifndef STROPS_H
 #define STROPS_H


int strnum(char *p,char ch);//统计字符串中指定字符出现的个数
int delestr(char **str,char ch,int len);//删除字符空间⾥指定的字符(必须是是可变字符串，不能上是常量区的)
int checkstr(char *str,char *tar);//查找⼀个⻓串中，短串出现的位置，

 #endif