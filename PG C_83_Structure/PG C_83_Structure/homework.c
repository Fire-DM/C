#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//写一个函数返回二进制中 1 的个数
//模2

//第一个不能算出负数
//int count_num_of_1(int n)
//int count_num_of_1(unsigned int n)//将负数看成无符号的数字
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}

//int count_num_of_1(int n)
//{
//	int i = 0;
//	int count = 0;
//
//	for (i = 1 ; i < 32; i++)
//	{
//		//n的32位二进制先右移i位，再和1按位与（&）
//      //&有0为0
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//
//	return count;
//}

int count_num_of_1(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		//n=15
		//1111  n
		//1110  n-1
		//&
		//1110  n
		//1101  n-1
		//&
		//1100  n
		//1011  n-1
		//&
		//1000  n
		//0111  n-1
		//&
		//0000  n
		//按位与一次就消去一个1
		//
		//
		count++;
	}
	return count;
}


//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int n = count_num_of_1(num);
//
//	printf("%d\n", n);
//
//	return 0;
//}


//打印用*组成的 X 图形
int main()
{
	int n = 0;
	while (scanf("%d", &n) == 1)
	{
		int i = 1;
		int j = 1;
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (i == j)
					printf("*");
				else if (i + j == n + 1)
					printf("*");
				else
					printf(" ");
			}
			printf("\n");
		}
	}
}