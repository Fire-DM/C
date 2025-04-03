#define _CRT_SECURE_NO_WARNINGS
#include "head.h"


//函数指针的书写
int text(const char* str)
{
	return 1;
}


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
void clac(int (*pf)(int,int))
{
	int a = 0;
	int b = 0;
	int ret = 0;

	printf("请输入两个数:>");
	scanf("%d %d", &a, &b);
	ret = pf(a, b);
	printf("%d\n", ret);
}
