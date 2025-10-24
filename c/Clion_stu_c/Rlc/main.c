//
// Created by 35376 on 2025/10/24.
//
#include "Rlc_fun.h"


int main(){
    unsigned char data[] = {0x11, 0x11, 0x11,0x22, 0x22, 0x22, 0x33,0x45, 0x56, 0x56, 0x56};
    int len = sizeof(data)/sizeof(data[0]);
    show_rlcinfo(data,&len);
    printf("初始化结束\n\n\n");
    //编码
    unsigned char *encode_data = (unsigned char *)encode_rlc(data,&len);
    show_rlcinfo(encode_data,&len);
    int incode_len = len;
    printf("编码结束len:%d\n\n\n",len);
    //解码
    unsigned char *decode_data = (unsigned char *)decode_rlc(encode_data,&len);
    show_rlcinfo(decode_data,&len);
    printf("解码结束len:%d\n\n\n",len);
    //释放
    free_rlc(encode_data);
    free_rlc(decode_data);

    return 0;
}