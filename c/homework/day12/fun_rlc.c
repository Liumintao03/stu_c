//  rlc编码
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//编码
//传入参数:要编码的数据,数据长度
void *encode_rlc(void *data,int *len){
    //1==求得堆空间大小
    //2==malloc申请堆空间,用来存放编码后的数据
    //3==从源空间开始,不断的找到数据,以及其对应连续的个数,如果连续个数超过0xff,则 从新计数
    //4==把数据以及对应的个数存入到编码空间

    //1==求得堆空间大小
    int src_len = *len;
    char *src_data = data;
    int sybm = 0;//每个需要计数字段的标记
    int cunt = 0;//计数
    for(int i= 0 ;i < src_len;i++){//统计有多少种要压缩的数据
        if(src_data[sybm] != src_data[i]){//如果当前的字段和上个空间不匹配,说明有了新的要压缩的数,计数加一
            cunt++;
            sybm = i;
        }

    }
    sybm = 0;//重置标记
    cunt = cunt * 2;//因为每个空间都要有其需要计数的数字,所以要×2

    char *endata = (char *)malloc(cunt);//申请空间
    int addrs = 0;
    for(int i = 0;i < src_len; i++){//编码过程
        
        if(src_data[sybm] != src_data[i]){//如果遇到改变的节点
            endata[addrs] = src_data[sybm];//编码的空间更新
            endata[addrs+1] = i - sybm;
            addrs+=2;
            sybm = i;
        }
    }

    
    return endata;


}



