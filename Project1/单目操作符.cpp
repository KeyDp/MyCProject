#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ������--ֻ��һ���������Ĳ�����

//һ�����߼���������
//C������0��ʾ��
//��0��ʾ��
#include <stdio.h>;
int main()
{
	int flag = 0;  //����flagΪ��
	if (!flag)  //!--��ʾ��ٵ��л�  ����flagΪ��
	{
		printf("��\n");
	}
	int flag1 = 1;  //����flag1Ϊ��
	if (!flag1)
	{
		printf("��\n");  //����flag1Ϊ��
	}
	return 0;
}

//������ֵ-
//������ֵ+
//�ġ�ȡ��ַ&
//�塢 �����������ͳ��ȣ����ֽ�Ϊ��λ��sizeof
int a = 0;
printf("%d", sizeof(a));
printf("%d", sizeof a);  //������Ŀ���ȥ����
printf("%d", sizeof(int));  //���Ͳ�����ȥ����

int arr[10] = { 0 };
printf("%d\n", sizeof(arr));  //���������������Ĵ�С����λ���ֽ�
printf("%d\n", sizeof(arr[0]));  //����������һ�����ݵĴ�С
printf("%d\n", sizeof(arr) / sizeof(arr[0]));  //���ȵ����������Ԫ�ظ���

//������һ�����Ķ����ư�λȡ��~
//�ߡ�++
//ǰ��++
int a = 1;
int b = 0;
b = ++a; //a=a+1Ȼ��b=a
//����++
b = a++  //b=aȻ��a=a+1

//�ˡ�--
//ǰ��--
int a = 0;
int b = 0;
b = --a  //a=a-1Ȼ��b=a
//����--
int a = 0;
int b = 0;
b = a--  //b=aȻ��a=a-1

//�š�ֱ�ӷ��ʲ������������ò�������

//ʮ�������ͣ�ǿ������ת��
int a = 3.14;  //�������渡����3.14����������Ĭ��Ϊdouble����
int a = (int)3.14;  //ǿȡ3.14����������
printf("%d", a);