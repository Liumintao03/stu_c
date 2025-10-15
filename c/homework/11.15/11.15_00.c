#include<stdio.h>
#include<string.h>




void test01(){
    printf("test01\n\n\n");
    char buf1[] = "abc";
    char buf2[] = {'a','b','c'};
    printf("strlen_buf1:%d\tsizeof_buf1:%d\n",strlen(buf1),sizeof(buf1));//len=3，siziof=4是因为最后有\0
    printf("strlen_buf2:%d\tsizeof_buf2:%d\n",strlen(buf2),sizeof(buf2));// len=3是因为strlen没有读取到\0就会一直读取，直到读取到\0为止

}


void test02(){
    printf("test02\n\n\n");
    char buf1[7] = "abc";
    char buf2[7] = {'a','b','c'};
    printf("strlen_buf1:%d\tsizeof_buf1:%d\n",strlen(buf1),sizeof(buf1));
    printf("strlen_buf2:%d\tsizeof_buf2:%d\n",strlen(buf2),sizeof(buf2));

}

void test03(){
    printf("test03\n\n\n");
    char data[]="123456"; //data里的数据可以修改
    char *p="123456";//*p解引用为"123456"是常量，不能修改
    printf("sizeof_data:%d\tsizeof_*p:%d\n",sizeof(data),sizeof(p));//data为7，p为8,因为p为指针，在64位操作系统中占8个字节
}

void test04(){
    printf("test04\n\n\n");
    int arr[]={0x34333231,0x6565};
    char *p =(char*) arr;
    printf("%s\n",p);//1234ee
}

int test05(char *p){
    printf("test05\n\n\n");
    int num=0;
    int i=0;
    while(p[i]!='\0'){
        if(p[i]>='A'&& p[i]<='Z'){
            num++;
        }
        i++;
    }
    printf("A——Z:%d\n",num);
    return num;

}


void test06(char *p) {
    printf("test06\n\n\n");
    
    char *read_ptr = p;  // 读取指针
    char *write_ptr = p; // 写入指针
    
    while (*read_ptr != '\0') {
        if (*read_ptr != ' ') {  // 如果不是空格
            *write_ptr = *read_ptr;  // 复制字符
            write_ptr++;  // 移动写入指针
        }
        read_ptr++;  // 总是移动读取指针
    }
    *write_ptr = '\0';  // 添加字符串结束符
    
    printf("%s\n", p);
}

void test07(char *p){
    printf("test06\n\n\n");
    char *temp1;
    temp1=p;
    char *temp2;
    int i =0;
    while(temp1[i]!='\0'){
        if(temp1[0]==' '){
            temp1=temp2;
        }
        
        temp1++;
    }
    printf("%s\n",p);

}


int main(){

    test01();
    test02();
    test03();
    test04();
    test05("AKIJsdgdkh67AD");
    test06("er af gfdsg  gdfhg g   sgsdg");

    return 0;
}