#define _CRT_SECURE_NO_WARNINGS
#include "head.h"

//�Ƚ���������
int int_cmp(const void* sep1, const void* sep2)
{
	return *(int*)sep1 - *(int*)sep2;
}


//��������
void my_qsort(void* base,
	size_t num,
	size_t size,
	int (*cmp)(const void*, const void*))
{
	;
}

