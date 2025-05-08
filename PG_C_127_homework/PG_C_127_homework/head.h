#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>

struct Peo
{
	char name[20];
	int age;
	char sex[10];
};


//仿照strncat写的内存追加的函数
void* my_memcat(void* , void* , size_t);

//比较两个int类型数据的大小
int int_cmp(const void* , const void* );

//比较两个char类型数据的大小
int char_cmp(const void* , const void* );

//比较两个结构体类型数据的大小，以姓名举例
int struct_name_cmp(const void*, const void* );

//判断整型数据是否为0，是返回1，不是返回0
int is_end_int(const void* p);

//合并两个有序序列，它们必须都是正序
void merge_sorted_arrays(const void* sep1,
	const void* sep2,
	void* result,
	size_t el_sz,
	size_t num,
	int (*cmp)(const void*,const void*),
	int (*is_end)(const void*));


//小乐乐改数字
int num(int n);


//计算num的n次方
int my_sqrt(int num, int n);

