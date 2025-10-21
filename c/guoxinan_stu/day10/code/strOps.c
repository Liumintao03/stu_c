#include<stdio.h>
#include<string.h>



int strnum(char *p,char ch){//统计字符串中指定字符出现的个数
    if(p==NULL){
        return -1;
    }
    int num =0;
    int i;
    while(p[i]!='\0'){
        if(p[i]==ch){
            num++;
        }
        i++;
    }
    return num;
}


int delestr(char **str,char ch,int len){//删除字符空间⾥指定的字符，必须是可变字符串
    if(str==NULL){
        return -1;
    }
    int i=0;
    while((*str)[i]!='\0'){
        char *tem = *str+1;

        if((*str)[i]==ch){
            strcat((*str)[i],tem[i]);
        }
        i++;
    }

    return 0;

}
