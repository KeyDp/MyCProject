#define _CRT_SECURE_NO_WARNINGS 1
//���ű��ʽ���Ƕ��Ÿ�����һ�����ʽ
//���ű��ʽ���ص��ǣ������������μ��㣬�������ʽ�Ľ�������һ�����ʽ�Ľ��
#include <stdio.h>;
int main()
{
	int a = 1;
	int b = 5;
	int c = 8;
	int d = 9;
	int e = (b = c - a, d = c - b, e = d - 3);
	printf("%d", e);
	return 0;
}

//�±����ò�����
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	arr[3] = 20;  //���������λ��ֵΪ20 []�����±����ò�����
	return 0;     //arr��3����[]�Ĳ�����
}





