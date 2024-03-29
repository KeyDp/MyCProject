#include <stdio.h>;
int a = 100;  //全局变量
int main()
{
	int a = 10;//局部变量
	printf("%d", a);
	return 0;
}

//当全局变量和局部变量相同时，局部变量优先
//所以最好局部变量和全局变量的名字不一样，以免出现bug
//局部变量的作用域就在其所在代码块{}里
//全局变量的作用域是整个工程，但是想在外部源文件中引用外部符号需要声明：通过extern
//局部变量的生命周期：进入作用域开始，出作用域结束
//全局变量：整个程序的生命周期