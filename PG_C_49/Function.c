#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>

//������������ֵ
void Swap(int* px, int* py)
{
	int tmp = *px;//�����н�ı���������������ֵ
	*px = *py;
	*py = tmp;
}

//�������򲢴�ӡ������
void in_order(int a, int b, int c)
{
	///�Ƚ�a��b��ѡ���ϴ�ֵ����ֵ��a
	if (a < b)
	{
		Swap(&a, &b);
	}
	//a��b�Ľϴ�ֵ��c�Ƚϣ�
	if (a < c)
	{
		Swap(&a, &c);
	}
	//�Ƚ�b��c
	if (b < c)
	{
		Swap(&c, &b);
	}
	//��ֵ�������У��̶�����
	printf("%d %d %d\n", a, b, c);
}

//�������������������������Լ��
int max_common_divisor(int x, int y)
{
	//int n = 0;
	//if (x > y)
	//{
	//	//�ý�Сֵ��Ϊ��������Լ��
	//	for (n = y; n > 0; n--)
	//	{
	//		//��������һ�ζ�������ʱ����n���õ�����ֵ
	//		if (x % n == 0 && y % n == 0)
	//			return n;
	//	}
	//}
	//else
	//{
	//	for (n = x; n > 0; n--)
	//	{
	//		if (x % n == 0 && y % n == 0)
	//			return n;
	//	}
	//}

	//��˫Ŀ�������Ƚϴ�С���������
	/*int min = (x < y) ? x : y;
	int m = min;
	while (1)
	{
		if (x % m == 0 && y % m == 0)
		{
			return m;
		}
		m--;
	}*/

	//շת�����
	//������24 18
	//24 % 18 = 6��6 != 0���������Լ��
	//18 % 6 = 0��0 == 0�����Լ��

	/*int min = (x < y) ? x : y;
	int max = (x > y) ? x : y;
	int sum = 0;
	while (1)
	{
		sum = max % min;
		if (sum == 0)
			break;
		max = min;
		min = sum;
	}*/

	int c = 0;
	//���ñȽ�x��y�Ĵ�С
	//18 % 24 = 18
	//24 % 18 = 6
	//18 % 6 = 0
	while (c = x % y)//c=0ʱΪ�٣�������ѭ��
	{
		x = y;
		y = c;
	}
	return y;
}

//�žų˷���������������ָ��
void print_table(int n)
{
	int row = 1;//����
	//��ӡ����
	for (row = 1; row <= n; row++)
	{
		//��ӡһ��
		int col = 1;//����

		for (col = 1; col <= row; col++)
		{
			int sum = row * col;//���

			printf("%d*%d=%d\t", col, row, sum);
			//printf("%d*%d=%-3d", col, row, sum);
		}
		//���һ��ʽ�ӻ���
		printf("\n");
	}
}

