#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;
int main()
{
	int a = 10;  //��ʼ��
	int b = 10;
	int c = 0;
	int d = 0;
	int e = 0;
	int f = 0;
	int g = 15;
	int h = 0;
	float k = 15.0;
	float i = 0;
	int j = 0;
	c = a + b;
	d = a - b;
	e = a * b;
	f = a / b;  //��������������
	h = g / a;  //����������������(����)
	i = k / a;  //��������������������Float�ͣ�
	j = g % a;  //ȡģ
	//ȡģ������������������ֻ��������
	printf("%d\n", f);
	printf("%d\n", h);
	printf("%f\n", i);  //ע��Float������%f  %.1f�ʹ���ȡһλС��  %.2f�ʹ���ȡ��λС��
	//�������˶���������ʱ��ִ�е��������������������ֻҪ��һ����������ִ�и������ĳ���
	printf("%d\n", j);
	return 0;
}