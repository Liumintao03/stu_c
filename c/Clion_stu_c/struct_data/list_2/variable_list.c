//
// Created by 35376 on 2025/10/28.
//

#include "variable_list.h"

//˳�����,��ʼ��
SeqTable *creatTableinit() {
    SeqTable *table = (SeqTable *) malloc(sizeof(SeqTable));
    memset(table, 0, sizeof(SeqTable));
    table->capacity = 10;
    table->data = (Element **) malloc(sizeof(table->capacity) * sizeof(Element *));
    return table;
}

//����Ԫ��
//����Ԫ�ص��ж�
static int addelement(SeqTable *table){
    int a = 1;
    while(a==1){
        starreadd:
        printf("\n��ѡ������Ԫ��λ��:1.��ͷ\t2.��β\t3.�Լ�ѡ��\t4.ȡ�����\n");
        int op = 0;
        scanf("%d", &op);
        switch (op) {
            case 1:
                printf("������Ԫ����Ϣ\nѧ�� ���� ����\n");
                Element *p1 = (Element *) malloc(sizeof(Element));
                scanf("%d %s %d", &(p1->id), p1->name, &(p1->age));
                addElementHead(table, p1);
                break;
            case 2:
                printf("������Ԫ����Ϣ\nѧ�� ���� ����\nn");
                Element *p2 = (Element *) malloc(sizeof(Element));
                scanf("%d %s %d", &(p2->id), p2->name, &(p2->age));
                addElementTail(table, p2);
                break;
            case 3:
                printf("������Ԫ����Ϣ\nѧ�� ���� ���� ����λ��\n");
                Element *p3 = (Element *) malloc(sizeof(Element));
                int pos = 1;
                scanf("%d %s %d %d", &(p3->id), p3->name, &(p3->age), &pos);
                addElementPose(table, pos, p3);
            case 4:
                return 0;
            default:
                printf("�������,���������\n");
                goto starreadd;
                break;
        }
        printf("�Ƿ�鿴��Ϣ?����1�鿴\n");
        int info = 0;
        if(info == 1){
            showTableinfo(table);
        }
        printf("�Ƿ�������?����1�������\n");
        scanf("%d", &a);
    }
    return 0;
}

//����Ԫ��


//��������
static SeqTable *Expand(SeqTable *table) {
    //�õ�������С
    int len = table->capacity * sizeof(Element *);
    Element **tmp = (Element **) malloc(len * 2);
    //����ת��
    memset(tmp, 0, len);
    for (int i = 0; i < table->capacity; i++) {
        tmp[i] = table->data[i];
    }
    //�ͷ�ԭ�ռ�
    free(table->data);
    //ָ���¿ռ�
    table->data = tmp;
    table->capacity = table->capacity * 2;
}


//ͷ��
int addElementHead(SeqTable *table, Element *e) {
    //�ж�Ԫ�غϷ���
    if (table == NULL) {
        printf("������\n");
        return -1;
    }
    if (table->cnt >= table->capacity) {
        printf("����\n");
        Expand(table);
        printf("���ݳɹ�\n");

    }
    //�ҵ�Ҫ����ĵط�
    for (int i = table->cnt - 1; i >= 0; i--) {
        table->data[i + 1] = table->data[i];
    }
    //����
    table->data[0] = e;
    table->cnt++;
    return 0;
}


//β��
int addElementTail(SeqTable *table, Element *e) {
    //�ж�Ԫ�غϷ���
    if (table == NULL) {
        printf("������\n");
        return -1;
    }
    if (table->cnt >= table->capacity) {
        printf("����\n");
        Expand(table);
        printf("���ݳɹ�\n");
    }
    //ֱ�Ӳ��뵽���
    table->data[table->cnt] = e;
    table->cnt++;
}

//ѡ��λ�ò�
int addElementPose(SeqTable *table, int pos, Element *e) {
    //�ж�Ԫ�غϷ���
    if (table == NULL) {
        printf("������\n");
        return -1;
    }
    if (table->cnt >= table->capacity) {
        printf("����\n");
        Expand(table);
        printf("���ݳɹ�\n");
    }
    //�ҵ�λ��
    for (int i = table->cnt - 1; i >= pos - 1; i--) {
        table->data[i + 1] = table->data[i];
    }
    //����
    table->data[pos - 1] = e;
    table->cnt++;
    return 0;
}

