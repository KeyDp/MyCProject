#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//while��ӡ1~10

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//whileѭ����continue��break���÷�
//break--���õ���ֹѭ��
//continue--��ֹ����ѭ������Ĵ��룬ֱ��ȥ�ж���һ��ѭ��

//���  *  

int main()
{
	char ch;
	scanf("%c", &ch);
	int i = 0;  //��ʼ��
	while (i <= 3)  //�ж�
	{
		i++;  //����
		if (i == 3)
		{
			printf("%c", ch);
			continue;
		}
		printf(" ");
		if (i == 4)
			break;
	}
	return 0;
}