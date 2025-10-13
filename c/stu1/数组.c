// #include<stdio.h>
// #include<string.h>

// int main(){

//     int arr[10]={0,1,2,3,4,5,6,7,8,9};


//     int i=0;
//     while(i<10){
//         printf("%d\n",arr[i]);
//         i++;
//     }
    
//     char  arr2[]={'a','b','c'};

//     printf("%d\n",strlen(arr2));//随机值


//     return 0;
// }


// #include <stdlib.h>
// #include <stdio.h>
// #include <unistd.h>
// #include <string.h>
// #include <time.h>


// int main() {

//     int arr[5] = {2, 3, 4, 5, 6};
//     printf("arr:%x\n", arr);
//     printf("&arr[0]:%x\n", &arr[0]);
    

//     for (int i = 0; i < 5; i++)
//     {
//         printf("%p: *(arr + %d): %d\t",arr + i,  i, *(arr + i));
//     }
//     puts("");

//     for (int i = 0; i < 5; i++)
//     {
//         printf("%p: arr[%d]: %d\t",&arr[i],  i, arr[i]);
//     }
//     puts("");
    

// 	return 0;
// }


#include<stdio.h>



int main(){

    int num = 100;
    int *p = &num;
    printf("%d\n",p[0]);


    return 0;
}























