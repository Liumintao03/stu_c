 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
 #include <string.h>
 #include <stdint.h>
 uint32_t fun_add(uint32_t num1, uint32_t num2) {
    return num1 + num2;
 }
 uint32_t fun_sub(uint32_t num1, uint32_t num2) {
    return num1 - num2;
 }
 uint32_t fun_mul(uint32_t num1, uint32_t num2) {
    return num1 * num2;
 }
 uint32_t fun_div(uint32_t num1, uint32_t num2) {
    return num1 / num2;
 }
 typedef struct {
    char op;
    uint32_t (*handler)(uint32_t, uint32_t);
 }MyTable;
 MyTable table[4] = {
    {'+', fun_add},
    {'-', fun_sub},
    {'x', fun_mul},
    {'/', fun_div},
 /* -
后续业务的添加-----*/
 };
 uint32_t convertUnit32(const char *str) {
    int num = 0;
    int n = 0;
    while(str[0] >= '0' && str[0] <= '9') {
        n = str[0] - '0';
        num = num * 10 + n;
        ++str;
 }
 return num;
 }
 // a.out   num1 + num2
 int main(int argc, char *argv[]) {
    for(int i = 0; i < argc; i++) {
        printf("argv[%d]:%s\n", i, argv[i]);
    }
 // 参数判断
    if (argc != 4) {
        printf("error format\n");
        return -1;
    }
 // 解析uint32_t 
    uint32_t num1 = convertUnit32(argv[1]);
    uint32_t num2 = convertUnit32(argv[3]);
    printf("num1:%d\n", num1);
    printf("num2:%d\n", num2);
    int result;
    int i;
    for(i = 0; i < sizeof(table) / sizeof(table[0]); ++i) {
        if (argv[2][0] == table[i].op && table[i].handler) {
            result = table[i].handler(num1, num2);
            break;
    }
    }
    if (i == sizeof(table) / sizeof(table[0])) {
        printf("Invalid format\n");
    } else{
        printf("result:%d\n",result);
    }
    return 0;
}