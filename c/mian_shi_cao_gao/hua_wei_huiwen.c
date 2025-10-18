#include<stdio.h>
#include<string.h>
int IFhuiwen(char *str){
    char temp[strlen(str)+1];
    for(int i=0;i<strlen(str);i++){
        temp[i] = str[strlen(str)-1-i];
        printf("%c\t%c\n",temp[i],str[i]);
    }
    printf("%s\t%s\n",temp,str);
    temp[strlen(str)] = '\0';
    int i=0;
    while(str[i]!=0){
        if(temp[i]!=str[i]){
            printf("%c\t%c\n",temp[i],str[i]);
            
            return -1;
        }
        temp[i++];
        str++;
    }
    return 0;
}

int main(){

    char str[] = "123321";
    int RET = IFhuiwen(str);
    printf("%d\n",RET);


    return 0;
}