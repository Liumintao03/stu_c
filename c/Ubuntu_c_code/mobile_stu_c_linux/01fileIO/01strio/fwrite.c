//
// Created by 35376 on 2025/11/10.
//


//块池存储
#include <stdio.h>


int main() {
    double arr[] = {1.0, 3.14, 5.34, 6.22, 11.34};
    FILE *fp = fopen("new_test","w+");
    //判断是否创建指针成功
    if(fp==NULL){
        //输出错误信息
        perror("fopen");
        return -1;
    }
    //创建成功
    int ret;
    //写入
    //=========用哪里的内容====一个元素大小===写多少个元素===写到那里去
    ret = fwrite(arr,sizeof (arr[0]),3,fp);
    //如果没有写入成功
    if(ret<0){
        perror("fwrite");
        return -1;
    }
    printf("\nret = %d\n",ret);
    //重值指针
    fseek(fp,0,SEEK_SET);
    //读取
    fp = fopen("new_test","r");
    //判断是否创建指针成功
    if(fp==NULL){
        perror("fopen:");
        return -1;
    }
    //创建成功
    ret = fread(arr,sizeof (arr[0]),3,fp);
    if(ret<0){
        perror(" fread:");
        return -1;
    }
    printf("\nret:%d\n",ret);
    for(int i = 0;i<sizeof (arr)/sizeof (arr[0]);i++){
        printf("%lf\n",arr[i]);
    }


    //清理
    fclose(fp);

    return 0;
}

