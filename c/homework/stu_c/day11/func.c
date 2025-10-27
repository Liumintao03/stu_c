// #include"fun.h"

// //内存池的实现


// //内存池每个块的大小size，内存块的个数num；

// Pool *Createmempool(int per_size,int per_num){
//     if(per_size<sizeof(char*)){
//         printf("创建的空间太小了;创建失败空间至少要大于8个字节");
//         return NULL;
//     } 

//     //先申请内存池大小：块大小*块数量
//     char *ptr = (char*)malloc(per_size * per_num);

//     memset(ptr,0,per_size * per_num);//初始化，使所有的字节初始化为0

//     //申请管理结构体
//     Pool *pool = malloc(sizeof(Pool));

//     memset(pool,0,sizeof(Pool));

//     pool->star_addrs = ptr;
//     pool->piece_size = per_size;
//     pool->total_piece_num = per_num;
//     pool->other_piece_num = per_num;

//     for(int i = 0;i < per_num-1;i++){
//         *(char**)ptr = ptr + per_size;
//         ptr = ptr + per_size;
//     }
//     *(char**)ptr = NULL;
//     pool->free_list = pool->star_addrs;

//     return pool;
// }

// //定长内存池的销毁
// void Releasemempool(Pool *pool){
//     if(pool){
//         if(pool->star_addrs){
//             free(pool->star_addrs);
//         }
//         free(pool);
//     }
// }


// //内存块的申请
// void *mem_apply_for(Pool *pool){
//     //判断空间是否足够申请空闲块
//     if(pool->other_piece_num <= 0){
//         printf("内存块数量不足,剩余数量为%d\n",pool->other_piece_num);
//         return NULL;
//     }
//     //申请
//     char *ptr = pool->free_list;
//     pool->free_list = *(char**)ptr;

//     //可用块数量更新
//     pool->other_piece_num--;
//     return ptr;
// }

// //内存块的释放
// int ReleasememBlock(Pool *pool,void *ptr){
//     if(pool == NULL || ptr ==NULL){
//         printf("传入的为空，不释放\n");
//         return -1;
//     }

//     if(pool->other_piece_num >= pool->total_piece_num){
//         printf("剩余的块大于池中块总数\n");
//         return -1;
//     }

//     char *p=ptr;
//     *(char **)p = pool->free_list;
//     pool->free_list = ptr;

//     //可用块数量更新
//     pool->other_piece_num++;
//     return 0;

// }

// //显示管理结构体信息
// int showPoolStatus(Pool *pool){
//     if(pool == NULL){
//         printf("Pool为空\n");
//         return 0;
//     }

//     printf("pool->star_addrs:%x\n",pool->star_addrs);
//     printf("pool->per_block_size:%d\n",pool->piece_size);
//     printf("pool->total_piece_num:%d\n",pool->total_piece_num);
//     printf("pool->other_piece_num%d\n",pool->other_piece_num);
//     printf("pool->free_list%x\n",pool->free_list);

//     return 0;

// }



