#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>
//#include<.h>

//�����ĵ���

//void new_line()
//{
//	printf("hehe\n");
//}
//
//void three_line()
//{
//	int i = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		//���õ�һ������
//		new_line();
//	}
//}
//
//int main()
//{
//	three_line();
//
//	return 0;
//}

//��ʽ����

//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n", len);
//
//	//��ʽ����
//	printf("%d\n", strlen("abcdef"));//strlen����ֵ����Ϊsize_t����printf�����int���͵Ĳ���
//
//	printf("%d\n", printf("%d", printf("%d", 43)));//���Ϊ4321,	printf�ķ���ֵ�Ǵ�ӡ���ַ�����������Ϊint
//		
//	return 0;
//}

//int main(void)//��ȷmain��������Ҫ����
//{
//
//	return 0;
//}

//main�����в���
//int main(int argc, char* argv[], char *envp[])
//{
//
//	return 0;
//}



//�����������Ͷ���

//���������������������������ͣ��������ͣ�
//������Add����������int����������int,int��x��y��д�ɲ�д��

//int Add(int x, int y );
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	scanf("%d %d", &a, &b);
//
//	//�ӷ�
//	int sum = Add(a, b);
//	//��ӡ
//	printf("%d\n", sum);
//
//	return 0;
//}
////�����Ķ���
////ʵ���������ĺ�
//int Add(int x, int y)
//{
//	return x + y;
//}

//���԰Ѻ������������ڱ���ļ���,ʹ��ʱ��Ҫinclude����
//���紴��һ������add��ʵ�����������

//#include "add.h"//�ǿ����ͷ�ļ���""
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	scanf("%d %d %d", &a, &b, &c);
//
//	int sum = add(a, b, c);//����ģ����������ļ���
//
//	printf("%d\n", sum);
//
//	return 0;
//}



//
//������д��һ�������й�˾��ʹ�����꣬�㲻��й¶Դ���룬��ʱһ�ַ�����ʹ�þ�̬�⣨����ֻ���Ǽ򵥵ĳ��򣩣�
//1.�������������Ͷ���ֱ����.h��.c�ļ���
//2.����Ŀ�ĸ���Ϊlib�ļ�������-��������-����-��������-����Ϊlib��
//3.���ļ���ͷ�ļ�.h�ͳ����ļ�.c������������ʹ��
//4.������ʹ��ʱ��Ҫ���뾲̬��	#pragma comment(lib,"name.lib")
//




//
//�����ݹ�recursion
//���壺�����������ı�̼���		���ģ����»�С
//ȱ��������ջ������Ч��

//����һ������ֵ���޷��ţ�����˳���ӡ����ÿһλ
//����1234	��ӡ��1 2 3 4

//��ֳ�Сģ��
//print(1234)
//print(123) 4
//print(12) 3 4
//print(1) 2 3 4
//1 2 3 4

//void print(unsigned int x)
//{
//		if (x > 9)
//		{
//			//�����ݹ�
//			//��Ϊ���ݺͻع�
//			//����1234����9������10����x=123�����뺯���ݹ飬���ǵ�һ�㺯��
//			//123����9��123�ٴγ���10����x=12�����뺯���ݹ飬���ǵڶ��㺯��
//			//12����9��12�ٴγ���10����x=1�����뺯���ݹ飬���ǵ����㺯��
//			//1С��9����ӡ1������㺯������
//			//�����㺯������ִ�У���ӡ2
//			//�ڶ��㺯������ִ�У���ӡ3
//			//��һ�㺯������ִ�У���ӡ4
//			print(x / 10);
//		}
//		//��ӡ��ĩλ����
//		printf("%d ", x % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);//�޷���������%u���޸�����
//
//	print(num);
//	
//	return 0;
//}

//��д��������������ʱ���������ַ�������

//int my_strlen(char str[])
//int my_strlen(char* str)//����Ĵ����õ�ַ����ָ��������
//{
//	int count = 0;//��������ʱ����
//	while (*str != '\0')//�����*strָ���Ǵ��ݹ������������Ԫ��
//	{
//		count++;
//		str++;//����һ���ַ�
//	}
//	return count;
//}

//�ݹ����
//������
// ����'\0'����
//my_strlen("abc")
//1+my_strlen("bc")
//1+1+my_strlen("c")
//1+1+1+my_strlen("")
//1+1+1+0

//int my_strlen(char* str)
//{
//	if (*str != '\0')//�����*strָ�������Ԫ��
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//
//	int len = my_strlen(arr);
//
//	printf("%d\n", len);
//
//	return 0;
//}

//дһ����������n�Ľ׳�

//n*fac(n-1)
//n*(n-1)*fac(n-2)
//......
//n*(n-1)*...*1

//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//
//	scanf("%d", &n);
//
//	int ret = fac(n);
//	printf("%d\n", ret);
//
//	return 0;
//}

//���n��쳲���������
//1 1 2 3 5 8 13 21 34 55...
//�ӵ����ʼ��ÿ�����ֵ����ǰ������֮��

//int count = 0;
//�������ָ�������������ظ����㵼��Ч�ʵ���
//int Fib(int n)
//{
//	if (n == 3)
//		count++;
//	if (n <= 2 && n > 0)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int i = 1;
//
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		for (i = 1; i <= (n - 2); i++)
//		{
//			//��n�����ǰ����֮��
//			int c = a + b;
//			//ÿ��ѭ����ǰ����Ĵ���+1������a��b��n��ǰ����
//			a = b;
//			b = c;
//			//�ó�����ͷ���c
//			if (i == (n - 2))
//				return c;
//		}
//	}
//}

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		while (n >= 3)
//		{
//			//��n�����ǰ����֮��
//			c = a + b;
//			//ÿ��ѭ����ǰ����Ĵ���+1������a��b��n��ǰ����
//			a = b;
//			b = c;
//			n--;
//		}
//		//�ó�����ͷ���c
//		return c;
//	}
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = Fib(n);
//
//	printf("%d\n", ret);
//	//printf("%d\n", count);
//
//	return 0;
//}

//��ŵ������
//��A,B,C�������ӣ�A��������n�����ӣ����ϵ������α�С
//���ڽ���B�����ӷŵ�C�ϣ�˳��һ�£�һ�η�һ��

//˳�����ϵ���
//1.��A����n-1�����ӷ���B�ϣ��ٽ���n�����Ӹ�C
//2.��B����n-2�����ӷ���A�����ϣ��ٽ���n-1�����Ӹ�C
//......
//n.����1�����Ӹ�C

void Hanoi(char* p, int n)
{	
	char arr2[] = { 0 };

	if (n - 1 > 0)
	{
		Hanoi(p, n - 1);
	}


}

int main()
{
	char arr1[] = "abcdefg";
	int len = strlen(arr1);

	Hanoi(arr1, len);

	return 0;
}