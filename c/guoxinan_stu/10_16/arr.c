#include<stdio.h>


void test01(){
    printf("\n\n\ntest01\n\n\n");
    int arr[5]={20,30,40,50};
    int data[2][3]={{1,2,3},{4,5,6}};

    int (*p)[3]=data;//数组类型指针，指向3个int类型数据

    printf("arr=%p\n",arr);
    printf("arr+1=%p\n",arr+1);

}

void test02(){
    printf("\n\n\ntest02\n\n\n");
    char *buf[5];
    buf[0]="have";
    buf[1]="a";
    buf[2]="good";
    buf[3]="day";
    buf[4]="!";
    printf("%s",buf[0]);

}

void test03(){
    printf("\n\n\ntest03\n\n\n");

    char *p[10];//装了10个指针
    int (*p1)[];

    printf("int *p[10]----%lu\n",sizeof(p));
    printf("int (*p1)[10]----%lu\n",sizeof(p1));
}

void test04(){
    printf("\n\n\ntest04\n\n\n");

    int (*p)[10];
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    p = (int (*)[10])0x800200;
    printf("%p\n",p);
    p++;
    printf("%p\n",p);
    p=arr;
    printf("%p\n",p);
    p++;
    printf("%p\n",p);

}



int main(){
    test01();
    test02();
    test03();
    test04();





    return 0;
}