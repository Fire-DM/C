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
	//二维数组每行都是一维数组
	//parr是二维数组第一行的全部地址
	//*parr是第一行的数组名，即第一行首元素的地址
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