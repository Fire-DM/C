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


//����strncatд���ڴ�׷�ӵĺ���
void* my_memcat(void* , void* , size_t);

//�Ƚ�����int�������ݵĴ�С
int int_cmp(const void* , const void* );

//�Ƚ�����char�������ݵĴ�С
int char_cmp(const void* , const void* );

//�Ƚ������ṹ���������ݵĴ�С������������
int struct_name_cmp(const void*, const void* );

//�ж����������Ƿ�Ϊ0���Ƿ���1�����Ƿ���0
int is_end_int(const void* p);

//�ϲ������������У����Ǳ��붼������
void merge_sorted_arrays(const void* sep1,
	const void* sep2,
	void* result,
	size_t el_sz,
	size_t num,
	int (*cmp)(const void*,const void*),
	int (*is_end)(const void*));


//С���ָ�����
int num(int n);


//����num��n�η�
int my_sqrt(int num, int n);

