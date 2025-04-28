#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>


//实现memcpy的功能，将一组数据复制到另一组数据中
void* my_memcpy(void* dest,
    const void* src,
    size_t num);


//重叠内存之间的数据拷贝   memmove
void* my_memmove(void* dest,
	const void* src,
	size_t num);
