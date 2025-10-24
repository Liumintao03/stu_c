//
// Created by 35376 on 2025/10/24.
//

#ifndef CLION_STU_C_RLC_FUN_H
#define CLION_STU_C_RLC_FUN_H

//  rlc编码
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXSIZE 2


void *encode_rlc(void *data,int *len);//编码
void *decode_rlc(void *data,int *len);//解码
void show_rlcinfo(void *data,int *len);//打印
void free_rlc(void *data);//释放

#endif //CLION_STU_C_RLC_FUN_H



