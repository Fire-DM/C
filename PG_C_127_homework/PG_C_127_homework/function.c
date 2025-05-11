#define _CRT_SECURE_NO_WARNINGS
#include "head.h"


//仿照strncat写的内存追加的函数
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


//比较两个int类型数据的大小
int int_cmp(const void* ptr1,const void* ptr2)
{
	return (*(int*)ptr1 - *(int*)ptr2);
}


//比较两个char类型数据的大小
int char_cmp(const void* ptr1,const void* ptr2)
{
	return (*(char*)ptr1 - *(char*)ptr2);
}


//比较两个结构体类型数据的大小，以姓名举例
int struct_name_cmp(const void* ptr1,const void* ptr2)
{
	return ((struct Peo*)ptr1)->name - ((struct Peo*)ptr2)->name;
}



//交换两个数据的位置
void Swep(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		//交换字节
		char tmp = *buf2;
		*buf2 = *buf1;
		*buf1 = tmp;
		buf1++;
		buf2++;
	}
}


//判断整型数据是否为0，是返回1，不是返回0
int is_end_int(const void* p)
{
	if (*(int*)p != 0)
		return 1;

	return 0;
}


//合并两个有序序列，它们必须都是正序
void merge_sorted_arrays(const void* sep1,
	const void* sep2,
	void* result,
	size_t el_sz,
	size_t num,
	int (*cmp)(const void*,const void*),
	int (*is_end)(const void*))
{
	//1.两组数据大小不同
	//2.不清楚数据类型
	//3.如何合并
	
	int flag = 1;//假设sep1的长度更小
	//void* ret = result;
	
	while (num)
	{
		//spe1 > sep2c
		if (cmp(sep1, sep2) >= 0)
		{
			//*(char*)result = *(char*)sep2;//err

			memcpy(result, sep2, el_sz);
			sep2 = (char*)sep2 + el_sz;
			if (is_end(sep2) == 0)//等于0表示sep2指向的值为0
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
			if (is_end(sep1) == 0)//等于1表示sep1指向的值为0
				break;
		}
		result = (char*)result + el_sz;
		num -= el_sz;
	}

	//将剩余的数据并入result
	while (num)
	{
		result = (char*)result + el_sz;

		//sep2并入result
		if (flag == 1)
		{
			memcpy(result, sep2, el_sz);
			sep2 = (char*)sep2 + el_sz;
		}
		//sep1并入
		else
		{
			memcpy(result, sep1, el_sz);
			sep1 = (char*)sep1 + el_sz;
		}
		num -= el_sz;
	}
}


//计算num的n次方
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




//小乐乐改数字
//递归recursion
int c = -1;
int num_cag(int n)
{
	//n为0就直接返回
	if (n == 0)
		return 0;

	c++;
	//奇数
	if ((n % 10) % 2)
	{
		return  my_pow(10, c) + num_cag(n / 10);
	}

	//偶数
	return 0 + num_cag(n / 10);
}

//循环/迭代 loop/interation
int num_cag_2(int n)
{
	int i = 0;
	int sum = 0;
	while (n)
	{
		int bit = 0;			//假设数字为偶数
		//奇数
		if (n % 10 % 2)
		{
			bit = 1;
		}

		sum += bit * pow(10, i++);
		n /= 10;
	}

	return sum;
}

