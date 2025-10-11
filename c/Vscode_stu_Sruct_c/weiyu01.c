// //位域结构体

// #include <stdio.h>
//  struct MyStruct {
//  unsigned int a : 4;  // 5 bits
//  unsigned int b : 4;  // 3 bits
//  unsigned int c : 6;  // 6 bits
//  };
//  int main() {
//     struct MyStruct s = {15, 5, 45};

//     struct MyStruct abc;
//     memset(&abc,0,sizeof(abc));
//     printf("%d,%d\n",abc.a,abc.b);

//     abc.a=0b10010101;
    
//     printf("%d\t%d",abc.a,abc.b);
//     //printf("a = %u, b = %u, c = %u\n", s.a, s.b, s.c);
//     return 0;
//  }