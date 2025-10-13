
//=============const==================
//const修饰常量常量就是不能改变的量

//  #include <stdio.h>
//  int main() {
//     int num = 100;
//     // *p 不能修改
//     const int *p = &num;
//     *p = 200;//报错
//     // p 不能修改
//     int * const p1 = &num;
//     int num1 = 200;
//     p1 = &num1;//报错
//     return 0;
//  }