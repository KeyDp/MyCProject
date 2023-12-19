//C语言中实现循环的三个语句：while/do...whlie/for


#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;
int main()
{
	int year = 0;
	while (year < 100)  //记得while后面别加；
	{
		printf("相爱年数：%d\n", year);
		year++;
	}
	if (year >= 100)  //记得if后面别加;
	{
		printf("再爱一百年\n");
	}
	else
	{
		printf("继续加油\n");
	}
	return 0;
}