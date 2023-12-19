#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//数组:一组相同类型元素的集合
//在C99标准之前，数组的大小只能是常量或者常量表达式
// 在C99标准之后，数组的大小可以是变量，为了支持变长数组
// []为下标引用操作符
// 数组在内存中是连续存放的
// 随着数组下标的增长，元素的地址也在有规律的递增,数组一个下标4字节
//int arr[10]这个数组的类型为int [10]
// sizeof是一个操作符，用来计算变量（类型）所占内存空间大小，不关注内存的具体内容
// strlen是一个库函数，专门求字符串长度，只针对字符串（\0前的字符）
// 
//int main()
//{
//	int arr[10] = { 1, 2, 3 };  //不完全初始化，剩下的元素默认初始化为0
//  char ch[10] = {'a', 'b', 'c'};  //不完全初始化，剩下的元素默认初始化为'\0'
//  char ch[10] = "a, b, c";  //与上边的区别为隐藏了一个\0
//	char ch[] = {'a', 'b'};  //未指定大小，根据初始化内容确定
// return 0;
//}

//将两个数组内容交换

//void exchange(int* n, int* k, int len)
//{
//	int i = 0;
//	for (i = 0; i <= len; i++)
//	{
//		int tmp = *(n + i);
//		*(n + i) = *(k + i);
//		*(k + i) = tmp;
//	}
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", *(n + i));
//	}
//	printf("\n");
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", *(k + i));
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 5, 4, 3, 2, 1 };
//	int len = sizeof(arr1) / sizeof(arr1[0]);
//	exchange(arr1, arr2, len);
//	return 0;
//}