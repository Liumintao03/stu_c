// #include<stdio.h>



// struct {
//     int id;
//     int age;
// }person1,person2;//在定义这个结构体不给他赋名，就成了匿名结构体
// //匿名结构体只能使用一次，我定义了两个，person1和person2，这两个分别可以使用一次



// // struct Student{
// //     int id;
// //     char *name;
// //     int age;
// //     float score;


// // };

// typedef struct A//A占8个字节，因为内存对齐，以最大的为标准，其余的要补齐这么大
// {
    
//     int a;//4个字节
//     char b;//1个字节

// }A;



// typedef struct {
//     int year;
//     int month;
//     int day;
// }Birthday;

// //typedef作用是定义新的数据类型，比如下面就将 struct Student 定义为Student的数据类型，使用这个Student就可以声名这个数据类型的变量

// typedef struct Student{//使用typedef定义的结构体，可以直接使用，此处括号前的Student可以省略不写

//     int id;
//     char *name;
//     int age;
//     float score;
//     Birthday birthday;

// }Student,stu4;//此处stu4直接就声名了，不用再去下方单独声名


// void Printf_student_info_01(Student stu){
//     printf("学号%d\t姓名%s\t年龄%d\t分数%.2f\t%d-%d-%d\n",stu.id,stu.name,stu.age,stu.score,stu.birthday.year,stu.birthday.month,stu.birthday.day);

// }

// void Printf_student_info_02(Student *stu){

//     //传递进来的stu，如果要使用，有下面两种方法
//     //1.==  (*stu).id  ==stu存的是指针，*解引用，所以需要(*stu)来进行读取
//     printf("学号%d\t姓名%s\t年龄%d\t分数%.2f\t%d-%d-%d\n",(*stu).id,(*stu).name,(*stu).age,(*stu).score,(*stu).birthday.year,(*stu).birthday.month,(*stu).birthday.day);


//     //2.==  stu->id  ==使用->代表这个指针指向的值它的id，便捷熟悉
//     printf("学号%d\t姓名%s\t年龄%d\t分数%.2f\t%d-%d-%d\n",stu->id,stu->name,stu->age,stu->score,stu->birthday.year,stu->birthday.month,stu->birthday.day);

// }

// int main(){

//     Student stu0;//使用typdef之后，可以直接声名结构体变量

//     Student stu1 = {1001,"niubi",27,100,{2003,7,15}};

//     //printf("学号%d\t姓名%s\t年龄%d\t分数%.2f\t%d-%d-%d",stu1.id,stu1.name,stu1.age,stu1.score,stu1.birthday.year,stu1.birthday.month,stu1.birthday.day);
//     Printf_student_info_01(stu1);//此传参方法是拷贝 ，慢

//     Printf_student_info_02(&stu1);//此传参方法为直接传递地址，快速


//     Student stu2,stu3;//可以连续声名多个变量



//     printf("%d\n",sizeof(A));//
    
//     return 0;
// }