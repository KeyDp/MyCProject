#define _CRT_SECURE_NO_WARNINGS 1
//���������� exp1?exp2:exp3  �����棬��湴
#include <stdio.h>;
int main()
{
	int a = 20;
	int b = 10;
	int c = a > b ? a : b;
	printf("%d", c);
	return 0;
}