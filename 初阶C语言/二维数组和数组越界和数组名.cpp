#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//二维数组可以理解为一维数组的数组
//二维数组在内存中是连续存储的
//二维数组行可以空，列不能空
 
//int main()
//{
//	int arr[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
//	printf("%d\n", arr[2][0]);  //打印数组第三行第一列
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

//C语言自身不做下标的越界检查，编译器也不一定报错，最好自己做越界检查

//通过冒泡排序将数组整理成为升序

//void Bubbling_sorting(int* arr, int sz)  //传sz是因为传参arr是首元素地址
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

//数组名能表示数组首元素地址
//但是有两个意外：
//1.sizeof(数组名)，这里的数组名表示整个数组，计算整个数组大小，单位是字节
//2.&数组，这里的数组名表示整个数组，取出的是整个数组的地址

//分别计算数组的行列数

//int main()
//{
//	int arr[3][3] = { 0 };
//	printf("%d ", sizeof(arr) / sizeof(arr[0]));
//	printf("%d ", sizeof(arr[0]) / sizeof(arr[0][0]));
//	return 0;
//}