#include<stdio.h>
#include<string.h>

void fun1(){}

void fun2(int a,int b){
    printf("fun:a=0x%d\n",a);
    printf("fun:b=0x%d\n",b);

    int num1;
    int num2;
    printf("fun:num1=0x%d\n",num1);
    printf("fun:num2=0x%d\n",num2);

}


void test01(){
    printf("===test01===\n\n");
    printf("fun:0x%p\n",fun1);
    printf("fun:0x%p\n",fun1);

    int arr[5];
    int*p1 = arr;

    int (*p2)(const char*,...)=printf;
    printf("%p\n",printf);
    printf("%p\n",p2);

    p2("hello world\n");
}

void test02(){
    printf("\n===test02===\n\n");
    int a = 0x12345678;
    int b = 0xa1b2c3d4;

    printf("test02:&a=0x%d\n",&a);
    printf("test02:&b=0x%d\n",&b);

    fun2(a,b);
}

void test03(){
    printf("\n===test03===\n\n");

    printf("0x%x\n", "hello world");
    printf("0x%x\n", "hello world");
    printf("0x%x\n", "hello world");
    char buf[] = "hello world";
    printf("0x%x\n", buf);
    printf("0x%x\n", "hello world");
}


int main(){

    test01();
    test02();
    test03();






    return 0;
}


