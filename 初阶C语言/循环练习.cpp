#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//����n�Ľ׳�--������������

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int factoral = 1;
//	printf("n��ֵΪ��");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		factoral *= i;
//	}
//	printf("%d�Ľ׳�Ϊ��%d", n, factoral);
//	return 0;
//}

//����1��~10���ĺ�

//int main()
//{
//	int i = 0;
//	int factoral = 1;
//	int j = 1;
//	int total = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			factoral *= j;
//		}
//		total += factoral;
//	}
//	printf("1!~10!�ĺ�Ϊ��%d", total);
//	return 0;
//}

//��һ�����������в��Ҿ����ĳ������

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int n = 6;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz - 1; i++)
//	{
//		if (n == arr[i])
//		{ 
//			printf("�ҵ��ˣ��±�Ϊ%d", i);
//			break;
//		}
//	}	
//	if (i == sz - 1)
//			printf("�Ҳ���");
//	return 0;
//}

//��һ�����������в��Ҿ����ĳ������n�����ֲ��ң�

//int main()
//{
//	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	int n = 0;
//	int left = 0;  //�±�
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;  //�±�
//	scanf("%d", &n);
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (mid < n)
//		{
//			left = mid + 1;
//		}
//		else if (mid > n)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±�Ϊ%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("û�ҵ�");
//	}
//	return 0;
//}

//��д���룬��ʾ����ַ��������ƶ������м���

//#include <string.h>   //������strlen����
//#include <windows.h>  //������Sleep����
//#include <stdlib.h>   //������system("cls")����
//int main()
//{
//	char arr1[] = "i love leijieming!!!!";
//	char arr2[] = "                     ";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);  //ע���Ǵ�дS
//		system("cls"); //�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//��д����ʵ�֣�ģ���û���¼����������ֻ�ܵ�¼���Ρ�

//#include <string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = "abcdef";
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺");
//		scanf("%s", password);
//		if (strcmp(password, "abcdef") == 0)
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	while (i == 3)
//	{
//		printf("�����������������˳�����\n");
//		break;
//	}
//	return 0;
//}

//��������Ϸ

//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("****************\n");
//	printf("*****1.play*****\n");
//	printf("*****0.exit*****\n");
//	printf("****************\n");
//}
//
//void game()          
//{                                    //time�����ķ���ֵΪtime_t����
//	int guess = 0;                     //srand()�Ĳ���Ҫ��Ϊunsigned int����
//	//srand((unsigned int)time(NULL));//time�����Ĳ���Ҫ����ָ������ //NULLΪ��ָ��
//	int ret = rand() % 100 + 1;  //����һ�������  
//	//rand�����ķ���ֵΪ���������--��ΧΪ0-RAND_MAX()����0-32767
//	while(1)
//	{ 
//	printf("������֣�");
//	scanf("%d", &guess);
//	if (guess < ret)
//	{
//		printf("��С��\n");  //break���ֻ��ѭ���򿪹�����
//	}
//	else if (guess > ret)
//	{
//		printf("�´���\n");
//	}
//	else
//	{
//		printf("��ϲ���¶��ˣ�\n");
//		printf("\n");
//		break;
//	}
//}       
//}                 
//int main()
//{
//	//RAND_MAX;  //ȥת�����壬Ϊ0x7fff,0x����16λ������
//	int input = 0;
//	srand((unsigned int)time(NULL)); //�ŵ�randǰ����������һ�ξͿ���
//	do
//	{
//	menu();
//	printf("��ѡ��");
//	scanf("%d", &input);
//	printf("\n");
//	switch (input)
//	{
//	case 1:
//	{
//		game();
//		break;
//	}
//	case 0:
//	{
//		printf("�˳���Ϸ\n");
//		break;
//	}
//	default:
//	{
//		printf("�������������ѡ��\n");
//		break;
//	}
//	}
//	} while (input);
//	return 0;
//}

//rand()����ÿ�ε���ǰ�����ѯ�Ƿ���ù�srand(seed),�Ƿ��seed�趨��һ��ֵ,�����,
//��ô�����Զ�����srand(seed)����ʼ��������ʼֵ�����û���������������,rand()����
//�ڵ���ʱ,�Զ�������������Ϊ1�����������ͬ,ÿ�β����������Ҳ����ͬ��

//goto���

//������ʹ�ã����ײ���bug
//�ʺ����Ƕ�׵���䣬����ֱ����������breakʡ��һЩ

//�ػ�����
//1.������һ�����ڹػ�
//2.����666����ֹ�ػ�

//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown - s - t 60");  //�ػ����룬-s��ʾ�ػ���-t��ʾʱ��
//again:
//	printf("���棺���ĵ��Խ���60���ڹػ�������666����������룺\n");
//	scanf("%s", input);
//	if (strcmp(input, "666") == 0)
//	{
//		system("shutdown -a");
//		printf("��ϲ����������\n");
//	}
//	else
//	{
//		printf("�����������������\n");
//		goto again;
//	}
//	return 0;
//}
