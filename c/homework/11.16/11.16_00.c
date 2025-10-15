#include<stdio.h>


struct abc{

};

void test01(int *a,int *b){//交换两个变量
    printf("\n\ntest01\n");
    printf("交换前a:%d,b:%d\n",*a,*b);
    int *c=a;
    a=b;
    b=c;
    printf("交换后a:%d,b:%d\n",*a,*b);

}

void test02(){//定义指针变量，保存下⾯数组名。
    printf("\n\ntest02\n");
    char data1[5];        
    float data2[5];
    struct abc data3[5];
    char data4[4][5];
    char *data5[5];
    char **data6[3][4];
    //char *p[6]={"data1","data2","data3","daata4","data5","data6"}; 

    char (*p1)[5]=&data1;
    float (*p2)[5]=&data2;
    struct abc (*p3)[5]=&data3;
    char (*p4)[5]=data4;
    char (*p5)[5]=data5;
    char (*p6)[4]=data6;









}

void test03(){
    printf("\n\ntest03\n");

    char *addr[] = {"hello","world", "good","bye"};

    for(int i=0;i<sizeof(*addr)/sizeof(*addr[0]);i++){
        printf("%s %s\n%s%s")
    }


}



int main(){


    int a=1,b=2;
    test01(&a,&b);

    test02();

    return 0;
}