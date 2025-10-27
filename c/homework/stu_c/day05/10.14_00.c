// #include<stdio.h>
// #include<time.h>

// typedef union ABC{
//     int a;
//     char b;

// }ABC;

// void test01(){//==================判断大小端=================
//     //联合体判断
//     ABC abc;
//     abc.a=0x12345678;
//     printf("%x\n",abc.b);//小端是低地址存小数据，此处输出为78，所以为小端

//     //指针判断
//     int a = 0x12345678;
//     int *p1 = &a;
//     char *p2 = p1;
//     printf("%x\n",*p2);//此处输出结果为78，原理为将12345678中的头两位或者后两位占一个字节的输出，如果是头两位就是大端，后两位就是小端

//     char arr[] = {"abc"};
//     char arr[] ={ 'a','b','c'};
    
//     char buf[]={"123"};
//     char *p1 = "abc";
//     buf[1]='a';
//     p1[1]='a';
// }

// void test02(){//设置一个int的数组（可以为2个或5个），按照字节方式显示他们的内存结构分析，这2个或5个数字在内存的结构。
//     int arr[5];
//     for(int i=0;i<=sizeof(arr)/sizeof(arr[0]);i++){
//         arr[i]=i+1;


//     }
//     char *arr1=arr;
//     for(int i=0;i<20;i++){//20可写为sizeof(arr)
//         printf("%x\n",*(arr1+i));
//     }
    
// }

// void test03(){//定义一个float空间，赋初值为3.14，用字节方式打印它的内存结构。 
//     float a = 3.14;
//     char *p=&a;
//     for(int i=0;i<sizeof(float);i++){
//         printf("%x\n",*(p+i));
//     }
    
// }

// void test04(){//定义一个数组，包含10个int元素，用随机数为其赋值初始化，然后统计能被3整除的数字。
//      srand(time(NULL));
//     int arr[10];
//     for(int i=0;i<10;i++){
//         arr[i]=rand();
//         printf("%d\t",arr[i]);

//     }
//     printf("\n");
//     for(int i=0;i<10;i++){
//         if(arr[i]%3==0){
//             printf("%d\t",arr[i]);
//         }
//     }
    
// }














// int main(){
//     test01();
//     test02();
//     test03();
//     test04();
    


//     return 0;
// }


















