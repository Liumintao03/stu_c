// //顺序表
//
// #include<stdio.h>
// #include<stdlib.h>
//
// typedef int ElemType;
// #define MAXSIZE 100
//
// //创建顺序表,以结构体形式
// typedef struct{
//     ElemType *data;
//     int length;
// }SeqList;
//
// //顺序表初始化
// SeqList *initList(){
//     SeqList *L = (SeqList *)malloc(sizeof(SeqList));
//     L->data = (ElemType *)malloc(sizeof(ElemType)*MAXSIZE);
//     L->length = 0;
//     return L;
// }
//
// //顺序表尾部添加元素
// int appendElem(SeqList *L,ElemType e){
//     if(L->length>=MAXSIZE){
//         printf("顺序表已经满了");
//         return -1;
//     }
//     L->data[L->length] = e;
//     L->length++;
//     return 0;
// }
//
// //顺序表插入元素,在第几个位置插入
// int insertElem(SeqList *L,ElemType e,int local){
//     if(L->length >= MAXSIZE){
//         return -1;
//     }
//     if(local < 1 || local > L->length){
//         printf("插入位置错误");
//         return -1;
//     }
//
//     for(int i = L->length-1;i >= local-1;i--){
//         L->data[i+1] = L->data[i];
//     }
//     L->data[local-1] = e;
//     L->length++;
//     return 0;
// }
//
// int deleElem(SeqList *L,int local){
//     if(L==NULL){
//         printf("空表\n");
//         return -1;
//     }
//     if(local < 1 || local > L->length){
//         printf("插入位置错误");
//         return -1;
//     }
//     for(int i = local-1;i < L->length-1;i++){
//         L->data[i] = L->data[i+1];
//     }
//     L->length--;
//     return 0;
//
// }
//
//
// //遍历顺序表
// void listElem(SeqList *L){
//     for(int i = 0;i < L->length;i++){
//         printf("%d\n",L->data[i]);
//     }
//     printf("\n");
// }
//
// int main(){
//     SeqList *list = (SeqList *)initList();
//     ElemType e = 100;
//     int add_res1 = appendElem(list,e);//顺序表尾部添加元素
//     int add_res2 = appendElem(list,11);
//     int add_res3 = appendElem(list,22);
//     int add_res4 = appendElem(list,33);
//     int add_res5 = appendElem(list,44);
//     int add_res6 = appendElem(list,55);
//     listElem(list);////遍历顺序表
//     int insert = insertElem(list,20,2);//插入到第二个元素
//     listElem(list);////遍历顺序表
//     int delet = deleElem(list,3);//删除第三个元素
//     listElem(list);////遍历顺序表
//
//     free(list->data);
//     free(list);
//     return  0;
// }
//
