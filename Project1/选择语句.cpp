//C�����ǽṹ���ĳ���������ԣ�˳��ṹ/ѭ���ṹ/ѡ��ṹ
//C����ʵ��ѡ���������䣺if else/switch

//
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>;
//int main()
//{
//	int input = 0;
//	printf("���ӽ����������Ԥ��\n");
//	printf("�����루1/0��������Ԥ��\n�����룺");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("���泬���޵�ͨ�������˽���");
//	}
//	else
//	{
//		printf("��ͨ��");
//	}
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;
int main()
{
	int x = 0;
	int y = 0;
	scanf("%d", &x);
	if (x < 0)
		y = 1;
	else if (x == 0)
		y = 0;
	else
		y = -1;
	printf("%d\n", y);
	return 0;
}