#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;
/*
int main()
{
	int a = 10;
	printf("%d\n", sizeof(a));  //a���ڴ��СΪ4���ֽڣ���32bit
	&a;  //ȡ��ַ������& //���ڲ��ַ/���ڲ��ڴ��е�����-���Ŷ�00 00 00 0a(ʮ������)
	printf("%p\n", &a);  //��ӡ��ַ��%p
	int* p = &a;  //int*�Ǵ��ַ������  p����ָ�����
	*p = 20;  //�����ò�����*����˼��ͨ��p�д�ŵĵ�ַ���ҵ�p��ָ�Ķ���
	return 0;	//int˵��pָ��Ķ�����int���͵�  *˵��p��ָ�����
}
//�ڴ浥Ԫ�ı��Ҳ��-��ַ-��ַ�ֱ���Ϊָ��
//���ָ����ߵ�ַ�ı�������Ϊָ�����
*/

//ָ���ڴ��С
int main()
{
	printf("%zu\n", sizeof(int*));  //4
	printf("%zu\n", sizeof(char*));
	printf("%zu\n", sizeof(double*));
	printf("%zu\n", sizeof(float*));
	printf("%zu\n", sizeof(short*));  //sizeof��ӡ�����%zu
	printf("%zu\n", sizeof(long*));
	printf("%zu\n", sizeof(long long*));
	return 0;
}
//������ʲô���͵�ָ�룬�����ڴ���ָ�����
//ָ�������������ŵ�ַ��
//ָ������Ĵ�Сȡ����һ����ַ��ŵ�ʱ����Ҫ���Ŀռ�
//32λ�����ĵ�ַ��Ҫ32bit,��4byte,����ָ�����Ϊ4���ֽ�
//64λ�����ĵ�ַ��Ҫ64bit,��8byte������ָ�����Ϊ8���ֽ�





