#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;
//关系操作符
//> < >= <= !=(用于测试不相等) ==(用于测试相等)
int main()
{
	int a = 10;
	if (a = 3)  //此操作为赋值，if为真输出hehe
	{
		printf("hehe");
	}
	return 0;
}

int main()
{
	int a = 10;
	if (a == 3)  //此操作为测试是否相等，不相等则if为假，不输出hehe
	{
		printf("hehe");
	}
	return 0;
}

//逻辑操作符
//&&逻辑与 - 并且
//||逻辑或 - 或者
int main()
{
	int a = 0;
	int b = 1;
	if (a && b)  //if语句中，如果实数为0则为假，为非0则为真
	{
		printf("hehe");  //逻辑与要求两者同时为真，则此处不输出
	}
	return 0;
}

int main()
{
	int a = 1;
	int b = 1;
	if (a || b)
	{
		printf("hehe");  //逻辑或要求二者有一为真，则此处输出
	}
	return 0;
}