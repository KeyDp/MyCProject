#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//getchar/putchar��������

////int main()
////{
////	int ch;           //getchar-���뻺����-����
////	ch = getchar();  //getchar�ķ���Ϊint����,�����������
////	putchar(ch);  //putchar�𵽴�ӡ������
////	return 0;
////}

//��������/ȷ������

//int main()
//{
//	char password[20] = { 0 };
//	printf("���������룺");
//	scanf("%s", password);  //��Ϊ���鱾����ǵ�ַ�����Բ���Ҫ&
//	int ch;
//	while ((ch = getchar()) != '\n')  //whileѭ���ﲻ�ܶ������
//	{
//		;	//���ã������뻺������ʣ�ණ���ó�ȥ
//	}
//	printf("��ȷ������:��(Y / N)��");
//	int ret = getchar();
//	if (ret == 'Y')
//		printf("YES");
//	else
//		printf("NO");
//	return 0;
//}

//�����ַ���ֻ��������ַ�

//int main()
//{
//	char ch;
//	while (ch = getchar())
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

