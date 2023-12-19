#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;
int MAX(int x,int y)  //这个函数名是可以随便定义的
{
	if (x > y)
		return x;
	else
		return y;
 }
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	int sum = MAX(a, b);
	printf("%d", sum);
	return 0;
}