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


// int main(){

//     int pwd[20]={0};

//     printf("请输入密码");
//     scanf("%s",pwd);
//     //若要停止输入：Windows下按组合键Ctrl+Z，Unix/Linux/Mac下按组合键Ctrl+D。EOF就是终止的意思 
//     // #include <iostream>
//     // using namespace std;
//     // int main() {
//     //     int c;
//     //     while((c = getchar()) != EOF){
//     //         putchar(c);
//     //     }
//     //     return 0;
//     // }
//     getchar();
//     printf("请确认密码");
//     int ret = getchar();

//     if('Y'==ret){
//         printf("Yes\n");
//     }
//     else{
//         printf("No\n");
//     }






//     return 0;
// }





//计算 1!+2!+3!+4!+......n!

int main(){

    int i=1;
    int j=1;
    int n=0;
    int ret =1;
    int sum = 0;
    scanf("%d",&n);
    // for(i=1;i<=n;i++){
    //     ret = 1;
    //     for(j=1;j<=i;j++){
    //         ret = ret*j;
    //     }
    //     sum = sum+ret; 
    // }

    //优化版：
    for(i=1;i<=n;i++){
        ret = ret*i;
        sum = sum+ret;
    }



    printf("%d\n",sum);



    return 0;
}