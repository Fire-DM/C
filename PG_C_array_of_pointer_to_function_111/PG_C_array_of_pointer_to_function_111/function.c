#define _CRT_SECURE_NO_WARNINGS
#include "head.h"

//������
int text()
{
	return 123;
}

//�������˵�
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
void clac(int (*pf)(int, int))
{
	int a = 0;
	int b = 0;
	int ret = 0;

	printf("������������:>");
	scanf("%d %d", &a, &b);
	ret = pf(a, b);
	printf("���Ϊ%d\n\n", ret);
}


//ð������
//��ÿ��Ԫ��ͬ����Ԫ�رȽϣ�����λ��
void bubble_sort(int* p, int sz)
{
	int i = 0;
	//����
	for (i = 0; i < sz-1; i++)
	{
		int flag = 1;//���������������
		int j = 0;
		//�±�Ϊj����Ҫ���±�Ϊsz-1-j�����Ƚ�
		for (j = 0; j < sz - 1-i; j++)
		{
			if ( p[j]> p[j+1])
			{
				int tmp = p[j + 1];
				p[j + 1] = p[j];
				p[j] = tmp;
				flag = 0;//���н�����Ϊ0
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
		
}

