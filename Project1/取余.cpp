#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int sum1 = a / b;
	int sum2 = a % b;
	printf("%d %d", sum1, sum2);
	return 0;
}