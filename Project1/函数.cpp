#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;
int Add(int x, int y)  //��ס��������Ҳ����;  //Add�к�����  //x��y�к������� //int�з�������
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
		int x1 = 0;
		int y1 = 0;
	scanf("%d%d", &x1, &y1);
	int sum = Add(x1, y1);
	printf("�������ĺ�Ϊ��%d", sum);
	return 0;
}