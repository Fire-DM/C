#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//staticȫ�ֱ���
int g_val2 = 2022;
static int g_val3 = 2023;


int Add1(int x, int y)
{
	return x + y;
}
//static���κ���
static int Add2(int x, int y)
{
	return x + y;
}