#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//判断一个数是否为奇数
//int main()
//{
//	int num;
//	scanf("%d", &num);
//	if (num % 2 != 0)
//		printf("YES");
//	else
//		printf("NO");
//	return 0;
//}

//输出0-100间的奇数
int main()
{
	int arr[100];
	int i = 1;
	while (i <= 100)
	{
		scanf("%d", &arr[i]);
		if (arr[i] % 2 != 0)
			printf("%d\n", arr[i]);
	}
	return 0;
}


//C语言是结构化的程序设计语言，生活中所有事情都可以抽象为三种结构：顺序结构，选择结构，
//循环结构。
//控制语句用来控制程序的各种结构方式，他们由特定的语句定义符组成，C语言有九种控制语句。
//if (如果)语句if(为真)，则内容执行；if(为假)，则内容不执行。
//else(还)语句与if语句同时出现; if (为假),则内容执行；if(为真)，则内容不执行。
//if后面跟单条语句可以省略代码块{}，若为多条语句，则需要代码块{}。
//else和离它最近的if匹配，最好匹配的要对齐。-就近原则


