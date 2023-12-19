#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//do 
//     循环语句;
//while(表达式);

//输出1~10
int main()
{
	int i = 1;
	do
	{
		printf("%d ", i);
		i++;
	} 
	while (i <= 10);
	return 0;
}