#include <stdio.h>

// int main(){

//     //int a = 7/2; 值为3
//     //float a = 7/2;值为3.00000
//     // float a = 7/2.0;//值为3.500000，/两侧有一个浮点数那结果为精准浮点数 

//     // int b = 7%2;//结果为1，取模操作两端只能是整数
//     // printf("%f\n",a);

//     // printf("%d\n",b);//结果为1


//     int a =10;
//     int b =a++;//
//     //先把a赋值给b，然后再进行a+=1运算
//     printf("%d\n",b);//结果为10
//     printf("%d\n",a);//结果为11

//     int c =(int)3.14;//强制转换为int,结果为3
//     printf("%d\n",c);

//     int arr[10]={0};

//     printf("%d\n",sizeof(arr));//结果为40
//     printf("%d\n",sizeof(arr[0]));//结果为4，一个int为4个字节
//     printf("%d\n",sizeof(arr)/sizeof(arr[0]));//结果为10



//     return 0;
// }



int main(){

    int a = 10;
    int b = 20;
    int c = 0;

    int d =(c=a-2, a=b+c, d=c-3);
    printf("%d\n",d);




    return 0;
}