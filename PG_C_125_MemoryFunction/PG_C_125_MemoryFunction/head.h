#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>


//ʵ��memcpy�Ĺ��ܣ���һ�����ݸ��Ƶ���һ��������
void* my_memcpy(void* dest,
    const void* src,
    size_t num);


//�ص��ڴ�֮������ݿ���   memmove
void* my_memmove(void* dest,
	const void* src,
	size_t num);
