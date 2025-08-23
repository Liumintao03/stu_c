#include <stdio.h>

// int main(){
         



//     int line =0;
//     printf("学习");


//     while (line<20000){ 
//         line++;
//         printf("写代码,代码行数%d\n",line);
//     }
//     if(line==20000){
//         printf("出师\n");
//     }
//     else{
//         printf("还不行\n");
//     }




//     return 0;
// } 


int main(){

    int pwd[20]={0};

    printf("请输入密码");
    scanf("%s",pwd);

    getchar();
    printf("请确认密码");
    int ret = getchar();

    if('Y'==ret){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }






    return 0;
}

