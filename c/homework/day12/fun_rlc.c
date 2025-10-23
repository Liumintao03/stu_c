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
    if(data == NULL){
        printf("传入的需要编码为空");
        return NULL;
    }
    //1==求得堆空间大小
    int src_len = *len;
    unsigned char *src_data = (unsigned char *)data;
    int sybm = 0;//每个需要计数字段的标记
    int cunt = 1;//计数
    for(int i= 0 ;i < src_len;i++){//统计有多少种要压缩的数据
        if(src_data[sybm] != src_data[i]){//如果当前的字段和上个空间不匹配,说明有了新的要压缩的数,计数加一
            cunt++;
            sybm = i;
        }

    }
    sybm = 0;//重置标记
    cunt = cunt * 2;//因为每个空间都要有其需要计数的数字,所以要×2
    if(cunt>255){
        printf("所需空间太大\n");
        return NULL;
    }
    char *endata = (char *)malloc(cunt);//申请空间
    int addrs = 0;
    for(int i = 0;i < src_len; i++){//编码过程
        if(src_data[sybm] != src_data[i]){//如果遇到改变的节点
            addrs+=2;  //编码的空间更新
            sybm = i;
        }
        endata[addrs] = src_data[sybm];
        if((i - sybm +1) <= 255){//判断如果没有超过255大小,继续计算
            endata[addrs+1] = i - sybm + 1;
        }
        else{//如果超过255从新计数
            endata[addrs+1] = 1;
        }
    }
    *len = cunt;
    return endata;
}



//解码
void *decode_rlc(void *data,int *len){
    unsigned char *src_data = (unsigned char*)data;
    int src_len = *len;
    if(src_data == NULL || src_data[1] == 0 || src_len % 2 ==1){//加入对传入的需要解码的数据进行格式校验
        printf("当前传入需要解码为空");
        return NULL;
    }
    //判断多长

    int cunt = 0;
    for(int i = 1;i < src_len;i += 2){
        cunt = cunt + src_data[i];
    }
    char *dedata = (char*)malloc(cunt);//申请内存长度
    int addrs = 0;
    for(int i = 1;i < src_len;i+=2){
        int j = src_data[i];
        for(;j > 0;j --){
            dedata[addrs] = src_data[i-1];
            addrs++;
        }

        // if(src_data[addrs] != 0){
        //     dedata[i] = src_data[addrs-1];
        //     src_data[addrs]--;
        // }
        // else{
        //     addrs += 2;
        //     i--;
        // }
    }

    *len = cunt;
    return dedata;

}




show_rlcinfo(void *data,int *len){//打印
    //判断是否为空
    unsigned char *src_data = (unsigned char*)data;
    int src_len = *len;
    if(src_data == NULL){
        printf("传入为空\n");
        return NULL;
    }


    for(int i=0;i < src_len;i ++){
        printf("%x\n",src_data[i]);
    }



}


void free_rlc(void *data){
    if(data){
        free(data);
    }
}

int main(){
    unsigned char data[] = {0x11, 0x11, 0x11,0x22, 0x22, 0x22, 0x33,0x45, 0x56, 0x56, 0x56};
    int len = sizeof(data)/sizeof(data[0]);
    show_rlcinfo(data,&len);

    //编码
    unsigned char *encode_data = (unsigned char *)encode_rlc(data,&len);
    show_rlcinfo(data,&len);
    int incode_len = len;
    printf("len:%d\n",len);

    //解码
    unsigned char *decode_data = (unsigned char *)decode_rlc(data,&len);
    show_rlcinfo(data,&len);
    

    free_rlc(encode_data);
    free_rlc(decode_data);

    return 0;
}
