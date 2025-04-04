#define _CRT_SECURE_NO_WARNINGS
#include "head.h"

//测试用
int text()
{
	return 123;
}

//计算器菜单
void menu(void)
{
	printf("******** 1.相加 ********\n");
	printf("******** 2.相减 ********\n");
	printf("******** 3.相乘 ********\n");
	printf("******** 4.相除 ********\n");
	printf("******** 0.退出 ********\n");
}


//加
int Add(int x, int y)
{
	return x + y;
}

//减
int Subtract(int x, int y)
{
	return x - y;
}

//乘
int Multiply(int x, int y)
{
	return x * y;
}

//除
int Divide(int x, int y)
{
	return x / y;
}


//写一个计算器，实现两数的加减乘除
void clac(int (*pf)(int, int))
{
	int a = 0;
	int b = 0;
	int ret = 0;

	printf("请输入两个数:>");
	scanf("%d %d", &a, &b);
	ret = pf(a, b);
	printf("结果为%d\n\n", ret);
}


//冒泡排序
//让每个元素同相邻元素比较，交换位置
void bubble_sort(int* p, int sz)
{
	int i = 0;
	//躺数
	for (i = 0; i < sz-1; i++)
	{
		int flag = 1;//假设数组是有序的
		int j = 0;
		//下标为j的数要和下标为sz-1-j的数比较
		for (j = 0; j < sz - 1-i; j++)
		{
			if ( p[j]> p[j+1])
			{
				int tmp = p[j + 1];
				p[j + 1] = p[j];
				p[j] = tmp;
				flag = 0;//进行交换则换为0
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
		
}

