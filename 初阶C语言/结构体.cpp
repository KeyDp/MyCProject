#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// 结构体
// 结构是一些值的集合，这些值称为成员变量。结构的每个成员可以是不同类型的变量
// 关键字struct
// 结构体成员可以是标量、数组、指针、其他结构体
// .操作符用来通过结构体变量访问结构体成员
// ->操作符用来通过结构体指针访问结构体成员
// struct point
// {
//		int x;
//		int y;
// }p1;
// struct point p2;
// 结构体变量的创建
// 如果嵌套要注意先后顺序

//struct peo
//{
//	char name[20];
//	char num[20];
//	char sex[5];
//	int high;
//};
//struct s
//{
//	struct peo p;  //结构体成员是其他结构体
//	int num;
//	double f;
//};
//void print1(struct peo p)
//{
//	printf("%s %s %s %d\n", p.name, p.num, p.sex, p.high);
//}
//void print2(struct peo* sp)
//{
//	printf("%s %s %s %d\n", sp->name, sp->num, sp->sex, sp->high);
//}
//int main()
//{
//	struct peo p1 = { "zhcusz", "55786676787", "男", 171 };  //不加这些信息叫不完全初始化
//	struct s p2 = { {"zsasz", "6758758578", "女", 199}, 256, 1.0 };
//	printf("%s %s %s %d\n", p1.name, p1.num, p1.sex, p1.high);
//	printf("%s %s %s %d %d %lf\n", p2.p.name, p2.p.num, p2.p.sex, p2.p.high, p2.num, p2.f);
//	print1(p1);
//	print2(&p1);
//	return 0;
//}

// 结构体传参
// 函数传参的时候，参数是要压栈的
// 所以传参的时候，最好传结构体地址
