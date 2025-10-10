//#include <iostream>
//#include<vector>
//#include<stdio.h>
//#include <cstring>
//int copy_from_kernel(void *dest, const void *src, int max_len);
///* 1.
//引例：从
//src
//地址处拷⻉
//max_len
//⻓度的字节到
//dest
//地址处，分析程序编写的怎么样
//*/
//#define K_SIZE 5
//int copy_from_kernel(void *dest, const void *src, int max_len) {
//    int len = K_SIZE < max_len ? K_SIZE : max_len;
//    memcpy(dest, src, len);
//    return len;
//}
//void test01() {
//    char buf[K_SIZE + 1];
//    memset(buf, 0, sizeof(buf));
//    int ret = copy_from_kernel(buf, "abcdefg", 8);
//    printf("copy %d bytes, buf : %s\n", ret, buf);
//}
///* 2. C
//语⾔赋值操作符的含义
//
//*
//*
//a.
//负数常量可以为⽆符号整型变量赋值吗？
//b.
//数据类型的容量注意事项，常量有⼤⼩吗？
//*  c.
//⼤⼩容量的相互拷⻉有什么要求？
//
//* */
//void test02() {
//    unsigned int a1 = -10;
//    unsigned char a = 250;
//    char a2 = 0x12345678;
//    int c1 = 0x80000000;
//    unsigned long long a3 = c1;
//    printf("%d\t%u\t%x\n", a1, a1, a1);
//    //数据类型的容量
//
//            printf("%d\n", a + 6);
//    a = a + 6;
//    printf("%d\n", a);
//    //⼤容量向⼩容量赋值
//            printf("%d\t%u\t%x\n", a2, a2, a2);
//    //⼩容量向⼤容量赋值
//            printf("%lld\t%llu\t%llx\n", a3, a3, a3);
//}
///* 3.
//有符号和⽆符号的运算差异
//*
//a.
//乘除法
//* b.
//左移、右移
//* c.
//逻辑判断
// * */
//
//
//
//void test03() {
//    unsigned int a = -10;
//    unsigned int b1 = a * 2;
//    unsigned int b2 = a / 2;
//    printf("%d\t%u\t%x\n", b1, b1, b1);
//    printf("%d\t%u\t%x\n", b2, b2, b2);
//    //逻辑判断
//    int c1 = -10;
//    unsigned int c2 = 10;
//    if (c1 < c2) {
//        printf("correct, c1 < c2!\n");
//    } else {
//        printf("error, c1 > c2!\n");
//    }
//    //位的操作
//    int d1 = ~c1;
//    printf("%d\t%u\t%x\n", d1, d1, d1);
//}
//
//
//
//
//
//
//
//
//
//
//
//
//int main() {
//
//
//
//
//
//
//
//
//
//
//
////   std::cout << "Hello, World!" << std::endl;
////   std::vector<int> array;
////   int a1 = -100;
////   unsigned a2 = -100;
////   printf("%d\t,%u\t,%x\t",a1,a1,a1);
////   printf("%d\t,%u\t,%x\t",a2,a2,a2);
//
////    test01();
////    test02();
////    test03();
////
////    printf("%d\n",sizeof(long long));
////    int a1 = 0x80000000;
////    int a2 =-10;
////    unsigned a3 = -10;
////    printf("%d\t,%d\t,%d\n",a1,a2,a3);
////    printf("%u\t,%u\t,%u\n",a1,a2,a3);
////    printf("%x\t,%x\t,%x\n",a1,a2,a3);
//
//
//
//
//
//
//
//
//
//
//
//
//
//    return 0;
//}
