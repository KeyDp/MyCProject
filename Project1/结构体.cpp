#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;
//�ṹ�壨struct����C������һ���Զ�������
//�ṹ�����һ�ְѵ�һ���������һ�������
/*
struct stu
{
	char name[10];  //ͬʱ������ͬ���ͱ���
	int age[10];
	char sex[10];
	char tele[10];
};
int main()
{
	struct stu s = { "zhangsan",20,"nan","15210956666" };
	//�ṹ�����.��Ա��
	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);//ֱ�Ӵ�ӡ�ķ���
	//�õ��˲����� . --
	return 0;
} 
*/

struct stu
{
	char name[10];
	int age;
	char sex[10];
	char tele[12];
};
void print(struct stu* ps)  //void����Ҫ����
{
	printf("%s %d %s %s", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);//����1
	printf("%s %d %s %s", ps->name, ps->age, ps->sex, ps->tele);  //����2
	// ������->
	//�ṹ��ָ�����->��Ա��
}
int main()
{
	struct stu s = { "xiaolei",21,"nv","13683526666" };
	print(&s);
	return 0;
}