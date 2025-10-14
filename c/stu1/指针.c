// #include <stdio.h>


// int main(){

//     int a =10;
//     printf("%d\n",a);
//     //p是指针变量，p存放的地址是指针，指针就是地址
//     int *p = &a;//&是找这个变量的地址
//     *p = 20;//*是解引用，通过这个地址找到变量，此时存放在p的地址找到的变量是a
//     printf("%d\n",a);

//     printf("%d\n",p);//可以看出，p存放的是地址
//     printf("%d\n",*p);//*p找到的是p存放地址的a

//     return 0;
// }



// #include <stdlib.h>
// #include <stdio.h>
// #include <unistd.h>
// #include <string.h>
// #include <time.h>


// int main() {


//     int num = 100;
//     int *p = &num;
//     int **pp = &p;

//     printf("num:%d, *p:%d, **pp:%d\n", num, *p, **pp);
//     printf("&num:%p, p:%p, *pp:%p\n", &num, p, *pp);
//     printf("&p:%p, pp:%p\n", &p, pp);
//     printf("&pp:%p\n", &pp);
	

// 	return 0;
// }

// #include <stdio.h>
// #include <unistd.h>
// #include <string.h>
// #include <time.h>

// struct abc{
// 	char a;
// 	int b;
// 	short c;
// };

// int main() {

// 	char *p1;
// 	int *p2;
// 	double *p3;
// 	struct abc *p4;
// 	int (*p5)(int, int);

// 	printf("sizeof(char *): %lu\n", sizeof(char *));
// 	printf("sizeof(int *): %lu\n", sizeof(int *));
// 	printf("sizeof(double *): %lu\n", sizeof(double *));
// 	printf("sizeof(struct abc*): %lu\n", sizeof(struct abc*));
// 	printf("sizeof(int (*)(int,int)): %lu\n", sizeof(int (*)(int, int )));



// 	return 0;
// }


// #include<stdio.h>

// int main(){

//     char *p1 = (char*)0x800200;
//     int *p2 = (int*)0x800200;

//     printf("sizeof(p1)=%lu,sizeof(p2)=%lu\n",sizeof(p1),sizeof(p2));


//     printf("%x\t%x\n",p1+1,p2+1);
//     printf("%x\t%x\n",p1-1,p2-1);

//     return 0;
// }



// #include <stdio.h>

// int main() {

//     int arr[5] = {10, 30, 40, 23, 56};
    
//     int* p1 = &arr[0];
//     int* p2 = &arr[4];

// 	printf("&arr[0]:%p\n", &arr[0]);
// 	printf("&arr[4]:%p\n", &arr[4]);


//     // 地址1 - 地址2 = (地址1的数值 - 地址2的数值) / 该地址的每个元素的大小
//     printf("%d\n", p2 - p1);

//     printf("%zd\n", sizeof(arr) / sizeof(arr[0]));

//     return 0;
// }


// #include <stdio.h>


// int main() {

// 	int num = 0x12345678;

// 	printf("0x%x\n", num);
// 	printf("%p\n", &num);


// 	char *p = (char *)&num;
// 	printf("%x, %x, %x, %x\n", p[0], p[1], p[2], p[3]);


// 	printf("%x, %x\n", p[-10], p[10]);

// 	return 0;
// }

//int a
//int *a
//int **aa
//int a[10]
//int *a[10]
//int (*a)[10]
//int (*a)(int)
//int (*a[10])(int)

//==================判断大小端=================



//联合体判断

// #include<stdio.h>

// typedef union ABC{
//     int a;
//     char b;

// }ABC;


// int main(){

//     ABC abc;
//     abc.a=0x12345678;
//     printf("%x\n",abc.b);//小端是低地址存小数据，此处输出为78，所以为小端

//     return 0;
// }



//指针


// #include<stdio.h>
// int main(){

//     int a = 0x12345678;
//     int *p1 = &a;
//     char *p2 = p1;
//     printf("%x\n",*p2);//此处输出结果为78，原理为将12345678中的头两位或者后两位占一个字节的输出，如果是头两位就是大端，后两位就是小端


//     return 0;
// }


//设置一个int的数组（可以为2个或5个），按照字节方式显示他们的内存结构分析，这2个或5个数字在内存的结构。

// #include<stdio.h>

// int main(){

//     int arr[5];
//     for(int i=0;i<=sizeof(arr)/sizeof(arr[0]);i++){
//         arr[i]=i+1;


//     }
//     char *arr1=arr;
//     for(int i=0;i<20;i++){//20可写为sizeof(arr)
//         printf("%x\n",*(arr1+i));
//     }
    

//     return 0;
// }


//定义一个float空间，赋初值为3.14，用字节方式打印它的内存结构。 


#include<stdio.h>

int main(){

    float a = 3.14;
    char *p=&a;
    for(int i=0;i<sizeof(float);i++){
        printf("%x\n",*(p+i));
    }

    return 0;
}












