#include<stdio.h>


struct Stu{
    char name[20];
    int age;
    char sex[10];
    char tele[12];
};

int main(){

    struct Stu s ={"zhangsan",12,"man","13032866683"};

    printf("%s %d %s %s",s.name,s.age,s.sex,s.tele);


    



    return 0;
}