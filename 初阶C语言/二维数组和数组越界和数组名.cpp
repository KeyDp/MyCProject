#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//��ά����������Ϊһά���������
//��ά�������ڴ����������洢��
//��ά�����п��Կգ��в��ܿ�
 
//int main()
//{
//	int arr[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
//	printf("%d\n", arr[2][0]);  //��ӡ��������е�һ��
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//C�����������±��Խ���飬������Ҳ��һ����������Լ���Խ����

//ͨ��ð���������������Ϊ����

//void Bubbling_sorting(int* arr, int sz)  //��sz����Ϊ����arr����Ԫ�ص�ַ
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int mid = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = mid;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubbling_sorting(arr, sz);
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//�������ܱ�ʾ������Ԫ�ص�ַ
//�������������⣺
//1.sizeof(������)���������������ʾ�������飬�������������С����λ���ֽ�
//2.&���飬�������������ʾ�������飬ȡ��������������ĵ�ַ

//�ֱ���������������

//int main()
//{
//	int arr[3][3] = { 0 };
//	printf("%d ", sizeof(arr) / sizeof(arr[0]));
//	printf("%d ", sizeof(arr[0]) / sizeof(arr[0][0]));
//	return 0;
//}