#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//�ṹ�壨head.h��
struct Stu
{
	char name[20];
	int age;
};



//�����ú���
int text();

//������
void clac(int (*)(int, int));

//�Ӽ��˳�
int Add(int x, int y);
int Subtract(int x, int y);
int Multiply(int x, int y);
int Divide(int x, int y);

//�������˵�
void menu(void);

//ð������
void bubble_sort(int*, int);

//�Ƚ����ݴ�С
int cmp_int(const void* , const void* );


//�Ƚ�����
int cmp_stu_by_name(const void* ,const void* );
//�Ƚ�����
int cmp_stu_by_age(const void*, const void*);


//����λ��
void Swap(char* buf1, char* buf2, int width);
//�Ľ����ð�����У��������κ��������ݵıȽ�
void new_bubble_sort(void* base,//���Ƚ�Ԫ�ص���ʼλ��
	int sz, //���Ƚ�Ԫ�صĸ���
	int width,//���Ƚ�Ԫ�صĴ�С����λΪ�ֽڣ�
	int (*cmp)(const void* e1, const void* e2));//����ָ�룬ָ��Ƚ�����Ԫ�ش�С�ĺ���
