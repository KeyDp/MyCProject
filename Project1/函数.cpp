#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;
int Add(int x, int y)  //记住函数后面也不加;  //Add叫函数名  //x、y叫函数参数 //int叫返回类型
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
		int x1 = 0;
		int y1 = 0;
	scanf("%d%d", &x1, &y1);
	int sum = Add(x1, y1);
	printf("两个数的和为：%d", sum);
	return 0;
}