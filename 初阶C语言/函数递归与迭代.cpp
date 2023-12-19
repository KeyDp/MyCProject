#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//编译器提示：stack overflow是指栈溢出，一般由死递归产生

//函数递归
//程序调用自身的编程技巧称为递归
//主要思考方式在于：大事化小
//只需要少量的程序可描述出解题过程所需要的多重重复计算，大大减少代码量
//递归的两个必要条件：
//1.存在限制条件，当满足这个条件时，递归便不再继续
//2、每次递归调用之后越来越接近这个限制条件
//递归和迭代怎么方便怎么用，有时候也会很麻烦
//递归层次太深也会栈溢出
//解决方法：递归改成非递归；使用static对象替代nonstatic对象

//例子：输入一个无符号整数，将它按照顺序每一位单独打印	

//void printf(unsigned int n)
//{
//	if (n > 9)
//	{
//		printf(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);  //%d是打印有符号的整数（有正负数）  %u是指无符号的整数
//	printf(num);
//	return 0;
//}

//编写函数不允许创建临时变量，求字符串的长度

//int my_strlen(char* str)  //未创建临时变量
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//  //char *p = "abcdef";
//	char arr[] = "abcde";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}

//int my_strlen(char str[])  //用数组形式去接收
//int my_strlen(char* str)  //用指针形式去接收
//{
//	int count = 0;       //用了一个临时变量
//	while (*str != '\0')
//	{
//		count++;
//		str++;  //找下一个字符，一个字符占用一字节
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abc";  //a b c \0
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}                       

//一个字符是一个字节大小

//int main()     
//{
//	char i = '0';
//	printf("%d", sizeof(i));  
//	return 0;

//用函数求n的阶乘

//递归的方式：

//int fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * fac(n - 1);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = fac(n);
//	printf("%d\n", sum);
//	return 0;
//}

//迭代的方式：

//int fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = fac(n);
//	printf("%d", sum);
//	return 0;
//}

//字符串逆序(strlen可以在函数里)(sizeof不能在函数里)

//#include <string.h>
// void reverse(char arr[])
//{
//	 int left = 0;
//	 int length = strlen(arr);
//	 int right = length - 1;
//	 while (left < right)
//	 {
//		 char mid = arr[right];
//		 arr[right] = arr[left];
//		 arr[left] = mid;
//		 left++;
//		 right--;
//	 }
//	 printf("%s", arr);
//}
//int main()
//{
//	char arr[] = "abcdef";  //[a, b, c, d, e, f, \0]
//	int length = strlen(arr);
//	int right = length - 1;
//	reverse(arr);
//	return 0;
//}

//逆序的方法(自己创建my_strlen)

//int my_strlen(char arr[])
//{
//	int count = 0;
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		count++;
//		i++;
//	}
//	return count;
//}
//
//void reverse(char* str)
//{
//	char tmp = *str;
//	int len = my_strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if(my_strlen(str + 1) >= 2)
//	{
//		reverse(str + 1);
//	}
//	*(str + len - 1) = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse(arr);
//	printf("%s", arr);
//	return 0;
//}      

//计算一个数的每一位的和

//int Digit_Sum(unsigned int n)
//{
//	while (n != 0)
//	{
//		int x = n % 10;
//		return x + Digit_Sum(n / 10);
//	}
//	return 0;
//}
//
//int main()
//{
//	unsigned int input = 0;
//	scanf("%d", &input);
//	int ret = Digit_Sum(input);
//	printf("%d", ret);
//	return 0;
//}

//递归实现n的k次方

//int k_power(int n, int k)
//{
//	if (k > 0)
//		return n * k_power(n, k - 1);
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	int ret = k_power(n, k);
//	printf("%d", ret);
//	return 0;
//}