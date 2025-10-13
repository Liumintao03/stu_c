// #include <stdio.h>


// int main(){

//     int a =10;
//     printf("%d\n",a);
//     //p是指针变量，p存放的地址是指针，指针就是地址
//     int *p = &a;//&是找这个变量的地址
//     *p = 20;//*是解引用，通过这个地址找到变量，此时存放在p的地址找到的变量是a
//     printf("%d\n",a);

//     printf("%d\n",p);//可以看出，p存放的是地址
//     printf("%d\n",*p);//*p找到的是p存放地址的a

//     return 0;
// }



// #include <stdlib.h>
// #include <stdio.h>
// #include <unistd.h>
// #include <string.h>
// #include <time.h>


// int main() {


//     int num = 100;
//     int *p = &num;
//     int **pp = &p;

//     printf("num:%d, *p:%d, **pp:%d\n", num, *p, **pp);
//     printf("&num:%p, p:%p, *pp:%p\n", &num, p, *pp);
//     printf("&p:%p, pp:%p\n", &p, pp);
//     printf("&pp:%p\n", &pp);
	

// 	return 0;
// }

// #include <stdio.h>
// #include <unistd.h>
// #include <string.h>
// #include <time.h>

// struct abc{
// 	char a;
// 	int b;
// 	short c;
// };

// int main() {

// 	char *p1;
// 	int *p2;
// 	double *p3;
// 	struct abc *p4;
// 	int (*p5)(int, int);

// 	printf("sizeof(char *): %lu\n", sizeof(char *));
// 	printf("sizeof(int *): %lu\n", sizeof(int *));
// 	printf("sizeof(double *): %lu\n", sizeof(double *));
// 	printf("sizeof(struct abc*): %lu\n", sizeof(struct abc*));
// 	printf("sizeof(int (*)(int,int)): %lu\n", sizeof(int (*)(int, int )));



// 	return 0;
// }

















