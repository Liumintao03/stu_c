#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//内存池的实现




//操作结构体poll
//内存池的起始地址
//每个内存块的大小
//总共的内存块数
//剩余可用的内存块数
//空闲块链表
typedef struct pool{
    char * star_addrs;//内存池的起始地址
    char * piece_size;//每个内存块的大小
    char * total_piece_num;//总共的内存块数
    char * other_piece_num;//剩余可用的内存块数
    char * free_list;//空闲块链表
}Pool;


//内存池每个块的大小size，内存块的个数num；

Pool *Createmempool(int per_size,int per_num){
    if(per_size<sizeof(char*)){
        printf("创建的空间太小了;创建失败空间至少要大于8个字节");
        return NULL;
    } 

    //先申请内存池大小：块大小*块数量
    char *ptr = (char*)malloc(per_size * per_num);

    memset(ptr,0,per_size * per_num);//初始化，使所有的字节初始化为0

    //申请管理结构体
    Pool *pool = malloc(sizeof(Pool));

    memset(pool,0,sizeof(Pool));

    pool->star_addrs = ptr;
    pool->piece_size = per_size;
    pool->total_piece_num = per_num;
    pool->other_piece_num = per_num;

    for(int i = 0;i < per_num-1;i++){
        *(char**)ptr = ptr + per_size;
        ptr = ptr + per_size;
    }
    *(char**)ptr = NULL;
    pool->free_list = pool->star_addrs;

    return pool;
}

//定长内存池的销毁
void Release(Pool *pool){
    if(pool){
        if(pool->star_addrs){
            free(pool->star_addrs);
        }
        free(pool);
    }
}










