#include<stdio.h>
#include<string.h>

int sum(char *s){
    int num = 0;
    int i=0;
    //printf("%s\n",s);
    while(*s!=0){
        num = num*10+(s[i]-'0');
        //printf("%d\n",num);
        s++;
    }
    //printf("%d\n",num);

    return num;
}


int main(int argc, char *argv[]) {
    // for(int i = 0; i < argc; ++i) {
    //     printf("argv[%d]:%s\n", i, argv[i]);
    // }

    int num1 = sum(argv[1]);
    int num2 = sum(argv[3]);

    printf("%d\n",num1+num2);
    return 0;
 }