#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;
/*
int main()
{
	int a = 10;
	printf("%d\n", sizeof(a));  //a的内存大小为4个字节，即32bit
	&a;  //取地址操作符& //窗口查地址/窗口查内存中的数据-倒着读00 00 00 0a(十六进制)
	printf("%p\n", &a);  //打印地址用%p
	int* p = &a;  //int*是存地址的类型  p就是指针变量
	*p = 20;  //解引用操作符*，意思是通过p中存放的地址，找到p所指的对象。
	return 0;	//int说明p指向的对象是int类型的  *说明p是指针变量
}
//内存单元的编号也叫-地址-地址又被称为指针
//存放指针或者地址的变量被称为指针变量
*/

//指针内存大小
int main()
{
	printf("%zu\n", sizeof(int*));  //4
	printf("%zu\n", sizeof(char*));
	printf("%zu\n", sizeof(double*));
	printf("%zu\n", sizeof(float*));
	printf("%zu\n", sizeof(short*));  //sizeof打印最好用%zu
	printf("%zu\n", sizeof(long*));
	printf("%zu\n", sizeof(long long*));
	return 0;
}
//不管是什么类型的指针，都是在创建指针变量
//指针变量是用来存放地址的
//指针变量的大小取决于一个地址存放的时候需要多大的空间
//32位机器的地址需要32bit,即4byte,所以指针变量为4个字节
//64位机器的地址需要64bit,即8byte，所以指针变量为8个字节





