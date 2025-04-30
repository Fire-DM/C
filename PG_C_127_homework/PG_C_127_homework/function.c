#define _CRT_SECURE_NO_WARNINGS
#include "head.h"


//����strncatд���ڴ�׷�ӵĺ���
void* my_memcat(void* ptr1, void* ptr2, size_t num)
{
	assert(ptr1 && ptr2);
	void* ret = ptr1;

	while (num--)
	{
		*(char*)ptr1 = *(char*)ptr2;
		ptr1 = (char*)ptr1 + 1;
		ptr2 = (char*)ptr2 + 1;
	}

	return ret;
}


//�Ƚ�����int�������ݵĴ�С
int int_cmp(const void* ptr1,const void* ptr2)
{
	return (*(int*)ptr1 - *(int*)ptr2);
}


//�Ƚ�����char�������ݵĴ�С
int char_cmp(const void* ptr1,const void* ptr2)
{
	return (*(char*)ptr1 - *(char*)ptr2);
}


//�Ƚ������ṹ���������ݵĴ�С������������
int struct_name_cmp(const void* ptr1,const void* ptr2)
{
	return ((struct Peo*)ptr1)->name - ((struct Peo*)ptr2)->name;
}



//�ϲ�������������
void merge_sorted_arrays(void* sep1,
	void* sep2,
	void* result,
	size_t elem_size,
	int (*data_cmp)(void*, void*))
{
	//1.�������ݴ�С��ͬ
	//2.�������������
	//3.��κϲ�

	int count = 0;

	while 
	{
		if (data_cmp(sep1, sep2) > 0)
		{
			*((char*)result + count * elem_size) = *((char*)sep1 + count * elem_size);
		}
		else if (data_cmp(sep1, sep2) == 0)
		{

		}
		count++;
	}


}