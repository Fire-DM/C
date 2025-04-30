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


//仿照strncat写的内存追加的函数
void* my_memcat(void* ptr1, void* ptr2, size_t num);
