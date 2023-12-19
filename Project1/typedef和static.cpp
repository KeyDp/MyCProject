#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;

/*  //Typedef--变量重命名
//typedef unsigned int uint;  //用法
int main()
{
	unsigned int num = 0;  //无符号整形-unsigned int
	//uint num=0;  //可替换为该行
	return 0;
}


  //Static--静态的  用途：1.修饰局部变量-称为静态局部变量  
  //当static修饰局部变量时，局部变量出了作用域，不销毁。本质上，static修饰局部变量的
  // 时候，改变了变量的存储位置。  影响了变量的生命周期，和程序的生命周期一样。
  //                      2.修饰全局变量-称为静态全局变量
  //                      3.修饰函数-称为静态函数
//修饰局部变量的例子：
void test()  //不需要任何返回
{
	static int a = 1;  //去掉static和留下static会得到两个结果
	a++;
	printf("%d\n", a);
}
int main()
{
	int i = 0;
	while (i < 10)
	{
		test();
			i++;
	}
	return 0;
}
      
//static修饰全局变量的例子
int qj = 0;  //qj为全局变量，在某一个源文件中
//在另一个源文件中
extern qj;  //声明外部符号
int main()  //在另一个源文件中想引用qj,则需要声明
{
	printf("%d\n", qj);
	return 0;
}
//最终可以引用，因为全局变量具有外部链接属性
//但是如果定义全局变量的时候在类型前面加上static，则该全局变量的外部链接属性变成内部
//链接属性，其他源文件就不能再使用这个全局变量了。


//static修饰函数的例子
//在某一个源文件中，有
int Add(int x, int y)
{
	return x + y;
}
//在另一个源文件中
extern int Add(int x, int y);  //声明引用这个函数
int main()
{
	int a = 1;
	int b = 2;
	int c = Add(a, b);  //想引用则需要声明
	printf("%d", c);
	return 0;
}
//函数是具有外部链接属性的
//但是如果在函数前加上static,则函数的外部链接属性变成内部链接属性，则其他源文件中无法
//再引用 

//register--寄存器
int main()
{
	register int num = 3;  //建议3存放在寄存器中
	return 0;
}
*/