#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//while打印1~10

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//while循环中continue和break的用法
//break--永久的终止循环
//continue--终止本次循环后面的代码，直接去判断下一次循环

//输出  *  

int main()
{
	char ch;
	scanf("%c", &ch);
	int i = 0;  //初始化
	while (i <= 3)  //判断
	{
		i++;  //调整
		if (i == 3)
		{
			printf("%c", ch);
			continue;
		}
		printf(" ");
		if (i == 4)
			break;
	}
	return 0;
}