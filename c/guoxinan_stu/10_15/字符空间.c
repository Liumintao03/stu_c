#include<stdio.h>




int fun(int *p,int size){
    for(int i=0;i<size;i++){
        printf("%d\t",p[i]);
    }
    printf("\n");


    return 0;
}



int main(){
    
    // char *str1="hello";
    // char *str2="hello";
    // char *str3="hello";

    // printf("\"hello\":%p\n","hello");
    
    // printf("str1:%p\n",str1);
    // printf("str2:%p\n",str2);
    // printf("str3:%p\n",str3);

    int arr[]={10,20,30,40,50};
    fun(arr,sizeof(arr)/sizeof(arr[0]));

    char arr1[]="12345678";
    char arr2[]={'1','2','3','a'};
    printf("%d\t,------%s\n",sizeof(arr2),arr2);













    return 0;


}