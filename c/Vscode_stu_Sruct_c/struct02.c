#include<stdio.h>

typedef struct ABC{
    char a;
    int b;
    char c;
    short d;
}ABC;

int main(){

    ABC abc;

    memset(&abc,0,sizeof(abc));
    abc.a=0x12;
    abc.b=0x12345678;
    abc.c=0x11;
    abc.d=0x1122;
    printf("%lu\n",sizeof(struct ABC));

    char *p=&abc;
    for(int i=0;i<sizeof(abc);i++){
        printf("[0x%d]:%hx\n",i,p[i]);
    }


    return 0;
}