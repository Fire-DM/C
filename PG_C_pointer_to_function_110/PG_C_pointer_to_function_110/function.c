#define _CRT_SECURE_NO_WARNINGS
#include "head.h"


//����ָ�����д
int text(const char* str)
{
	return 1;
}


void menu(void)
{
	printf("******** 1.��� ********\n");
	printf("******** 2.��� ********\n");
	printf("******** 3.��� ********\n");
	printf("******** 4.��� ********\n");
	printf("******** 0.�˳� ********\n");
}


//��
int Add(int x, int y)
{
	return x + y;
}

//��
int Subtract(int x, int y)
{
	return x - y;
}

//��
int Multiply(int x, int y)
{
	return x * y;
}

//��
int Divide(int x, int y)
{
	return x / y;
}


//дһ����������ʵ�������ļӼ��˳�
void clac(int (*pf)(int,int))
{
	int a = 0;
	int b = 0;
	int ret = 0;

	printf("������������:>");
	scanf("%d %d", &a, &b);
	ret = pf(a, b);
	printf("%d\n", ret);
}
