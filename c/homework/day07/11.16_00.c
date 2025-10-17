// #include<stdio.h>
// #include<string.h>

// struct abc{

// };

// void test01(int *a,int *b){//交换两个变量
//     printf("\n\ntest01\n");
//     printf("交换前a:%d,b:%d\n",*a,*b);
//     int *c=a;
//     a=b;
//     b=c;
//     printf("交换后a:%d,b:%d\n",*a,*b);

// }

// void test02(){//定义指针变量，保存下⾯数组名。
//     printf("\n\ntest02\n");
//     char data1[5];        
//     float data2[5];
//     struct abc data3[5];
//     char data4[4][5];
//     char *data5[5];
//     char **data6[3][4];
//     //char *p[6]={"data1","data2","data3","daata4","data5","data6"}; 

//     char (*p1)[5]=&data1;
//     float (*p2)[5]=&data2;
//     struct abc (*p3)[5]=&data3;
//     char (*p4)[5]=data4;
//     char (*p5)[5]=data5;
//     char (*p6)[4]=data6;

// }


// void print_f(char *str){
//     for(int i=0;i<sizeof(str)/sizeof(str[0]);i++){
//         printf("%s ",str[i]);
//     }
//     printf("\n");
// }

// void test03(){//. 已知有⼏个字符串，"hello" "world", , "good",  "bye" 请设计功能将其组合成hello world和 goodbye world的输出信息
//     printf("\n\ntest03\n");

//     char *addr[] = {"hello","world", "good","bye"};

//     char str1[100000];
//     char str2[100000];

//     strcpy(str1,addr[0]);
//     strcat(str1," ");
//     strcat(str1,addr[1]);

//     strcpy(str2,addr[2]);
//     strcat(str2,addr[3]);
//     strcat(str2," ");
//     strcat(str2,addr[1]);

//     printf("%s\n",str1);
//     printf("%s\n",str2);
    
    

// }




//  //print_f(*addr1);
//     //print_f(*addr2);



//     // for(int i=0;i<sizeof(*addr)/sizeof(*addr[0]);i++){
//     //     printf("%s %s\n%s%s")
//     // }


// int main(){


//     int a=1,b=2;
//     test01(&a,&b);

//     test02();

//     test03();
//     // char arr[]="china";
//     // char*p;p=arr;
//     // printf("%c\t%c\t%c\n",*p,*p++,*(p++));//从右向左执行打印程序，结果为i   h   c
//     // printf("%d\t%d\t%d\n",strlen(arr),strlen(p),sizeof(p));

//     // int x[10]={0,1,2,3,4,5,6,7,8,9},*p1;
//     // //A选项：
//     // printf("A:%d\n",x[3]);
//     // //B选项：
//     // p1=x+3;
//     // printf("B:%d\n",*p1++);
//     // //C选项
//     // p1=x+2;
//     // printf("C:%d\n",*(p1++));
//     // //D选项
//     // p1=x+2;
//     // printf("D:%d\n",*++p1);


//     return 0;
// }