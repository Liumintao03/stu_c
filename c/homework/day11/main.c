#include"fun.h"



int main(){

    Pool *pool = Createmempool(128,10);//创建内存池
    if(pool == NULL){
        printf("创建失败\n");
        return -1;
    }
    printf("内存池创建成功");
    showPoolStatus(pool);

    char *arr[12];
    for(int i = 0;i < sizeof(arr) / sizeof(arr[0]);i++){
        arr[i] = mem_apply_for(pool);
        printf("arr[%d]:%x\n",i,arr[i]);



    }
    printf("pool->other_piece_num:%d\n",pool->other_piece_num);

    for(int i = 0;i < 10;i++){
        ReleasememBlock(pool,arr[i]);
        printf("pool->other_piece_num:%d\n",pool->other_piece_num);
    }


    Releasemempool(pool);
    printf("退出\n");



    return 0;
}