#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// �ṹ��
// �ṹ��һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա�������ṹ��ÿ����Ա�����ǲ�ͬ���͵ı���
// �ؼ���struct
// �ṹ���Ա�����Ǳ��������顢ָ�롢�����ṹ��
// .����������ͨ���ṹ��������ʽṹ���Ա
// ->����������ͨ���ṹ��ָ����ʽṹ���Ա
// struct point
// {
//		int x;
//		int y;
// }p1;
// struct point p2;
// �ṹ������Ĵ���
// ���Ƕ��Ҫע���Ⱥ�˳��

//struct peo
//{
//	char name[20];
//	char num[20];
//	char sex[5];
//	int high;
//};
//struct s
//{
//	struct peo p;  //�ṹ���Ա�������ṹ��
//	int num;
//	double f;
//};
//void print1(struct peo p)
//{
//	printf("%s %s %s %d\n", p.name, p.num, p.sex, p.high);
//}
//void print2(struct peo* sp)
//{
//	printf("%s %s %s %d\n", sp->name, sp->num, sp->sex, sp->high);
//}
//int main()
//{
//	struct peo p1 = { "zhcusz", "55786676787", "��", 171 };  //������Щ��Ϣ�в���ȫ��ʼ��
//	struct s p2 = { {"zsasz", "6758758578", "Ů", 199}, 256, 1.0 };
//	printf("%s %s %s %d\n", p1.name, p1.num, p1.sex, p1.high);
//	printf("%s %s %s %d %d %lf\n", p2.p.name, p2.p.num, p2.p.sex, p2.p.high, p2.num, p2.f);
//	print1(p1);
//	print2(&p1);
//	return 0;
//}

// �ṹ�崫��
// �������ε�ʱ�򣬲�����Ҫѹջ��
// ���Դ��ε�ʱ����ô��ṹ���ַ
