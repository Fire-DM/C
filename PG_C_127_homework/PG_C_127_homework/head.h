#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>

struct Peo
{
	char name[20];
	int age;
	char sex[10];
};


//����strncatд���ڴ�׷�ӵĺ���
void* my_memcat(void* ptr1, void* ptr2, size_t num);
