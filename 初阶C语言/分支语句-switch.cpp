#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//switch语句实现多语句控制
//default的使用

//int main()
//{
//	int num;
//	scanf("%d", &num);
//	switch (num)	//switch(整形表达式)
//	{
//	case 1:		//case 整形常量表达式
//		printf("111");
//		break;		//break的作用是跳出该switch
//	case 2:
//		printf("222");
//		break;
//	case 3:
//		printf("333");
//		break;
//	case 4:
//		printf("444");
//		break;
//	case 5:
//		printf("555");
//		break;
//	case 6:
//		printf("666");
//		break;
//	case 7:
//		printf("777");
//		break;
//  default:
//      printf("选择错误");
//      break;		//不在case范围内
//	}
//	return 0;
//}


//多个case匹配同一个语句

int main()
{
	int num;
	scanf("%d", &num);
	switch (num)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("weekday");
		break;
	case 6:
	case 7:
		printf("weekend");
		break;
	}
	return 0;
}