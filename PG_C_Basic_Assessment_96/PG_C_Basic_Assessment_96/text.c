#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


//int cnt = 0;
//int fib(int n)
//{
//	cnt++;
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return 2;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//
//void main()
//{
//	fib(8);
//	//����fib�����˼��εݹ�
//	printf("%d", cnt);
//}


//
//  ++���������ȼ�����*
//


//
//����С������
//

//int main()
//{
//	//1.����
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	//2.���Ƿ�Ϊ���������ǣ��Ƚϴ�С
//	if ((num1 % num2) == 0 || (num1 % num2) == 0)
//	{
//		if (num1 > num2)
//			printf("%d\n", num1);
//		else
//			printf("%d\n", num2);
//	}
//	//���ǣ������������
//	else
//		printf("%d\n", num1 * num2);
//
//	return 0;
//}


//int main()
//{
//	//1.����
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//
//	//2.�Ƚϴ�С���ýϴ�������������ģ�Ͻ�С��
//	int m = (num1 > num2 ? num1 : num2);
//
//	while(1)
//	{
//		if (m % num1 == 0 && m % num2 == 0)
//		{
//			break;
//		}
//		m++;
//	}
//
//	//3.��ӡ
//	printf("%d\n", m);
//
//	return 0;
//}


//int main()
//{
//	//1.����
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//
//	//��num1*i������%num2�Ľ��Ϊ0ʱ��num1*iΪ��С������
//	int i = 1;
//	while (num1 * i % num2)
//	{
//		i++;
//	}
//
//	printf("%d\n", num1 * i);
//
//	return 0;
//}


//
// ���ַ�������
//

int main()
{
	//1.��ȡ
	char str[100];
	//fgets��Ҫ�Ĳ����������ַ����С��������
	//stdinΪ<stdio.h>�еı�׼�����������Ӽ��̶�ȡ����
	//��Ҫ��ȡ�ļ���������FILE*
	//������FILE* FP = fopen("input.txt", "r");
	//fgets(str, sizeof(str), fp);
	//r��ʾֻ�Ķ�������w,a

	if (fgets(str, sizeof(str), stdin) == NULL)
	{
		printf("����������������룺");
	}
	str[strcspn(str, "\n")] = '\0';//ȥ�����з�

	int left = 0;
	int right = strlen(str) - 1;//strlen��������ַ����ĳ���

	while (left < right)
	{
		char tmp = str[left];
		str[left] = str[right];
		str[right] = tmp;
		left++;
		right--;
	}

	printf("%s\n", str);

	return 0;
}