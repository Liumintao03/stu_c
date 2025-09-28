#include<stdio.h>



int main(){

    for(int i=100;i<=200;i++){
        for(int j=2;j<=i;j++){
            printf("这个数是%d",i);
            if(i%j==0){
                printf("这个数不是素数");
                break;
            }
            else if (j==i)
            {
                printf("%d\n",i);
            }
            
        }


    }


    return 0;
}