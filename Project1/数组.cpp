#define _CRT_SECURE_NO_WARNINGS 1
//���飺һ����ͬ����Ԫ�صļ���
//�����ÿ��Ԫ�ض���һ���±꣬�±��Ǵ�0��ʼ�ģ��������ͨ���±�������
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