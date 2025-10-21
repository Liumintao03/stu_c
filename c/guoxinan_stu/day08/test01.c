// //输入数字进行+ - * / 运算
// #include<stdio.h>

// //算数逻辑判断
// int add(int num1,int num2){
//     return num1+num2;
// }

// int minus(int num1,int num2){
//     return num1 - num2;
// }

// int multp(int num1,int num2){
//     return num1 * num2;
// }

// int divid(int num1,int num2){
//     return num1 / num2;
// }

// //操作存储
// typedef struct Mynum{
//     char op;
//     int(*makes)(int,int);
// }Mynum;
// Mynum make[4]={
//     {'+',add},
//     {'-',minus},
//     {'x',multp},
//     {'/',divid},
//     //可扩展操作类型
// };

// //字符串转换数字
// int num(char *s){
//     int i = 0;
//     int res = 0;
//     while(s[i]!='\0'){
//         if(s[i] <' 0' || s[i] > '9'){
//             printf("error num_size");
//             return 0;
//         }
//         res = res*10 + (s[i]-'0');
//         i++;
//     //printf("%d\n",res);
    
//     }
//     return res;
// }


// int main (int argc,char *argv[]){
//     if(argc!=4){
//         printf("num error");
//         return -1;
//     }
//     int num1 = num(argv[1]);
//     int num2 = num(argv[3]);
//     //printf("%d\t,%d\n",num1,num2);

//     int res=0;
//     int i = 0;
//     for(i=0;i<sizeof(make)/sizeof(make[i]);i++){
//         //printf("%c\t,%c\n",make[i].op,argv[2][0]);
//         if(make[i].op==argv[2][0]){
//             //printf("%d\t,%d\n",num1,num2);
//             res = make[i].makes(num1,num2);
//             break;
//         }
//         if(i==sizeof(make)/sizeof(make[i])){
//             printf("make_error");
//             return -1;
//         }
//     }
//     printf("%d\n",res);
//     return 0;
// }

