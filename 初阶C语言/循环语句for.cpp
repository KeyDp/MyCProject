#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//for循环基本

int main()
{
	int i;  
	//for(初始化； 判断； 调整)
	for (i = 1; i <= 10; i++)
	{
		printf("%d", i);
		i++;
	}
	return 0;
}

//for循环内部不建议再改变变量调整
//for循环建议采用“前闭后开区间写法”，也分情况
//for循环的判断部分如果省略，则意味着条件恒成立