#define _CRT_SECURE_NO_WARNINGS
#include "head.h"

//
//�ϲ������������У����Ǳ��붼������
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



//С���ָ�����
//����һ����n��С�������ÿλ���ĳ�0��1,��
//���ĳһλ���������Ͱ�����Ϊ1��ż�����Ϊ0���������õ��Ľ���Ƕ���
//Ҫ���������һ������n��0<= n <= sqrt(10,9)��

int main()
{
	//1.����
	int n = 0;
	scanf("%d", &n);

	int ret = num(n);

	printf("%d\n", ret);
	
	return 0;
}