#define _CRT_SECURE_NO_WARNINGS
#include "head.h"

//
//合并两个有序序列，首元素不能为0
//

int main()
{
	int arr1[30] = { 1,3,5,7,9 };
	int arr2[30] = { 0,2,4,6,8 };
	int result[100] = { 0 };

	struct Peo s1 = { "zhangsan",30,"male" };
	struct Peo s2 = { "lisi",25,"male" };

	merge_sorted_arrays(arr1, arr2, result, sizeof(arr1[0]), 40, int_cmp,is_end_int);

	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", result[i]);
	}

	return 0;
}