//C语言中是没有字符串类型的
//双引号引起来的一串字符称为字符串字面值，简称字符串  如："abcdef"

//#include <stdio.h>;
//int main()
//{
//	char arr1[] = "abcdef\n";  //f后面隐藏了一个\0--字符串结束标志
//	char arr2[] = { 'a','b','c','d','e','f' };  //没有\0，会一直在内存里找到\0
//		  
//	printf("%s", arr1);  //%s是用来打印字符串的
//	printf("%s", arr2);  
//	return 0;
//}

//通过运行结果可知，字符串是隐藏了\0的
//字符串结束标志很重要，如果没有，程序就会一直在内存里寻找直到找到下一个\0

#include <stdio.h>;
#include <string.h>;  //头文件包含string length
int main()
{
	char arr1[] = { 'a','b','c','d','e','f' };
	char arr2[] = { "abcdef" };
	int len = 0;
	printf("%d\n",strlen(arr1));
	printf("%d\n", strlen(arr2));
	return 0;
}