//C��������û���ַ������͵�
//˫������������һ���ַ���Ϊ�ַ�������ֵ������ַ���  �磺"abcdef"

//#include <stdio.h>;
//int main()
//{
//	char arr1[] = "abcdef\n";  //f����������һ��\0--�ַ���������־
//	char arr2[] = { 'a','b','c','d','e','f' };  //û��\0����һֱ���ڴ����ҵ�\0
//		  
//	printf("%s", arr1);  //%s��������ӡ�ַ�����
//	printf("%s", arr2);  
//	return 0;
//}

//ͨ�����н����֪���ַ�����������\0��
//�ַ���������־����Ҫ�����û�У�����ͻ�һֱ���ڴ���Ѱ��ֱ���ҵ���һ��\0

#include <stdio.h>;
#include <string.h>;  //ͷ�ļ�����string length
int main()
{
	char arr1[] = { 'a','b','c','d','e','f' };
	char arr2[] = { "abcdef" };
	int len = 0;
	printf("%d\n",strlen(arr1));
	printf("%d\n", strlen(arr2));
	return 0;
}