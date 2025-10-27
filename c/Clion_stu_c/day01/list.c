//
// Created by 35376 on 2025/10/27.
//

#include "list.h"

//����˳���,��ʼ��
SseqTable *createSseqTable(){
    SseqTable *list = (SseqTable *)malloc(sizeof (SseqTable));
    memset(list,0,sizeof(SseqTable));
    list->capacity = 200;
    return list;
}

// ˳��������
int releaseSseqTable(SseqTable *table){
    if(table==NULL){
        printf("����Ҫ����,��ΪΪ��\n");
        return -1;
    }
    free(table);
};

//β������Ԫ��
int insertSseqTableElementByTail(SseqTable *table, Element e){
    //�жϴ���ı��Ƿ�Ϊ��
    if(table==NULL){
        printf("����Ԫ�ش���ı�Ϊ��");
        return -1;
    }
    //�ж��Ƿ����
    if(table->count>=table->capacity){
        printf("Ԫ������\n");
        return -1;
    }
    table->data[table->count]=e;
    table->count++;
    return 0;
}

//ͷ������Ԫ��
int insertSseqTableElementByHead(SseqTable *table, Element e){
    //�жϴ���ı��Ƿ�Ϊ��
    if(table==NULL){
        printf("����Ԫ�ش���ı�Ϊ��");
        return -1;
    }
    //�ж��Ƿ����
    if(table->count>=table->capacity){
        printf("Ԫ������\n");
        return -1;
    }

    //��ÿ��Ԫ��������һλ
    for(int i=table->count-1;i>=0;i--){
        table->data[i+1] = table->data[i];
    }
    table->data[0] = e;
    table->count++;
    return  0;
}

//���λ�ò���Ԫ��
int insertSseqTableElementByRandom(SseqTable *table, Element e){
    srand(time(NULL));
    int pos = rand()%table->count+1;
    insertSseqTableElementByPos(table,pos,e);
}

//ָ��λ�ò���Ԫ��
// pos ��1, cnt + 1��
int insertSseqTableElementByPos(SseqTable *table, int pos, Element e){
    //�жϴ���ı��Ƿ�Ϊ��
    if(table==NULL){
        printf("����Ԫ�ش���ı�Ϊ��");
        return -1;
    }
    //�ж��Ƿ����
    if(table->count>=table->capacity){
        printf("Ԫ������\n");
        return -1;
    }
    if(pos>table->count||pos<0){
        printf("�����Ԫ��λ�ò�����Ҫ��");
        return  -1;
    }
    for(int i = table->count-1;i>=pos-1;i--){
        table->data[i+1] = table->data[i];
    }
    table->data[pos-1] = e;
    table->count++;
    return 0;
}

// ɾ��Ԫ��
//β��ɾ��Ԫ��
int deleteSseqTableElementByTail(SseqTable *table){
    //�жϴ���ı��Ƿ�Ϊ��
    if(table==NULL){
        printf("����Ԫ�ش���ı�Ϊ��");
        return -1;
    }
    //�жϱ������Ƿ���Ԫ��
    if(table->count==0){
        printf("����Ԫ��Ϊ��,�޷�ɾ��\n");
        return -1;
    }
    table->count--;
    return 0;
}

//ͷ��ɾ��Ԫ��
int deleteSseqTableElementByHead(SseqTable *table){
    //�жϴ���ı��Ƿ�Ϊ��
    if(table==NULL){
        printf("ɾ��Ԫ�ش���ı�Ϊ��");
        return -1;
    }
    //�жϱ������Ƿ���Ԫ��
    if(table->count==0){
        printf("����Ԫ��Ϊ��,�޷�ɾ��\n");
        return -1;
    }
    for(int i = 0;i<table->count-1;i++){
        table->data[i] = table->data[i+1];
    }
    table->count--;
    return 0;


}

//���λ��ɾ��Ԫ��
int deleteSseqTableElementByRandom(SseqTable *table){
    srand(time(NULL));
    int pos = rand()%table->count+1;
    deleteSseqTableElementByPos(table,pos);
}

//ָ��λ��ɾ��Ԫ��
int deleteSseqTableElementByPos(SseqTable *table, int pos){
    if(table==NULL){
        printf("ɾ��Ԫ�ش���ı�Ϊ��");
        return -1;
    }
    //�жϱ������Ƿ���Ԫ��
    if(table->count==0){
        printf("����Ԫ��Ϊ��,�޷�ɾ��\n");
        return -1;
    }
    if(pos>table->count||pos<0){
        printf("�����Ԫ��λ�ò�����Ҫ��");
        return  -1;
    }

    for(int i=pos-1;i<table->count-1;i++){
        table->data[i] = table->data[i+1];
    }
    table->count--;
    return 0;

}

// ������ ��ӡ���е�Ԫ����Ϣ
int showTable(SseqTable *table){
    if(table==NULL){
        printf("��ӡԪ�ش���ı�Ϊ��");
        return -1;
    }
    printf("˳�����Ϊ:%d\n",table->count);
    for(int i = 0;i<table->count;i++){
        printf("%d\n",table->data[i]);

    }
    return 0;
}