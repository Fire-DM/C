#define _CRT_SECURE_NO_WARNINGS
#include "repository.h"


//int main()
//{
//	//�ַ�ָ��
//	//char ch = 'w';
//	//char* pc = ch;
//
//	char* p = "abcdefg";//p����a�ĵ�ַ
//	//��ʱ"abcdefg"�ǳ����ַ��������ܸ���
//	//*p = 'w';//error
//	//printf("%s\n", p);//error
//	//const char* p = "abcdefg";//���Ա����ַ���
//
//
//	return 0;
//}


int main()
{
	//�ڴ����г����ַ������޷�����
	const char* p1 = "abcdef";
	const char* p2 = "abcdef";

	char arr1[] = "abcdef";
	char arr2[] = "abcdef";

	if (p1 == p2)
		printf("p1==p2\n");//*
	else
		printf("p1!=p2\n");

	if (arr1 == arr2)
		printf("p1==p2\n");
	else
		printf("p1!=p2\n");//*


	return 0;
}

