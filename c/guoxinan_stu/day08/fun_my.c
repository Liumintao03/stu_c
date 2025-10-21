// #include<stdio.h>
// #include<time.h>
// #include<stdlib.h>


// void fun1(int *num,int size){//随机数初始化[1,100]
//     for(int i = 0;i < size;i++){
//         num[i] = rand()%100+1;
//         //printf("%d\n",num[i]);

//     }
// }

// int fun2(int *num,int size){//统计最小值
//     int min = num[0];
//     for(int i = 0;i < size;i++){
//         if(min>num[i]){
//             min = num[i];
//         }
//         //printf("%d\n",min);
//     }
//     return min;
// } 

// int fun3(int *num,int size){//统计最大值
//     int min = num[0];
//     for(int i = 0;i < size;i++){
//         if(min<num[i]){
//             min = num[i];
//         }
//         //printf("%d\n",max);
//     }
//     return min;
// } 

// int main(){
//     srand(time(NULL));
//     int num[100];
//     int size = sizeof(num)/sizeof(num[0]);
//     fun1(num,size);
//     int min = fun2(num,size);
//     int max = fun3(num,size);
//     printf("最小值为%d,最大值为%d\n",min,max);


//     return 0;
// }