#include<stdio.h>



int main(){

    for(int i=100;i<=200;i++){
        for(int j=2;j<=i;j++){
            printf("这个数是%d,j是%d\n",i,j);
            if(i%j==0){
                printf("%d这个数不是素数",i);
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