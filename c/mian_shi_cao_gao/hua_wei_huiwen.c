#include<stdio.h>
#include<string.h>
int IFhuiwen(char *str){
    char temp[strlen(str)];
    for(int i=0;i<strlen(str);i++){
        temp[i] = str[strlen(str)-1-i];
        printf("%c\t%c\n",temp[i],str[i]);
    }
    printf("%s\t%s\n",temp,str);

    while(temp!=0){
        if(temp!=str){
            return -1;
        }
        temp++;
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