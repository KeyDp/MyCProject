#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int Add(int x, int y);  这就是函数的声明

//int Add(int x, int y)   这就是函数的定义
//{
//	return x + y;
//}

//函数的声明和定义一般在工作中会被分别分配到.h文件和.c文件里，方便协作和保护

//函数execl(（v1,v2),(v3,v4),v5,v6);中实参有四个，其中两个逗号表达式

//函数设计应该追求高内聚低耦合（功能尽量单一），尽量少用全局变量，参数不宜多

//strcpy--拷贝字符串

//#include <string.h>
//int main()
//{
//char arr1[20] = { 0 };
//char arr2[] = "hello world";
//strcpy(arr1, arr2);
//printf("%s\n", arr1);
//}

//memset--内存设置

//#include <string.h>  //调用memset函数
//int main()
//{
//	char arr[20] = "hello world";
//	memset(arr, 'x', 5);  //数组名代表数组首元素地址
//	memset(arr + 6, 'y', 5);
//	printf("%s", arr);
//	return 0;
//}

//与库函数相比，更重要的是自定义函数

//ret_type fun_name(para1, *)
//{
//	statement; //语句项
//}
//ter_type -- 返回类型
//fun_name -- 函数名
//para1 -- 函数参数

//输入两个数，输出较大值

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

//写一个函数可以交换两个整形变量的内容

//错误版本
//void exchange(int x, int y)  //这里的x,y是形式参数
//{                            //形参改变，传实参
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
//	printf("%d %d", a, b);  //这里的a,b是实际参数
//	return 0;
//}
//形参实参两者地址不同，无法代替

//正确版本
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
//	exchange(&a, &b);  //实参改变，传实参地址
//	printf("%d %d", a, b);
//	return 0;
//}

//真实传递给函数的参数叫实参，实参可以是变量/常量/表达式/函数
//函数名后括号中的变量叫形参，形参只有在被函数调用的时候才实例化
//形参在调用完后自动销毁，只要函数内有效

//写一个函数可以判断一个数是不是素数(100-200之内)
//素数是指大于1的自然数且只能被1和它本身整除的数

//#include <math.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 101; i <= 199; i += 2)  //素数大于1且不可能为偶数
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

//写一个函数可以判断一个年份是不是闰年(1000-2000)
//闰年能被4整除，不能被100整除，能被400整除

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

//写一个函数，实现一个整形有序数组的二分查找

//错误版本，错误原因：数组传参传的是数组首元素地址，而非整个数组，即为一个指针
//本例只表达函数的使用

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
//		printf("找到了，下标为：%d\n", binary_search());
//	}
//	if(binary_search(arr[], key, sz) == -1)
//	{
//	printf("没找到\n");
//	}
//	return 0;
//}

//C99标准引入了bool类型  例子：用bool类型函数实现判断素数

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

//写一个函数，每调用一次，就会将num的值增加1

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


