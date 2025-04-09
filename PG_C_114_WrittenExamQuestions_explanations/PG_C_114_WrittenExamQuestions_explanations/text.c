#define _CRT_SECURE_NO_WARNINGS
#include "head.h"

//
//写一个函数，实现升序、降序功能
//

int main()
{
	//int arr[] = { 1,6,45,8,9,32,4,0,1 };
	//数组元素个数
	//int sz = sizeof(arr) / sizeof(arr[0]);
	
	char arr[] = "edcba";
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);

	bubble_sort(arr,//首元素地址
		sz,//数组元素个数
		sizeof(arr[0]),//元素大小
			cmp_int);//函数指针——比较函数

	return 0;
}