#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//�ṹ��һЩֵ�ļ��ϣ���Щֵ����Ϊ��Ա����
//�ṹ����������������ӱ���

//������
//���ͣ��ࣩ����ռ���ڴ棬�൱��ͼֽ
struct Peo
{
	char name[20];
	char tele[12];
	char sex[5];
	int high;
}m, n;
//m��n����struct Peo�ṹ���ʹ�����2����������һ�㴴���ֲ�����

struct Peo h;//ȫ�ֱ���

struct St
{
	struct Peo p;//ȫ�ֱ���
	int num;
	float f;
};

//ָ�봫��ʱҪ��->
//��ַ���ݽ�ʡ�ռ��ʱ��
//�ṹ�崫��ʱ�����õ�ַ
void print(struct Peo* sp)
{
	printf("%s %s %s %d\n", sp->name, sp->tele, sp->sex, sp->high);//�ṹ��ָ�룬��Ա����
}

void print2(struct Peo p)
{
	printf("%s %s %s %d\n", p.name, p.tele, p.sex, p.high);
}

//int main()
//{
//	struct Peo p1 = { "����","15265452525","��",181};//�ṹ������Ĵ���������ʼ�����൱�ڷ��ӣ��������ڴ�
//	struct St s = { {"����","15265552525","��",171},100,3.14f };
//
//	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.high);//�ṹ���������Ա����
//	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tele, s.p.sex,s.p.high,s.num,s.f);
//
//	print(&p1);
//	print2(p1);
//	return 0;
//}

