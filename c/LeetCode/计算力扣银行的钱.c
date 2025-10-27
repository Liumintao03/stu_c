#include<stdio.h>


int main() {

    // int n = 4;
    // //计算有多少周
    // int num1 = n/7;
    // //计算剩余天数
    // int num2 = n%7;
    // //第一周为1+到7,第二周比第一周多7,第三周比第一周多14,后面就是等差数列
    // //先计算周数的钱
    // int wekmoney = ((1+2+3+4+5+6+7)+(num1+1+num1+2+num1+3+num1+4+num1+5+num1+6+num1+7))*num1/2;
    // //计算除去整数天数剩余天数的钱
    // int daymoney =0;
    // for(int i=1;i<=num2;i++){
    //     daymoney = daymoney + i +1; 
    // } 
    // int totalmoney = wekmoney + daymoney;
    //计算有多少周
    int n = 10;

    int weeknum = n/7;
    //计算剩余天数
    int daynum = n%7;
    //计算周数的钱
    int weekmoney = 0;
    for(int j=1;j<=weeknum;j++){
        for(int i=j;i<j+7;i++){
            weekmoney = weekmoney + i;
    }
    }
    int othermoney = 0;
    for(int i=1;i<=daynum;i++){
        othermoney = othermoney + weeknum + i;
    }
    int totalmoney = othermoney + weekmoney;
    

    printf("%d",totalmoney);
    return 0;

}