#define _CRT_SECURE_NO_WARNINGS
#include "head.h"


//对临时变量进行操作在某些编译器下可能无法运行

//
//内存拷贝 memcpy
// 拷贝两块空间的任何数据
//

//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7 };
//	int arr2[10] = { 0 };
//
//	size_t sz = sizeof(arr1)/sizeof(arr1[0]);
//	//memcpy(arr2, arr1, sizeof(arr1));
//	my_memcpy(arr2, arr1, sizeof(arr1));
//
//	int i = 0;
//	for (i=0;i<sz;i++)
//	{
//		printf("%d\n", arr2[i]);
//	}
//
//	return 0;
//  }




//
//重叠内存之间的数据拷贝   memmove
//

int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[30] = { 0 };

	int sz = sizeof(arr1) / sizeof(arr1[0]);
	//memmove(arr1 + 2, arr1, 20);
	my_memmove(arr1, arr1+2, 20);

	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr1[i]);
	}

	return 0;
}