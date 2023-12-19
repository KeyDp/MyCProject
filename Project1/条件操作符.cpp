#define _CRT_SECURE_NO_WARNINGS 1
//Ìõ¼þ²Ù×÷·û exp1?exp2:exp3  ¹´¹´²æ£¬²æ²æ¹´
#include <stdio.h>;
int main()
{
	int a = 20;
	int b = 10;
	int c = a > b ? a : b;
	printf("%d", c);
	return 0;
}