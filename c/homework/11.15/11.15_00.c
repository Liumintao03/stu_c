#include<stdio.h>
#include<string.h>




void test01(){
    char buf1[] = "abc";
    char buf2[] = {'a','b','c'};
    printf("strlen_buf1:%d\tsizeof_buf1:%d\n",strlen(buf1),sizeof(buf1));//len=3，siziof=4是因为最后有\0
    printf("strlen_buf2:%d\tsizeof_buf2:%d\n",strlen(buf2),sizeof(buf2));// len=3是因为strlen没有读取到\0就会一直读取，直到读取到\0为止

}


void test02(){
    char buf1[7] = "abc";
    char buf2[7] = {'a','b','c'};
    printf("strlen_buf1:%d\tsizeof_buf1:%d\n",strlen(buf1),sizeof(buf1));
    printf("strlen_buf2:%d\tsizeof_buf2:%d\n",strlen(buf2),sizeof(buf2));

}

int main(){

    test01();
    test02();

    return 0;
}