#include<stdio.h>

menu(){
    printf("====================猜数字游戏=================\n");
    printf("====================按1开始游戏================\n");
    printf("====================按0退出游戏================\n");
    printf("==============================================\n");
    printf("==============================================\n");


}


gamestart(){
    printf("现在开始游戏\n");
    int num = rand()%10;
    for (int i = 0; i < 10; i++)

    {
        printf("第%d次猜,请输入你猜的数字,范围为0到10,,你还有%d次机会\n",i+1,9-i);
        int a;
        scanf("%d",&a);
        if(a>=0&&a<=10){
            if(a==num){
            printf("恭喜你游戏通关，猜了%d次",i+1);
            break;
        }
        else if  (a>num){
            printf("猜大了，次数减一");
        }
        else if (a<num){
            printf("猜小了，次数减一");
        }
        }
        else {
            printf("输入的数字不符合范围，次数减一");
        }

        /* code */
    }
    
    


}






int main(){

    menu();

    int input=0;
    do{
        printf("请选择");
        scanf("%d",&input);
        switch (input)
        {
        case 1 :
                gamestart();
                break;
        case 2 :
                printf("退出游戏\n");
                break;
        default:
                printf("输入错误，请从新输入选择是否开始游戏\n");
            break;
        }





    }while (input);
    
    






    return 0;
}