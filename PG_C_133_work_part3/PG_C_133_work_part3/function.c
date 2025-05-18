#define _CRT_SECURE_NO_WARNINGS
#include "head.h"

//比较整型数据
int int_cmp(const void* sep1, const void* sep2)
{
	return *(int*)sep1 - *(int*)sep2;
}


//判断是不是有序数列
int is_sorted(int* p,int n)
{
	int flag1 = 0;//升序
	int flag2 = 0;//降序
	while (--n)
	{
		if (*p > *(p + 1))//降序
			flag2 = 1;
		else if (*p < *(p + 1))//升序
			flag1 = 1;
		else
			;

		p++;
	}
		
	//0或1表示有序
	//2表示无序
	return flag1 + flag2;
}
