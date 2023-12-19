#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;
//结构体（struct）：C语言中一种自定义类型
//结构体就是一种把单一类型组合在一起的做法
/*
struct stu
{
	char name[10];  //同时定义多个同类型变量
	int age[10];
	char sex[10];
	char tele[10];
};
int main()
{
	struct stu s = { "zhangsan",20,"nan","15210956666" };
	//结构体对象.成员名
	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);//直接打印的方法
	//用到了操作符 . --
	return 0;
} 
*/

struct stu
{
	char name[10];
	int age;
	char sex[10];
	char tele[12];
};
void print(struct stu* ps)  //void不需要返回
{
	printf("%s %d %s %s", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);//方法1
	printf("%s %d %s %s", ps->name, ps->age, ps->sex, ps->tele);  //方法2
	// 操作符->
	//结构体指针变量->成员名
}
int main()
{
	struct stu s = { "xiaolei",21,"nv","13683526666" };
	print(&s);
	return 0;
}