// #include<stdio.h>


// // Hercy 想要为购买第一辆车存钱。他 每天 都往力扣银行里存钱。

// // 最开始，他在周一的时候存入 1 块钱。从周二到周日，他每天都比前一天多存入 1 块钱。在接下来每一个周一，他都会比 前一个周一 多存入 1 块钱。

// // 给你 n ，请你返回在第 n 天结束的时候他在力扣银行总共存了多少块钱。

 

// // 示例 1：

// // 输入：n = 4
// // 输出：10
// // 解释：第 4 天后，总额为 1 + 2 + 3 + 4 = 10 。
// // 示例 2：

// // 输入：n = 10
// // 输出：37
// // 解释：第 10 天后，总额为 (1 + 2 + 3 + 4 + 5 + 6 + 7) + (2 + 3 + 4) = 37 。注意到第二个星期一，Hercy 存入 2 块钱。
// // 示例 3：

// // 输入：n = 20
// // 输出：96
// // 解释：第 20 天后，总额为 (1 + 2 + 3 + 4 + 5 + 6 + 7) + (2 + 3 + 4 + 5 + 6 + 7 + 8) + (3 + 4 + 5 + 6 + 7 + 8) = 96 。
 

// // 提示：

// // 1 <= n <= 1000


// int main() {

//     // int n = 4;
//     // //计算有多少周
//     // int num1 = n/7;
//     // //计算剩余天数
//     // int num2 = n%7;
//     // //第一周为1+到7,第二周比第一周多7,第三周比第一周多14,后面就是等差数列
//     // //先计算周数的钱
//     // int wekmoney = ((1+2+3+4+5+6+7)+(num1+1+num1+2+num1+3+num1+4+num1+5+num1+6+num1+7))*num1/2;
//     // //计算除去整数天数剩余天数的钱
//     // int daymoney =0;
//     // for(int i=1;i<=num2;i++){
//     //     daymoney = daymoney + i +1; 
//     // } 
//     // int totalmoney = wekmoney + daymoney;
//     //计算有多少周
//     int n = 10;

//     int weeknum = n/7;
//     //计算剩余天数
//     int daynum = n%7;
//     //计算周数的钱
//     int weekmoney = 0;
//     for(int j=1;j<=weeknum;j++){
//         for(int i=j;i<j+7;i++){
//             weekmoney = weekmoney + i;
//     }
//     }
//     int othermoney = 0;
//     for(int i=1;i<=daynum;i++){
//         othermoney = othermoney + weeknum + i;
//     }
//     int totalmoney = othermoney + weekmoney;
    

//     printf("%d",totalmoney);
//     return 0;

// }