#define _CRT_SECURE_NO_WARNINGS 1  //Ϊ�˽��scanf����ȫ������
#include <stdio.h>;
int main()
{
	int num1=0;
	int num2=0;
	int sum=0;  //����ֵ��Ҫ���ڳ������ǰ��
	scanf("%d%d", &num1, &num2);  //scanf_s������ȷ��  //&��ȡ��ַ����
	sum = num1 + num2;
	printf("sum=%d\n", sum);
	return 0;
} 


//scanf��C�����ṩ�ģ�scanf_s��VS�ṩ�ģ�Ϊ�˴����ͨ���ԣ����ǲ�ѡ��VS�ĺ������߱���
//��#include��ϵͳ�ṩ�Ľ�������Ϳ���