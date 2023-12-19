#define _CRT_SECURE_NO_WARNINGS 1
//数组：一组相同类型元素的集合
//数组的每个元素都有一个下标，下标是从0开始的，数组可以通过下标来访问
#include <stdio.h>;
int main()
{
	int* N =0;
	int A = 0;
	int* G =0;
	scanf("%s%d%s", &N, &A, &G);
	printf("Name    Age    Gender\n");
	printf("---------------------\n");
	printf("%s      %d     %s\n",N,A,G);
	return 0;
}