#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;
//��ϵ������
//> < >= <= !=(���ڲ��Բ����) ==(���ڲ������)
int main()
{
	int a = 10;
	if (a = 3)  //�˲���Ϊ��ֵ��ifΪ�����hehe
	{
		printf("hehe");
	}
	return 0;
}

int main()
{
	int a = 10;
	if (a == 3)  //�˲���Ϊ�����Ƿ���ȣ��������ifΪ�٣������hehe
	{
		printf("hehe");
	}
	return 0;
}

//�߼�������
//&&�߼��� - ����
//||�߼��� - ����
int main()
{
	int a = 0;
	int b = 1;
	if (a && b)  //if����У����ʵ��Ϊ0��Ϊ�٣�Ϊ��0��Ϊ��
	{
		printf("hehe");  //�߼���Ҫ������ͬʱΪ�棬��˴������
	}
	return 0;
}

int main()
{
	int a = 1;
	int b = 1;
	if (a || b)
	{
		printf("hehe");  //�߼���Ҫ�������һΪ�棬��˴����
	}
	return 0;
}