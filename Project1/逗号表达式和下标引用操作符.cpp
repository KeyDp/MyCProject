#define _CRT_SECURE_NO_WARNINGS 1
//逗号表达式就是逗号隔开的一串表达式
//逗号表达式的特点是：从左向右依次计算，整个表达式的结果是最后一个表达式的结果
#include <stdio.h>;
int main()
{
	int a = 1;
	int b = 5;
	int c = 8;
	int d = 9;
	int e = (b = c - a, d = c - b, e = d - 3);
	printf("%d", e);
	return 0;
}

//下标引用操作符
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	arr[3] = 20;  //将数组第四位赋值为20 []就是下标引用操作符
	return 0;     //arr和3就是[]的操作数
}





