#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int Add(int x, int y);  ����Ǻ���������

//int Add(int x, int y)   ����Ǻ����Ķ���
//{
//	return x + y;
//}

//�����������Ͷ���һ���ڹ����лᱻ�ֱ���䵽.h�ļ���.c�ļ������Э���ͱ���

//����execl(��v1,v2),(v3,v4),v5,v6);��ʵ�����ĸ��������������ű��ʽ

//�������Ӧ��׷����ھ۵���ϣ����ܾ�����һ������������ȫ�ֱ������������˶�

//strcpy--�����ַ���

//#include <string.h>
//int main()
//{
//char arr1[20] = { 0 };
//char arr2[] = "hello world";
//strcpy(arr1, arr2);
//printf("%s\n", arr1);
//}

//memset--�ڴ�����

//#include <string.h>  //����memset����
//int main()
//{
//	char arr[20] = "hello world";
//	memset(arr, 'x', 5);  //����������������Ԫ�ص�ַ
//	memset(arr + 6, 'y', 5);
//	printf("%s", arr);
//	return 0;
//}

//��⺯����ȣ�����Ҫ�����Զ��庯��

//ret_type fun_name(para1, *)
//{
//	statement; //�����
//}
//ter_type -- ��������
//fun_name -- ������
//para1 -- ��������

//����������������ϴ�ֵ

//int get_max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = get_max(a, b);
//	printf("%d", m);
//	return 0;
//}

//дһ���������Խ����������α���������

//����汾
//void exchange(int x, int y)  //�����x,y����ʽ����
//{                            //�βθı䣬��ʵ��
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);  
//	exchange(a, b);
//	printf("%d %d", a, b);  //�����a,b��ʵ�ʲ���
//	return 0;
//}
//�β�ʵ�����ߵ�ַ��ͬ���޷�����

//��ȷ�汾
//void exchange(int* px,int* py)
//{
//	int z = *px;
//	*px = *py;
//	*py = z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	exchange(&a, &b);  //ʵ�θı䣬��ʵ�ε�ַ
//	printf("%d %d", a, b);
//	return 0;
//}

//��ʵ���ݸ������Ĳ�����ʵ�Σ�ʵ�ο����Ǳ���/����/���ʽ/����
//�������������еı������βΣ��β�ֻ���ڱ��������õ�ʱ���ʵ����
//�β��ڵ�������Զ����٣�ֻҪ��������Ч

//дһ�����������ж�һ�����ǲ�������(100-200֮��)
//������ָ����1����Ȼ����ֻ�ܱ�1����������������

//#include <math.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 101; i <= 199; i += 2)  //��������1�Ҳ�����Ϊż��
//	{
//		int flag = 1;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if(flag == 1)
//		{ 
//		printf("%d ", i);
//		count++;
//		}
//	}
//	printf("\n%d", count);
//	return 0;
//}

//#include <math.h>
//int is_prime(int x)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(x); j++)
//	{
//		if (x % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 3; i <= 99; i += 2)
//	{
//		is_prime(i);
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d", count);
//	return 0;
//}

//#include <math.h>
//int is_prime(int x)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(x); j++)
//	{
//		if (x % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		is_prime(i);
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//дһ�����������ж�һ������ǲ�������(1000-2000)
//�����ܱ�4���������ܱ�100�������ܱ�400����

//int is_leap_year(int x)
//{
//	if (( x % 4 == 0 ) && ( x % 100 != 0 ) || ( x % 400 == 0 ))
//		return 1;
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		is_leap_year(year);
//		if (is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//дһ��������ʵ��һ��������������Ķ��ֲ���

//����汾������ԭ�����鴫�δ�����������Ԫ�ص�ַ�������������飬��Ϊһ��ָ��
//����ֻ��ﺯ����ʹ��

//int binary_search(int x, int y, int z)
//{
//	int left = 0;
//	int right = z;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (x[mid] < y)
//		{
//			right = mid - 1;
//		}
//		else if (x[mid] > y)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	binary_search(arr[], key, sz);
//	if (binary_search(arr[], key, sz) + 1)
//	{
//		printf("�ҵ��ˣ��±�Ϊ��%d\n", binary_search());
//	}
//	if(binary_search(arr[], key, sz) == -1)
//	{
//	printf("û�ҵ�\n");
//	}
//	return 0;
//}

//C99��׼������bool����  ���ӣ���bool���ͺ���ʵ���ж�����

//#include <math.h>
//#include <stdbool.h>
//bool is_prime(int x)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(x); j++)
//	{
//		if (x % j == 0)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//	int main()
//	{
//		int i = 0;
//		for (i = 100; i <= 200; i++)
//		{
//			if (is_prime(i))
//			{
//				printf("%d ", i);
//			}
//		}
//		return 0;
//	}

//дһ��������ÿ����һ�Σ��ͻὫnum��ֵ����1

void add(int* x)
{
	(*x)++;
}
int main()
{
	int num = 0;
	add(&num);
	printf("%d", num);
	return 0;
}


