//
// Created by 35376 on 2025/10/28.
//

#include "variable_list.h"

//顺序表创建,初始化
SeqTable *creatTableinit() {
    SeqTable *table = (SeqTable *) malloc(sizeof(SeqTable));
    memset(table, 0, sizeof(SeqTable));
    table->capacity = 10;
    table->data = (Element **) malloc(sizeof(table->capacity) * sizeof(Element *));
    return table;
}

//插入元素
//插入元素的判断
static int addelement(SeqTable *table){
    int a = 1;
    while(a==1){
        starreadd:
        printf("\n请选择增添元素位置:1.开头\t2.结尾\t3.自己选定\t4.取消添加\n");
        int op = 0;
        scanf("%d", &op);
        switch (op) {
            case 1:
                printf("请输入元素信息\n学号 名字 年龄\n");
                Element *p1 = (Element *) malloc(sizeof(Element));
                scanf("%d %s %d", &(p1->id), p1->name, &(p1->age));
                addElementHead(table, p1);
                break;
            case 2:
                printf("请输入元素信息\n学号 名字 年龄\nn");
                Element *p2 = (Element *) malloc(sizeof(Element));
                scanf("%d %s %d", &(p2->id), p2->name, &(p2->age));
                addElementTail(table, p2);
                break;
            case 3:
                printf("请输入元素信息\n学号 名字 年龄 插入位置\n");
                Element *p3 = (Element *) malloc(sizeof(Element));
                int pos = 1;
                scanf("%d %s %d %d", &(p3->id), p3->name, &(p3->age), &pos);
                addElementPose(table, pos, p3);
            case 4:
                return 0;
            default:
                printf("输入错误,请从新输入\n");
                goto starreadd;
                break;
        }
        printf("是否查看信息?输入1查看\n");
        int info = 0;
        if(info == 1){
            showTableinfo(table);
        }
        printf("是否继续添加?输入1继续添加\n");
        scanf("%d", &a);
    }
    return 0;
}

//输入元素


//增加容量
static SeqTable *Expand(SeqTable *table) {
    //得到容量大小
    int len = table->capacity * sizeof(Element *);
    Element **tmp = (Element **) malloc(len * 2);
    //数据转移
    memset(tmp, 0, len);
    for (int i = 0; i < table->capacity; i++) {
        tmp[i] = table->data[i];
    }
    //释放原空间
    free(table->data);
    //指向新空间
    table->data = tmp;
    table->capacity = table->capacity * 2;
}


//头插
int addElementHead(SeqTable *table, Element *e) {
    //判断元素合法性
    if (table == NULL) {
        printf("表不存在\n");
        return -1;
    }
    if (table->cnt >= table->capacity) {
        printf("满了\n");
        Expand(table);
        printf("扩容成功\n");

    }
    //找到要插入的地方
    for (int i = table->cnt - 1; i >= 0; i--) {
        table->data[i + 1] = table->data[i];
    }
    //插入
    table->data[0] = e;
    table->cnt++;
    return 0;
}


//尾插
int addElementTail(SeqTable *table, Element *e) {
    //判断元素合法性
    if (table == NULL) {
        printf("表不存在\n");
        return -1;
    }
    if (table->cnt >= table->capacity) {
        printf("满了\n");
        Expand(table);
        printf("扩容成功\n");
    }
    //直接插入到最后
    table->data[table->cnt] = e;
    table->cnt++;
}

//选择位置插
int addElementPose(SeqTable *table, int pos, Element *e) {
    //判断元素合法性
    if (table == NULL) {
        printf("表不存在\n");
        return -1;
    }
    if (table->cnt >= table->capacity) {
        printf("满了\n");
        Expand(table);
        printf("扩容成功\n");
    }
    //找到位置
    for (int i = table->cnt - 1; i >= pos - 1; i--) {
        table->data[i + 1] = table->data[i];
    }
    //插入
    table->data[pos - 1] = e;
    table->cnt++;
    return 0;
}

//随机位置插
int addElementRand(SeqTable *table, Element *e) {
    //判断元素合法性
    if (table == NULL) {
        printf("表不存在\n");
        Expand(table);
        printf("扩容成功\n");
    }
    if (table->cnt >= table->capacity) {
        printf("满了\n");
        return -1;
    }
    //随机数种子
    srand(time(NULL));
    int pos = rand() % table->cnt + 1;
    addElementPose(table, pos, e);
    return 0;
}


//删除元素
//删除元素判断
static int deletelement(Element *table){
    int a = 1;
    while(a){
        printf("\n请选择删除位置\n");
        int pos = 1;
        scanf("%d",&pos);
        deletElementpos(table,pos);
        printf("是否查看信息?输入1查看\n");
        int info = 0;
        if(info == 1){
            showTableinfo(table);
        }
        printf("是否继续添加?输入1继续添加\n");
        scanf("%d", &a);
    }
    return 0;
}

//头删
int deletElementHead(SeqTable *table) {
    //验证参数合法性
    if (table == NULL) {
        printf("要删除的表不存在\n");
        return -1;
    }
    if (table->cnt <= 0) {
        printf("表是空的");
        return -1;
    }
    //往前移
    for (int i = 0; i < table->cnt - 1; ++i) {
        table->data[i] = table->data[i - 1];
    }
    //更新
    table->cnt--;
    return 0;

}

//尾删
int deletElementtail(SeqTable *table) {
    //验证参数合法性
    if (table == NULL) {
        printf("要删除的表不存在\n");
        return -1;
    }
    if (table->cnt <= 0) {
        printf("表是空的");
        return -1;
    }
    //删除
    table->cnt--;
    return 0;
}

//选择位置删
int deletElementpos(SeqTable *table, int pos) {
    //验证参数合法性
    if (table == NULL) {
        printf("要删除的表不存在\n");
        return -1;
    }
    if (table->cnt <= 0) {
        printf("表是空的");
        return -1;
    }
    //这个位置后面的节点全部往前移
    for (int i = pos; i < table->cnt-1;i++){
        table->data[i] = table->data[i+1];
    }
    //更新
    table->cnt--;
    return 0;
}

//随机位置删
int deletElementrand(SeqTable *table){
    //验证参数合法性
    if (table == NULL) {
        printf("要删除的表不存在\n");
        return -1;
    }
    if (table->cnt <= 0) {
        printf("表是空的");
        return -1;
    }
    srand(time(NULL));
    int pos = rand() % table->cnt + 1;
    deletElementpos(table,pos);
    return 0;
}

//打印
int showTableinfo(SeqTable *table){
    //验证参数合法性
    if (table == NULL) {
        printf("要打印的表不存在\n");
        return -1;
    }
    for (int i = 0;i<table->cnt;i++){
        printf("[%d]:id:%d, name:%s, age:%d\n",i,table->data[i]->id,table->data[i]->name,table->data[i]->age);
    }
    return 0;
}

//释放
int releaseTable(SeqTable *table){
    if (table == NULL) {
        printf("要释放的表不存在\n");
        return -1;
    }
    if(table->data == NULL){
        printf("表中的数据不存在\n");
        return -1;
    }
    free(table->data);
    free(table);
    return 0;
}

//操作
int operation(SeqTable *table,int op){
    //"1.查询\t2.增添\t3.删除\t4.退出"

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
            printf("请按照提示输入正确操作\n");
            break;
    }
    return 1;
}


