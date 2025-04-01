#define _CRT_SECURE_NO_WARNINGS
#include "repository.h"


//int main()
//{
//	//字符指针
//	//char ch = 'w';
//	//char* pc = ch;
//
//	char* p = "abcdefg";//p里存放a的地址
//	//此时"abcdefg"是常量字符串，不能更改
//	//*p = 'w';//error
//	//printf("%s\n", p);//error
//	//const char* p = "abcdefg";//可以保护字符串
//
//
//	return 0;
//}


int main()
{
	//内存中有常量字符串，无法更改
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

