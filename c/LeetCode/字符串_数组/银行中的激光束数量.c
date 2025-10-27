
#include<stdio.h>
#include<string.h>
int numberOfBeams(char** bank, int bankSize) {

    //遍历每个节点
    //判断不同行之间夹着的行是否没有安全设备

    //判断：
    //统计发射激光一行有几个1
    int num1 = 0;
    //统计接收激光有几个
    int num2 = 0;
    //总共的激光数量
    int sum = 0;
    for(int i = 0;i < bankSize;i++){//判断发射端
        if(num1==0){//说明上行为空,需要计算发射激光
            for(int j=0;j < strlen(bank[0]);j++){
                if(bank[i][j]=='1'){
                    num1++;
                }
            }
            //重值num2
            num2 = 0;
            continue;
        }

        else if(num1!=0&&num2==0){//判断接收端
            for(int j=0;j < strlen(*bank);j++){
                if(bank[i][j]=='1'){
                    num2++;
                    continue;
                }
                if(num2!=0){//num2不等于0，说明有接收行
                    sum = sum + num1 * num2;
                    //使得sum1重值,重值为这次的接收端数量
                    num1 = num2;
                    //重值num2
                    num2 = 0;
                }
            }

        }


    }


    return sum;
}

int main(){
    char *bank[7] = {"011001","000000","010100","001000"};
    int res = numberOfBeams(bank,4);
    printf("%d\n",res);



    return 0;
}