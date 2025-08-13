// #include<stdio.h>


// struct Stu{
//     char name[20];
//     int age;
//     char sex[10];
//     char tele[12];
// };

// void prt(struct Stu *s){

//     printf("%s %d %s %s\n",(*s).name,(*s).age,(*s).sex,(*s).tele);
//     //->
//     //结构体指针变量->成员名

//     printf("%s %d %s %s\n",s->name,s->age,s->sex,s->tele);

// }


// int main(){

//     struct Stu s ={"zhangsan",12,"man","13032866683"};

//     printf("%s %d %s %s\n",s.name,s.age,s.sex,s.tele);

//     prt(&s);




//     return 0;
// }