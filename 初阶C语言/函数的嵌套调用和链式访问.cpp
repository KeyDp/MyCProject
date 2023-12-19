#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//函数的嵌套调用(函数可以嵌套调用，不能嵌套定义)

//void printf()
//{
//	printf("hehe\n");
//}
//void three_printf()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf();
//	}
//}
//int main()
//{
//	three_printf();
//	return 0;
//}

//函数的链式访问

//普通形式:

//#include <string.h>
//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d", len);
//	return 0;
//}

//链式访问:

//#include <string.h>
//int main()
//{
//	printf("%d", strlen("abcdef"));
//	return 0;
//}

//printf的返回值为字符数

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}

