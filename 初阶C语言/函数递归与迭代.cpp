#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//��������ʾ��stack overflow��ָջ�����һ�������ݹ����

//�����ݹ�
//�����������ı�̼��ɳ�Ϊ�ݹ�
//��Ҫ˼����ʽ���ڣ����»�С
//ֻ��Ҫ�����ĳ���������������������Ҫ�Ķ����ظ����㣬�����ٴ�����
//�ݹ��������Ҫ������
//1.���������������������������ʱ���ݹ�㲻�ټ���
//2��ÿ�εݹ����֮��Խ��Խ�ӽ������������
//�ݹ�͵�����ô������ô�ã���ʱ��Ҳ����鷳
//�ݹ���̫��Ҳ��ջ���
//����������ݹ�ĳɷǵݹ飻ʹ��static�������nonstatic����

//���ӣ�����һ���޷�����������������˳��ÿһλ������ӡ	

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
//	scanf("%u", &num);  //%d�Ǵ�ӡ�з��ŵ�����������������  %u��ָ�޷��ŵ�����
//	printf(num);
//	return 0;
//}

//��д��������������ʱ���������ַ����ĳ���

//int my_strlen(char* str)  //δ������ʱ����
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

//int my_strlen(char str[])  //��������ʽȥ����
//int my_strlen(char* str)  //��ָ����ʽȥ����
//{
//	int count = 0;       //����һ����ʱ����
//	while (*str != '\0')
//	{
//		count++;
//		str++;  //����һ���ַ���һ���ַ�ռ��һ�ֽ�
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

//һ���ַ���һ���ֽڴ�С

//int main()     
//{
//	char i = '0';
//	printf("%d", sizeof(i));  
//	return 0;

//�ú�����n�Ľ׳�

//�ݹ�ķ�ʽ��

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

//�����ķ�ʽ��

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

//�ַ�������(strlen�����ں�����)(sizeof�����ں�����)

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

//����ķ���(�Լ�����my_strlen)

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

//����һ������ÿһλ�ĺ�

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

//�ݹ�ʵ��n��k�η�

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