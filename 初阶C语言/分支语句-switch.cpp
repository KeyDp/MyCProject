#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//switch���ʵ�ֶ�������
//default��ʹ��

//int main()
//{
//	int num;
//	scanf("%d", &num);
//	switch (num)	//switch(���α��ʽ)
//	{
//	case 1:		//case ���γ������ʽ
//		printf("111");
//		break;		//break��������������switch
//	case 2:
//		printf("222");
//		break;
//	case 3:
//		printf("333");
//		break;
//	case 4:
//		printf("444");
//		break;
//	case 5:
//		printf("555");
//		break;
//	case 6:
//		printf("666");
//		break;
//	case 7:
//		printf("777");
//		break;
//  default:
//      printf("ѡ�����");
//      break;		//����case��Χ��
//	}
//	return 0;
//}


//���caseƥ��ͬһ�����

int main()
{
	int num;
	scanf("%d", &num);
	switch (num)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("weekday");
		break;
	case 6:
	case 7:
		printf("weekend");
		break;
	}
	return 0;
}