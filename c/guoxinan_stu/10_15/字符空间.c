#include<stdio.h>
#include<string.h>

int strcmp(const char *cs, const char *ct){
    unsigned char c1, c2;
    while (1) {
        c1 = *cs++;
        c2 = *ct++;
        if (c1 != c2)
            return c1 < c2 ? -1 : 1;
        if (!c1)
            break;
    }
    return 0;
}
int fun(int *p,int size){
    for(int i=0;i<size;i++){
        printf("%d\t",p[i]);
    }
    printf("\n");


    return 0;
}

//  char *strncpy(char *dest, const char *src, size_t count)
//  {
//     char *tmp = dest;
//     while (count) {
//         if ((*tmp = *src) != 0)
//             src++;
//         tmp++;
//         count--;
//     }
//     return dest;
//  }

int main(){
    
    // char *str1="hello";
    // char *str2="hello";
    // char *str3="hello";

    // printf("\"hello\":%p\n","hello");
    
    // printf("str1:%p\n",str1);
    // printf("str2:%p\n",str2);
    // printf("str3:%p\n",str3);

    // int arr[]={10,20,30,40,50};
    // fun(arr,sizeof(arr)/sizeof(arr[0]));

    // char arr1[]="12345678";
    // char arr2[]={'1','2','3','a'};
    // printf("%d\t,------%s\n",sizeof(arr2),arr2);


    // char arr[]="rong";
    // printf("%zd\n",sizeof(arr)/sizeof(arr[0]));
    // printf("%zd\n",sizeof(arr));

    // char str[]={'a','b','c','\0','0'};
    // printf("%zd\n",sizeof(str)/sizeof(str[0]));
    // printf("%zd\n",sizeof(str));
    
    // printf("%s\n",arr);
    // printf("%s\n",str);

    char buf[256]={0};

    strcpy(buf,"hello");

    strcat(buf,"world");

    printf("buf:%s\n",buf);

    

    char *str ="123";
    int num = 0;
    int i= 0;
    while(str[i] != 0){
        num = num*10 + (str[i]-'0');
        i++;
    }
    printf("%d\n",num);



    return 0;


}