//C������ʵ��ѭ����������䣺while/do...whlie/for


#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;
int main()
{
	int year = 0;
	while (year < 100)  //�ǵ�while�����ӣ�
	{
		printf("�మ������%d\n", year);
		year++;
	}
	if (year >= 100)  //�ǵ�if������;
	{
		printf("�ٰ�һ����\n");
	}
	else
	{
		printf("��������\n");
	}
	return 0;
}