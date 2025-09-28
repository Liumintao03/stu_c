#include<stdio.h>



int main(){

    for(int i=100;i<=200;i++){
        for(int j=2;j<=200;j++){
            if(i%j==0){
                break;
            }
            else if (j==200)
            {
                printf("%d\n",i);
            }
            
        }


    }


    return 0;
}