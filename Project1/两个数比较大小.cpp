#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;
int MAX(int x,int y)  //����������ǿ�����㶨���
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