#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;
//#define num 100  //define�����ʶ������
//int main()
//{
//	printf("%d", num);
//	return 0;
//}

#define Add(x,y) ((x)+(y))  //define�����
int main()
{
	int a = 10;
	int b = 5;
	int c = Add(a, b);
	printf("%d", c);
	return 0;
}
