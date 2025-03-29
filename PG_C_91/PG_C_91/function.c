#define _CRT_SECURE_NO_WARNINGS
#include "work.h"


int is_narcissistic_number(int i)
{
	//2.求这个数是几位数
	int tmp = i;
	int n = 1;//至少是1位数
	while (tmp/10)
	{
		n++;
		tmp /= 10;//实际改变tmp的值，防止循环
	}

	int sum = 0;
	tmp = i;//还原tmp的值
	while (tmp)
	{
		//3.计算各位的n次方
		sum += (int)pow(tmp % 10, n);//pow()返回值类型为double
		tmp /= 10;
	}

	if(i==sum)
	{
		return sum;
	}
	else
	{
		return 0;
	}
}

