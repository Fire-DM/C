#define _CRT_SECURE_NO_WARNINGS
#include "work.h"


//
//��һ���ַ���str�����ݵߵ������������
// 

//int main()
//{
//	char str[10001] = "hello bit";
//	
//	//2.������β���±�
//	int left = 0;
//	int right = strlen(str) - 1;
//	//3.����λ��
//	while (left < right)
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//	
//	//4.���
//	printf("%s\n", str);
//
//	return 0;
//}


//
//��Sn=a+aa+aaa+aaaa+aaaaa+...��ǰ����֮��
//

//int main()
//{
//	//1.����
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	//2.����
//	int k = 0;
//	int sum = 0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		//2
//		//2*10+2
//		//22*10+2
//		k = k * 10 + a;
//		sum += k;
//	}
//	//3.���
//	printf("%d\n", sum);
//
//	return 0;
//}


//
//��1-100000���ˮ�ɻ���
// nλ������λ��n�η�֮�͵��ڸ���
//

//int main()
//{
//	//1.����1-100000����
//	int i = 0;
//	int num = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		num = is_narcissistic_number(i);
//
//		if (num)//����ֵΪ0�򲻴�ӡ
//		{
//			printf("%d ", num);
//		}
//	}
//	
//	return 0;
//}


//
//��ӡ����
//

//int main()
//{
//	//1.�ֳ���������,line��Ϊ�ֽ���
//	// ���ϰ���°��һ��
//	// �����һ�зֱ��ӡ�ո��*
//	int line = 0;
//	scanf("%d", &line);
//	//�ϰ�
//	int i = 0;
//	for (i = 1; i <= line; i++)
//	{
//		int j = 0;
//		//��ӡ�ո�
//		for (j = 1; j <= line - i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*��
//		for (j = 1; j <= (2 * i - 1); j++)
//		{
//			printf("*");
//		}
//		printf("\n");//����
//	}
//
//	//�°�
//	for (i = 1; i < line; i++)
//	{
//		int j = 0;
//		//��ӡ�ո�
//		for (j = 0; j < i ; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*��
//		for (j = 0; j < 2 * (line-i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");//����
//	}
//
//	return 0;
//}



//
// .���������ȼ�����*������
// 


//
//����ˮ��1ƿ1Ԫ��2����ƿ��һƿ��20Ԫ���Ժȶ���ƿ
//

//int main()
//{
//	//1.  20Ԫ -> 20ƿ
//	//2.  20��ƿ -��10ƿ
//	//3.  10��ƿ -��5ƿ
//	//4.  5��ƿ -�� 2ƿ
//	//5.  3��ƿ -�� 1ƿ
//	//6.  2��ƿ -�� 1ƿ
//	//7.  1��ƿ -�� 0ƿ
//
//	//3��������money,total,empty
//	int money = 0; 
//	scanf("%d", &money);
//
//	//assert(money >= 0);//�����������������ƣ�����������Χ�򱨴�
//
//	int total = money;
//	int empty = money;
//
//	//�û�
//	while (empty / 2)
//	{
//		//2��ƿ��һƿ
//		total += empty / 2;
//		// 1ƿ����ƿ������ƿ ��1��ƿ��
//		// �ٺͺ�ʣ�µĿ�ƿ���
//		empty = empty / 2 + empty % 2;
//	}
//
//	printf("%d\n", total);
//	//�۲����õ��Ĺ���
//	/*if (money > 0)
//	{
//	printf("%d\n", 2*money-1);
//	}
//	else if (money == 0)
//	{
//		printf("%d\n", 0);
//	}*/
//
//	return 0;
//}