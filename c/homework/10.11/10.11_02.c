#include <stdio.h>
 
 
void test01() {
 
    int a, b, c, d;
    a = 10;
    b = a++;//10==先赋值再++,a=11
    printf("%d\n",a);
    c = ++a;//12==先++再赋值,a=12
    printf("%d\n",a);
    d = 10 * a++;//120==先进行*运算，再进行赋值运算，再进行a++，a=13
    printf("a %d, b %d, c %d, d %d\n",a, b, c, d);
 }
 
void test02() {
 
    int a = 10;//1010
    int b = 20;//10100
 
    printf("a %d, b %d\n", a, b);//输出10,20
 
    a = a ^ b;
    //01010
    //10100
    //11110

    b = a ^ b;//b=(a^b)^b==a^(b^b)==a^0==a
    //11110
    //10100
    //01010

    a = a ^ b;//a=(a^b)^((a^b)^b)==((a^b)^(a^b))^b==0^b==b
    //11110
    //01010
    //10100

    printf("a %d, b %d\n", a, b);//20.10,交换
 
}
 
void test03() {
 
    char ch = 'a';
    printf("%c\n", ch);
 }//打印ascll中a的值
 
void test04() {
 
    char a, b;
    a = 97;
    b = 98;
    printf("%c %c\n", a, b);//a b
    printf("%d %d\n", a, b);//97 98
 }
 
void test05() {
    int a = 1, b = 2, c = 3, d = 4, m = 2, n = 2;
    (m = a > b) && (n = c > d);//(a>b)结果为0赋值给m，m==0，m<b，不执行后面
    printf("m %d, n %d\n", m, n);//0,2
 }
 
int main() {
 
    test05();
    return 0;
 }