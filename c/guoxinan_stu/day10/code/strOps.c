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


int delestr(char *str,char ch,int len){//删除字符空间⾥指定的字符，必须是可变字符串
    if(str==NULL){
        return -1;
    }
    int i=0;
    while(str[i]!='\0'){
        

        if(str[i]==ch){
            strcpy(str+i,str+i+1);
            continue;
        }
        i++;
    }

    return 0;

}

int checkstr(char *str,char *tar){//查找⼀个⻓串中，短串出现的位置，
    if(str == NULL || tar == NULL){
        return -1;
    }
    int i = 0;
    while(str[i] != '\0'){
        int j=0;
        if(str[i] == tar[0]){
            while(tar[j] != '\0' && str[i+j] != '\0'){
                if(str[i+j] == tar[j]){
                    j++;
                    if(tar[j] == '\0'){
                    return i+1;
                }
                }
                
                else{
                    break;
                }
            }
        }
        i++;
    }
    return -1;
}

