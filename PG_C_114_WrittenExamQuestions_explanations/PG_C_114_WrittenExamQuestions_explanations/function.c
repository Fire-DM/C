#define _CRT_SECURE_NO_WARNINGS
#include "head.h"

//比较函数
int cmp_int(const void* e1, const void* e2)
{
	return *(char*)e1 - *(char*)e2;
}


//两数交换位置
void Swep(char* buf1,char* buf2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		//交换字节
		char tmp = *buf2;
		*buf2 = *buf1;
		*buf1 = tmp;
		*buf1++;
		*buf2++;
	}

}

//冒泡序列
void bubble_sort(void* base,int sz,int width,int(*pf)(const void*, const void*))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 0;//假设数组为正序
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (pf((char*)base+j*width,(char*)base+(j+1)*width) > 0)
			{
				Swep((char*)base + j * width, (char*)base + (j + 1) * width, width);
				flag = 0;
			}
		}
		//如果未交换一次，则说明为正序
		if (flag == 1)
			break;
	}
}