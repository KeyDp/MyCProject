//C语言是结构化的程序设计语言：顺序结构/循环结构/选择结构
//C语言实现选择的两个语句：if else/switch

//
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>;
//int main()
//{
//	int input = 0;
//	printf("雷子今天拉粑情况预测\n");
//	printf("请输入（1/0）来进行预测\n请输入：");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("宇宙超级无敌通畅，拉八斤粑");
//	}
//	else
//	{
//		printf("很通畅");
//	}
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;
int main()
{
	int x = 0;
	int y = 0;
	scanf("%d", &x);
	if (x < 0)
		y = 1;
	else if (x == 0)
		y = 0;
	else
		y = -1;
	printf("%d\n", y);
	return 0;
}