//���λ�ò�
int addElementRand(SeqTable *table, Element *e) {
    //�ж�Ԫ�غϷ���
    if (table == NULL) {
        printf("������\n");
        Expand(table);
        printf("���ݳɹ�\n");
    }
    if (table->cnt >= table->capacity) {
        printf("����\n");
        return -1;
    }
    //���������
    srand(time(NULL));
    int pos = rand() % table->cnt + 1;
    addElementPose(table, pos, e);
    return 0;
}


//ɾ��Ԫ��
//ɾ��Ԫ���ж�
static int deletelement(Element *table){
    int a = 1;
    while(a){
        printf("\n��ѡ��ɾ��λ��\n");
        int pos = 1;
        scanf("%d",&pos);
        deletElementpos(table,pos);
        printf("�Ƿ�鿴��Ϣ?����1�鿴\n");
        int info = 0;
        if(info == 1){
            showTableinfo(table);
        }
        printf("�Ƿ�������?����1�������\n");
        scanf("%d", &a);
    }
    return 0;
}

//ͷɾ
int deletElementHead(SeqTable *table) {
    //��֤�����Ϸ���
    if (table == NULL) {
        printf("Ҫɾ���ı�����\n");
        return -1;
    }
    if (table->cnt <= 0) {
        printf("���ǿյ�");
        return -1;
    }
    //��ǰ��
    for (int i = 0; i < table->cnt - 1; ++i) {
        table->data[i] = table->data[i - 1];
    }
    //����
    table->cnt--;
    return 0;

}

//βɾ
int deletElementtail(SeqTable *table) {
    //��֤�����Ϸ���
    if (table == NULL) {
        printf("Ҫɾ���ı�����\n");
        return -1;
    }
    if (table->cnt <= 0) {
        printf("���ǿյ�");
        return -1;
    }
    //ɾ��
    table->cnt--;
    return 0;
}

//ѡ��λ��ɾ
int deletElementpos(SeqTable *table, int pos) {
    //��֤�����Ϸ���
    if (table == NULL) {
        printf("Ҫɾ���ı�����\n");
        return -1;
    }
    if (table->cnt <= 0) {
        printf("���ǿյ�");
        return -1;
    }
    //���λ�ú���Ľڵ�ȫ����ǰ��
    for (int i = pos; i < table->cnt-1;i++){
        table->data[i] = table->data[i+1];
    }
    //����
    table->cnt--;
    return 0;
}

//���λ��ɾ
int deletElementrand(SeqTable *table){
    //��֤�����Ϸ���
    if (table == NULL) {
        printf("Ҫɾ���ı�����\n");
        return -1;
    }
    if (table->cnt <= 0) {
        printf("���ǿյ�");
        return -1;
    }
    srand(time(NULL));
    int pos = rand() % table->cnt + 1;
    deletElementpos(table,pos);
    return 0;
}

//��ӡ
int showTableinfo(SeqTable *table){
    //��֤�����Ϸ���
    if (table == NULL) {
        printf("Ҫ��ӡ�ı�����\n");
        return -1;
    }
    for (int i = 0;i<table->cnt;i++){
        printf("[%d]:id:%d, name:%s, age:%d\n",i,table->data[i]->id,table->data[i]->name,table->data[i]->age);
    }
    return 0;
}

//�ͷ�
int releaseTable(SeqTable *table){
    if (table == NULL) {
        printf("Ҫ�ͷŵı�����\n");
        return -1;
    }
    if(table->data == NULL){
        printf("���е����ݲ�����\n");
        return -1;
    }
    free(table->data);
    free(table);
    return 0;
}

//����
int operation(SeqTable *table,int op){
    //"1.��ѯ\t2.����\t3.ɾ��\t4.�˳�"

    switch (op) {
        case  1:
            showTableinfo(table);
            break;
        case 2:
            addelement(table);
            break;
        case 3:
            deletelement(table);
            break;
        case 4:
            return 0;
        default:
            printf("�밴����ʾ������ȷ����\n");
            break;
    }
    return 1;
}


