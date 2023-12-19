#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//计算n的阶乘--不溢出的情况下

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int factoral = 1;
//	printf("n的值为：");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		factoral *= i;
//	}
//	printf("%d的阶乘为：%d", n, factoral);
//	return 0;
//}

//计算1！~10！的和

//int main()
//{
//	int i = 0;
//	int factoral = 1;
//	int j = 1;
//	int total = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			factoral *= j;
//		}
//		total += factoral;
//	}
//	printf("1!~10!的和为：%d", total);
//	return 0;
//}

//在一个有序数组中查找具体的某个数字

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int n = 6;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz - 1; i++)
//	{
//		if (n == arr[i])
//		{ 
//			printf("找到了，下标为%d", i);
//			break;
//		}
//	}	
//	if (i == sz - 1)
//			printf("找不到");
//	return 0;
//}

//在一个有序数组中查找具体的某个数字n（二分查找）

//int main()
//{
//	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	int n = 0;
//	int left = 0;  //下标
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;  //下标
//	scanf("%d", &n);
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (mid < n)
//		{
//			left = mid + 1;
//		}
//		else if (mid > n)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标为%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("没找到");
//	}
//	return 0;
//}

//编写代码，演示多个字符从两端移动，向中间汇聚

//#include <string.h>   //调用了strlen函数
//#include <windows.h>  //调用了Sleep函数
//#include <stdlib.h>   //调用了system("cls")函数
//int main()
//{
//	char arr1[] = "i love leijieming!!!!";
//	char arr2[] = "                     ";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);  //注意是大写S
//		system("cls"); //清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//编写代码实现，模拟用户登录场景，并且只能登录三次。

//#include <string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = "abcdef";
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", password);
//		if (strcmp(password, "abcdef") == 0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	while (i == 3)
//	{
//		printf("三次密码均输入错误，退出程序\n");
//		break;
//	}
//	return 0;
//}

//猜数字游戏

//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("****************\n");
//	printf("*****1.play*****\n");
//	printf("*****0.exit*****\n");
//	printf("****************\n");
//}
//
//void game()          
//{                                    //time函数的返回值为time_t类型
//	int guess = 0;                     //srand()的参数要求为unsigned int类型
//	//srand((unsigned int)time(NULL));//time函数的参数要求是指针类型 //NULL为空指针
//	int ret = rand() % 100 + 1;  //生成一个随机数  
//	//rand函数的返回值为整形随机数--范围为0-RAND_MAX()，即0-32767
//	while(1)
//	{ 
//	printf("请猜数字：");
//	scanf("%d", &guess);
//	if (guess < ret)
//	{
//		printf("猜小了\n");  //break语句只在循环或开关中用
//	}
//	else if (guess > ret)
//	{
//		printf("猜大了\n");
//	}
//	else
//	{
//		printf("恭喜，猜对了！\n");
//		printf("\n");
//		break;
//	}
//}       
//}                 
//int main()
//{
//	//RAND_MAX;  //去转到定义，为0x7fff,0x代表16位进制数
//	int input = 0;
//	srand((unsigned int)time(NULL)); //放到rand前，该题生成一次就可以
//	do
//	{
//	menu();
//	printf("请选择：");
//	scanf("%d", &input);
//	printf("\n");
//	switch (input)
//	{
//	case 1:
//	{
//		game();
//		break;
//	}
//	case 0:
//	{
//		printf("退出游戏\n");
//		break;
//	}
//	default:
//	{
//		printf("输入错误，请重新选择\n");
//		break;
//	}
//	}
//	} while (input);
//	return 0;
//}

//rand()函数每次调用前都会查询是否调用过srand(seed),是否给seed设定了一个值,如果有,
//那么它会自动调用srand(seed)来初始化它的起始值。如果没有设置随机数种子,rand()函数
//在调用时,自动设计随机数种子为1。随机种子相同,每次产生的随机数也会相同。

//goto语句

//尽量少使用，容易产生bug
//适合深度嵌套的语句，可以直接跳出，比break省事一些

//关机程序
//1.电脑在一分钟内关机
//2.输入666，终止关机

//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown - s - t 60");  //关机代码，-s表示关机，-t表示时间
//again:
//	printf("警告：您的电脑将在60秒内关机，输入666解除，请输入：\n");
//	scanf("%s", input);
//	if (strcmp(input, "666") == 0)
//	{
//		system("shutdown -a");
//		printf("恭喜您，警告解除\n");
//	}
//	else
//	{
//		printf("输入错误，请重新输入\n");
//		goto again;
//	}
//	return 0;
//}
