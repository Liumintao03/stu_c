// #include<stdio.h>


// void test01(){
//     printf("\n\n\ntest01\n\n\n");
//     int arr[5]={20,30,40,50};
//     int data[2][3]={{1,2,3},{4,5,6}};

//     int (*p)[3]=data;//数组类型指针，指向3个int类型数据

//     printf("arr=%p\n",arr);
//     printf("arr+1=%p\n",arr+1);

// }

// void test02(){
//     printf("\n\n\ntest02\n\n\n");
//     char *buf[5];
//     buf[0]="have";
//     buf[1]="a";
//     buf[2]="good";
//     buf[3]="day";
//     buf[4]="!";
//     printf("%s",buf[0]);

// }

// void test03(){
//     printf("\n\n\ntest03\n\n\n");

//     char *p[10];//装了10个指针
//     int (*p1)[];

//     printf("int *p[10]----%lu\n",sizeof(p));
//     printf("int (*p1)[10]----%lu\n",sizeof(p1));
// }

// void test04(){
//     printf("\n\n\ntest04\n\n\n");

//     int (*p)[10];
//     p = (int (*)[10])0x800200;
//     printf("%p\n",p);
//     p++;
//     printf("%p\n",p);
    
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     p=arr;
//     printf("%p\n",p);
//     p++;
//     printf("%p\n",p);//（int类型数组）的指针，每往后移动一次，地址跨越(int类型数组)总大小的单位

// }

// void test05(){
//     printf("\n\n\ntest05\n\n\n");
//     int a[5]={1,2,3,4,5};
//     int *ptr = (int *)(&a+1);//a的类型是数组指针，取到a的地址后，在+1是在a是数组指针情况下+1，会直接加上整个数组的大小，然后再将取得的值转化为int类型的指针，再赋值给ptr，此时ptr是int类型指针，并非数组类型
//     printf("%d\t%d\n",*(a+1),*(ptr-1));
//     printf("a:%p\t(&a+1):%p\tptr:%p\t(ptr-1):%p\n",a,(&a+1),ptr,(ptr+1));


// }


// void test06(){
//     printf("\n\n\ntest06\n\n\n");
//     int data[2][3]={{1,2,3},{4,5,6}};
//     printf("=%d=\n",*(*(data+1)+1));

//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             printf("-%d-\n",data[i][j]);
//         }
//     }

//     int data1[2][2][3] = {{{1,2,3},{4,5,6}},{{7,8,9},{10,11,12}}};
//     printf("-%d-\n",*(*(*(data1+0)+1)+2));


// }


// int main(){
//     test01();
//     test02();
//     test03();
//     test04();
//     test05();
//     test06();



//     return 0;
// }