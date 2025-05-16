#define _CRT_SECURE_NO_WARNINGS
#include "head.h"


//模拟qsort函数的功能

//int main()
//{
//	int arr[] = { 1,5,9,3,7,21,4,8 };
//
//	int n = strlen(arr);
//
//	my_qsort(arr, n, sizeof(arr[0]), int_cmp);
//
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//
//	printf("%d %d\n", *(ptr1 - 1), *(ptr2 - 1));
//	//我的答案：1 6
//	//正确答案：1 6
//}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int main()
{
	int  arr[10][10] = { 0 };
	int n = 0;//行
	int m = 0;//列
	scanf("%d %d", &n, &m);

	int i = 0;
	int j = 0;
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	//输出
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", arr[j][i]);
		}
		printf("\n");
	}

	return 0;
}
