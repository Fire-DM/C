#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>

//两个变量交换值
void Swap(int* px, int* py)
{
	int tmp = *px;//用作中介的变量，交换变量的值
	*px = *py;
	*py = tmp;
}

//三数排序并打印（降序）
void in_order(int a, int b, int c)
{
	///比较a和b，选出较大值并赋值给a
	if (a < b)
	{
		Swap(&a, &b);
	}
	//a和b的较大值和c比较，
	if (a < c)
	{
		Swap(&a, &c);
	}
	//比较b和c
	if (b < c)
	{
		Swap(&c, &b);
	}
	//将值降序排列，固定次序
	printf("%d %d %d\n", a, b, c);
}

//给两个数，求这两个数的最大公约数
int max_common_divisor(int x, int y)
{
	//int n = 0;
	//if (x > y)
	//{
	//	//用较小值作为除数，求公约数
	//	for (n = y; n > 0; n--)
	//	{
	//		//两个数第一次都被整除时返回n，得到所求值
	//		if (x % n == 0 && y % n == 0)
	//			return n;
	//	}
	//}
	//else
	//{
	//	for (n = x; n > 0; n--)
	//	{
	//		if (x % n == 0 && y % n == 0)
	//			return n;
	//	}
	//}

	//用双目操作符比较大小，暴力求解
	/*int min = (x < y) ? x : y;
	int m = min;
	while (1)
	{
		if (x % m == 0 && y % m == 0)
		{
			return m;
		}
		m--;
	}*/

	//辗转相除法
	//举例：24 18
	//24 % 18 = 6，6 != 0，不是最大公约数
	//18 % 6 = 0，0 == 0，最大公约数

	/*int min = (x < y) ? x : y;
	int max = (x > y) ? x : y;
	int sum = 0;
	while (1)
	{
		sum = max % min;
		if (sum == 0)
			break;
		max = min;
		min = sum;
	}*/

	int c = 0;
	//不用比较x和y的大小
	//18 % 24 = 18
	//24 % 18 = 6
	//18 % 6 = 0
	while (c = x % y)//c=0时为假，不进入循环
	{
		x = y;
		y = c;
	}
	return y;
}

//九九乘法表，行数和列数可指定
void print_table(int n)
{
	int row = 1;//行数
	//打印九行
	for (row = 1; row <= n; row++)
	{
		//打印一行
		int col = 1;//列数

		for (col = 1; col <= row; col++)
		{
			int sum = row * col;//结果

			printf("%d*%d=%d\t", col, row, sum);
			//printf("%d*%d=%-3d", col, row, sum);
		}
		//最后一个式子换行
		printf("\n");
	}
}

