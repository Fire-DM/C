#define _CRT_SECURE_NO_WARNINGS
#include "head.h"


void print1(int arr[3][2], int r, int c)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			printf("%d ", arr[i][j]);
		}
	}
		printf("\n");
}


void print2(int(*parr)[2], int r, int c)
{
	//��ά����ÿ�ж���һά����
	//parr�Ƕ�ά�����һ�е�ȫ����ַ
	//*parr�ǵ�һ�е�������������һ����Ԫ�صĵ�ַ
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			printf("%d ", *(*(parr+i)+j));
		}
	}
		printf("\n");
}


void text(int** p)
{
	printf("num = %d\n", **p);
}


int Add(int x, int y)
{
	return x + y;
}


void calc(int (*pf)(int,int))
{
	int a = 5;
	int b = 3;
	int ret = Add(a, b);
	printf("%d\n", ret);
}