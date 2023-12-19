#define _CRT_SECURE_NO_WARNINGS 1  //为了解决scanf不安全的问题
#include <stdio.h>;
int main()
{
	int num1=0;
	int num2=0;
	int sum=0;  //定义值都要放在程序块最前面
	scanf("%d%d", &num1, &num2);  //scanf_s才是正确的  //&是取地址符号
	sum = num1 + num2;
	printf("sum=%d\n", sum);
	return 0;
} 


//scanf是C语言提供的，scanf_s是VS提供的，为了代码的通用性，我们不选择VS的函数或者变量
//用#include＋系统提供的解决方案就可以