
// #ifndef FUN_H
// #define FUN_H

// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>



// //操作结构体poll
// //内存池的起始地址
// //每个内存块的大小
// //总共的内存块数
// //剩余可用的内存块数
// //空闲块链表
// typedef struct pool{
//     char * star_addrs;//内存池的起始地址
//     int piece_size;//每个内存块的大小
//     int total_piece_num;//总共的内存块数
//     int other_piece_num;//剩余可用的内存块数
//     char * free_list;//空闲块链表
// }Pool;

// Pool *Createmempool(int per_size,int per_num);//内存池创建初始化
// void Releasemempool(Pool *pool);//定长内存池的销毁
// void *mem_apply_for(Pool *pool);//内存块的申请
// int ReleasememBlock(Pool *pool,void *ptr);//内存块的释放
// int showPoolStatus(Pool *pool);//显示管理结构体信息



// #endif