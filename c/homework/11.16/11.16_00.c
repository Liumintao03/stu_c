#include<stdio.h>




void test01(int *a,int *b){//交换两个变量
    printf("\n\ntest01\n");
    printf("交换前a:%d,b:%d\n",*a,*b);
    int *c=a;
    a=b;
    b=c;
    printf("交换后a:%d,b:%d\n",*a,*b);

}


int main(){


    int a=1,b=2;
    test01(&a,&b);



    return 0;
}