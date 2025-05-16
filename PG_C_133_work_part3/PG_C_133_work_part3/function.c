#define _CRT_SECURE_NO_WARNINGS
#include "head.h"

//比较整型数据
int int_cmp(const void* sep1, const void* sep2)
{
	return *(int*)sep1 - *(int*)sep2;
}


//数据排序
void my_qsort(void* base,
	size_t num,
	size_t size,
	int (*cmp)(const void*, const void*))
{
	;
}

