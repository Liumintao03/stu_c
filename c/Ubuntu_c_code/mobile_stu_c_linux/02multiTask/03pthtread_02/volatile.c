//
// Created by 35376 on 2025/11/17.
//

#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
void my_func();
//加上volatile是为了让编译器不优化这个变量，每次取数据就去内存上去取而不是去寄存器上面取
volatile int i;
//int i;
// gcc main.c -O2 -o build -lpthread
int main() {
    pthread_t my_thread;
    int err = pthread_create(&my_thread,NULL,(void *)my_func,NULL);
    if(err != 0) {
        perror("can't create thread:%s\n");
        return -1;
    }
    i= 2;
    while(i == 2) {
    }
    printf("main:%d\n",i);
    while(1) {
        sleep(1);
    }
    return 0;
}
void my_func()
{
    sleep(1);
    i = 3;
    printf("my_func:%d\n",i);
}