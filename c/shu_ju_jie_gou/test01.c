#include<stdio.h>
#include<string.h>


typedef struct{
    char stuId[10];
    char stuName[20];
    int age;
}student;


int main(){

    student *p;
    strcpy(p->stuName,"ujm");
    printf("%s\n",p->stuName);



    return 0;
}

