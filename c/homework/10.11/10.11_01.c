// #include <stdlib.h>
//  #include <stdio.h>
//  #include <unistd.h>
//  #include <string.h>
//  //统计⼀个Int 空间中bit1 的个数 
//  int main() {
//     int cnt = 0;
//     int num = 0x12345678;
//     for (int i = 0; i < sizeof(num) * 8; ++i) {//sizeof求字节，一个字节8位，*8,
//     if (num & (0x1 << i)) {//num的每一位都进行(0x1<<i)按位与====(0x1<<i)：1向左移多少位
//         cnt++;
//         }
//     }
//     printf("cnt:%d\n", cnt);
//     return 0;
//  }