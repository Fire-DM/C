#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//дһ���������ض������� 1 �ĸ���
//ģ2

//��һ�������������
//int count_num_of_1(int n)
//int count_num_of_1(unsigned int n)//�����������޷��ŵ�����
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
//		//n��32λ������������iλ���ٺ�1��λ�루&��
//      //&��0Ϊ0
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
		//��λ��һ�ξ���ȥһ��1
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


//��ӡ��*��ɵ� X ͼ��
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