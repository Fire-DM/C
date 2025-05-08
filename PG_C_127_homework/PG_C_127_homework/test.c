#define _CRT_SECURE_NO_WARNINGS
#include "head.h"

//
//合并两个有序序列，它们必须都是正序
//

//int main()
//{
//	int arr1[30] = { 1,3,5,7,9 };
//	int arr2[30] = { 0,2,4,6,8 };
//	int result[100] = { 0 };
//
//	struct Peo s1 = { "zhangsan",30,"male" };
//	struct Peo s2 = { "lisi",25,"male" };
//
//	merge_sorted_arrays(arr1, arr2, result, sizeof(arr1[0]), 40, int_cmp,is_end_int);
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", result[i]);
//	}
//
//	return 0;
//}



//小乐乐改数字
//现有一个数n，小乐乐想把每位数改成0或1,，
//如果某一位是奇数，就把它变为1；偶数则变为0，请问最后得到的结果是多少
//要求：输入包含一个整数n（0<= n <= sqrt(10,9)）

int main()
{
	//1.输入
	int n = 0;
	scanf("%d", &n);

	int ret = num(n);

	printf("%d\n", ret);
	
	return 0;
}