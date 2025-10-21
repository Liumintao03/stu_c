// #include<stdio.h>
// #include<string.h>
// int IFhuiwen(char *str){//复制出一个相反的字符串，再进行比较
//     char temp[strlen(str)+1];
//     for(int i=0;i<strlen(str);i++){
//         temp[i] = str[strlen(str)-1-i];
//     }
//     temp[strlen(str)] = '\0';
//     int i=0;
//     for(int i=0;i<strlen(str);i++){
//         if(temp[i]!=str[i]){
//             return -1;
//         }
//     }
//     return 0;
// }
// int huiwen(char *str){// 简单明了 
//     for(int i=0;i<strlen(str)/2;i++){
//         if(str[i]!=str[strlen(str)-1-i]){
//             return -1;
//         }
            
//     }
//     return 0;
// }
// int main(){
//     char str[] = "123321";
//     int RET1 = IFhuiwen(str);
//     int RET2 = huiwen(str);
//     printf("%d\n",RET1);
//     printf("%d\n",RET2);
//     return 0;
// }