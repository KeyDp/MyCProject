#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//���������Ӵ�С���

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

//дһ�������ӡ1-100֮������3�ı���������

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

//�������������������������Լ��

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

//�ж�1-100���м���9

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
//	printf("9�ĸ���Ϊ:%d\n", find_nine(i));
//	return 0;
//}

//����1/1 - 1/2 + 1/3 - 1/4 +...+ 1/99 - 1/100��ֵ
//���Ӻ�Ϊ1
//��ĸΪ1-100
//����Ϊ ��ĸ����+ ��ĸż��-

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

//��ʮ�������е����ֵ

//int Max(int* p)  //���յ���arr[0]�ĵ�ַ
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

//����Ļ�����9*9�˷��ھ���
//%2d�����Ҷ���  %-2d���������

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

//ʵ��һ��������������������������

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

//����n������n�˷��ھ���

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