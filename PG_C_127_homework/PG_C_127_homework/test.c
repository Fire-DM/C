#define _CRT_SECURE_NO_WARNINGS
#include "head.h"

//
//合并两个有序序列
//

int main()
{
	int arr1[30] = { 1,3,5,7,9 };
	int arr2[30] = { 0,2,4,6,8 };
	int arr3[100] = { 0 };

	struct Peo s1 = { "zhangsan",30,"male" };
	struct Peo s2 = { "lisi",25,"male" };

	merge_sorted_arrays(arr1, arr2, arr3, sizeof(arr1[0]), 20);


	return 0;
}