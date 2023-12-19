#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;
//#define num 100  //define定义标识符常量
//int main()
//{
//	printf("%d", num);
//	return 0;
//}

#define Add(x,y) ((x)+(y))  //define定义宏
int main()
{
	int a = 10;
	int b = 5;
	int c = Add(a, b);
	printf("%d", c);
	return 0;
}
