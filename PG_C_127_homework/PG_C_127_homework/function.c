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



//�����������ݵ�λ��
void Swep(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		//�����ֽ�
		char tmp = *buf2;
		*buf2 = *buf1;
		*buf1 = tmp;
		buf1++;
		buf2++;
	}
}


//�ж����������Ƿ�Ϊ0���Ƿ���1�����Ƿ���0
int is_end_int(const void* p)
{
	if (*(int*)p != 0)
		return 1;

	return 0;
}


//�ϲ������������У����Ǳ��붼������
void merge_sorted_arrays(const void* sep1,
	const void* sep2,
	void* result,
	size_t el_sz,
	size_t num,
	int (*cmp)(const void*,const void*),
	int (*is_end)(const void*))
{
	//1.�������ݴ�С��ͬ
	//2.�������������
	//3.��κϲ�
	
	int flag = 1;//����sep1�ĳ��ȸ�С
	//void* ret = result;
	
	while (num)
	{
		//spe1 > sep2c
		if (cmp(sep1, sep2) >= 0)
		{
			//*(char*)result = *(char*)sep2;//err

			memcpy(result, sep2, el_sz);
			sep2 = (char*)sep2 + el_sz;
			if (is_end(sep2) == 0)//����0��ʾsep2ָ���ֵΪ0
			{
				flag = 2;
				break;
			}
		}
		//spe1 < sep2c
		else
		{
			memcpy(result, sep1, el_sz);
			sep1 = (char*)sep1 + el_sz;
			if (is_end(sep1) == 0)//����1��ʾsep1ָ���ֵΪ0
				break;
		}
		result = (char*)result + el_sz;
		num -= el_sz;
	}

	//��ʣ������ݲ���result
	while (num)
	{
		result = (char*)result + el_sz;

		//sep2����result
		if (flag == 1)
		{
			memcpy(result, sep2, el_sz);
			sep2 = (char*)sep2 + el_sz;
		}
		//sep1����
		else
		{
			memcpy(result, sep1, el_sz);
			sep1 = (char*)sep1 + el_sz;
		}
		num -= el_sz;
	}
}


//����num��n�η�
int my_pow(int num, int n)
{
	int ret = 1;
	while (n)
	{
		ret *= num;
		n--;
	}
	return ret;
}




//С���ָ�����
//�ݹ�recursion
int c = -1;
int num_cag(int n)
{
	//nΪ0��ֱ�ӷ���
	if (n == 0)
		return 0;

	c++;
	//����
	if ((n % 10) % 2)
	{
		return  my_pow(10, c) + num_cag(n / 10);
	}

	//ż��
	return 0 + num_cag(n / 10);
}

//ѭ��/���� loop/interation
int num_cag_2(int n)
{
	int i = 0;
	int sum = 0;
	while (n)
	{
		int bit = 0;			//��������Ϊż��
		//����
		if (n % 10 % 2)
		{
			bit = 1;
		}

		sum += bit * pow(10, i++);
		n /= 10;
	}

	return sum;
}

