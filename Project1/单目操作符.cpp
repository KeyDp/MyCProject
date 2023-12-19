#define _CRT_SECURE_NO_WARNINGS 1
//单目操作符--只有一个操作数的操作符

//一、反逻辑操作符！
//C语言中0表示假
//非0表示真
#include <stdio.h>;
int main()
{
	int flag = 0;  //现在flag为假
	if (!flag)  //!--表示真假的切换  现在flag为真
	{
		printf("有\n");
	}
	int flag1 = 1;  //现在flag1为真
	if (!flag1)
	{
		printf("有\n");  //现在flag1为假
	}
	return 0;
}

//二、负值-
//三、正值+
//四、取地址&
//五、 操作数的类型长度（以字节为单位）sizeof
int a = 0;
printf("%d", sizeof(a));
printf("%d", sizeof a);  //名称类的可以去括号
printf("%d", sizeof(int));  //类型不可以去括号

int arr[10] = { 0 };
printf("%d\n", sizeof(arr));  //计算的是整个数组的大小，单位是字节
printf("%d\n", sizeof(arr[0]));  //计算的数组第一个数据的大小
printf("%d\n", sizeof(arr) / sizeof(arr[0]));  //作比等于求数组的元素个数

//六、对一个数的二进制按位取反~
//七、++
//前置++
int a = 1;
int b = 0;
b = ++a; //a=a+1然后b=a
//后置++
b = a++  //b=a然后a=a+1

//八、--
//前置--
int a = 0;
int b = 0;
b = --a  //a=a-1然后b=a
//后置--
int a = 0;
int b = 0;
b = a--  //b=a然后a=a-1

//九、直接访问操作符（解引用操作符）

//十、（类型）强制类型转换
int a = 3.14;  //这种字面浮点数3.14，编译器会默认为double类型
int a = (int)3.14;  //强取3.14的整数部分
printf("%d", a);