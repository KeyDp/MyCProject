#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//将三个数从大到小输出

//void compare(int a, int b, int c)
//{
//	int mid = 0;
//	if (a < b)
//	{
//		mid = b;
//		b = a;
//		a = mid;
//	}
//	if (a < c)
//	{
//		mid = c;
//		c = a;
//		a = mid;
//	}
//	if (b < c)
//	{
//		mid = c;
//		c = b;
//		b = mid;
//	}
//	printf("%d %d %d\n", a, b, c);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0; 
//	scanf("%d %d %d", &a, &b, &c);
//	compare(a, b, c);
//	return 0;
//}

//写一个代码打印1-100之间所有3的倍数的数字

//int print(int i)
//{
//	if (i % 3 == 0)
//	{
//		return i;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if(print(i))
//		{
//		printf("%d ", print(i));
//		}
//	}
//	return 0;
//}

//给定两个数，求两个数的最大公约数

//int greatest_common_devisor(int a, int b)
//{
//	int mid = 0;
//	int i = 0;
//	if (a < b)
//	{
//		mid = b;
//		b = a;
//		a = mid;
//	}
//	for (i = b; i >= 1; i--)
//	{
//		if (a % i == 0 && b % i == 0)
//		{
//			return i;
//		}
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int num = greatest_common_devisor(a, b);
//	printf("%d", num);
//	return 0;
//}

//判断1-100里有几个9

//int find_nine(int i)
//{
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//	if (i % 10 == 9)
//		sum++;
//	if (i / 10 == 9)
//		sum++;
//	}
//	return sum;
//}
//int main()
//{
//	int i = 0;
//	printf("9的个数为:%d\n", find_nine(i));
//	return 0;
//}

//计算1/1 - 1/2 + 1/3 - 1/4 +...+ 1/99 - 1/100的值
//分子恒为1
//分母为1-100
//符号为 分母奇数+ 分母偶数-

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 != 0)
//		{
//			sum += (1.0 / i);
//		}
//		if (i % 2 == 0)
//		{
//			sum -= (1.0 / i);
//		}
//	}
//	printf("%lf", sum);
//	return 0;
//} 

//求十个整数中的最大值

//int Max(int* p)  //接收的是arr[0]的地址
//{
//	int i = 0;
//	int Max1 = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (*p > Max1)
//		{
//			Max1 = *p;
//			(*p)++;
//		}
//	}
//	return Max1;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	scanf("%d", arr);
//	printf("%d", Max(arr));
//	return 0;
//}

//在屏幕上输出9*9乘法口诀表
//%2d两格右对齐  %-2d两格左对齐

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//实现一个函数来交换两个整数的内容

//void exchange(int* pa, int* pb)
//{
//	int mid = 0;
//	mid = *pa;
//	*pa = *pb;
//	*pb = mid;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	exchange(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}

//输入n，生成n乘法口诀表

//void tab(int n)
//{
//	int j = 0;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	tab(n);
//	return 0;
//}