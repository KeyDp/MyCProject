#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//getchar/putchar基本特性

////int main()
////{
////	int ch;           //getchar-输入缓冲区-键盘
////	ch = getchar();  //getchar的返回为int类型,起到输入的作用
////	putchar(ch);  //putchar起到打印的作用
////	return 0;
////}

//输入密码/确认密码

//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码：");
//	scanf("%s", password);  //因为数组本身就是地址，所以不需要&
//	int ch;
//	while ((ch = getchar()) != '\n')  //while循环里不能定义变量
//	{
//		;	//作用：把输入缓存区的剩余东西拿出去
//	}
//	printf("请确认密码:：(Y / N)：");
//	int ret = getchar();
//	if (ret == 'Y')
//		printf("YES");
//	else
//		printf("NO");
//	return 0;
//}

//输入字符，只输出数字字符

//int main()
//{
//	char ch;
//	while (ch = getchar())
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

