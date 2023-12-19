#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;
int main()
{
	int a = 10;  //初始化
	int b = 10;
	int c = 0;
	int d = 0;
	int e = 0;
	int f = 0;
	int g = 15;
	int h = 0;
	float k = 15.0;
	float i = 0;
	int j = 0;
	c = a + b;
	d = a - b;
	e = a * b;
	f = a / b;  //整数除法出整数
	h = g / a;  //整数除法出浮点数(整型)
	i = k / a;  //浮点数除法出浮点数（Float型）
	j = g % a;  //取模
	//取模操作符的两个操作数只能是整数
	printf("%d\n", f);
	printf("%d\n", h);
	printf("%f\n", i);  //注意Float类型用%f  %.1f就代表取一位小数  %.2f就代表取两位小数
	//除号两端都是整数的时候，执行的是整数除法，如果两端只要有一个浮点数就执行浮点数的除法
	printf("%d\n", j);
	return 0;
}