#define _CRT_SECURE_NO_WARNINGS
#include "head.h"

//
//字符串函数
//


//int main()
//{
//	//求字符串长度  strlen
//	//strlen返回值为size_t，是无符号整型
// 
//	char str1[] = "abcdef";//abcdef\0
//	char str2[] = { 'a','b','c','d','e','f'};//abcdef
//	char str3 =  NULL ;//abcdef\0
// 
//	//int len1 = strlen(str1);//被强制转换为int
//	//int len2 = strlen(str2);//这种代码求不出预期结果，无意义
//	//printf("%d\n", len1);//6
//	//printf("%d\n", len2);//随机值
//
//
//	//写一个函数，实现strlen的功能
//	//size_t len = my_strlen_by_calculation(str1);
//
//	//size_t len = my_strlen_by_Sub(str1);
//
//	size_t len = my_strlen_by_recursion(str1);
//
//	
//	printf("%u\n", len);//6
//
//	return 0;
//}



//int main()
//{
//	//字符串拷贝 strcpy
//	//遇到\0就停止拷贝，同时会把\0拷贝过来
//	//目的区域必须可变（可以修改），可以用数组arr[]
//
//	char name[20] = { 0 };
//	char str[] = { 'b','i','t'};
//	//name = "zhangsan";//error
//	//*name = "zhangsan";//error
//	strcpy(name, "zhangsan");
//	//strcpy(name, str);//error，str没有\0，有越界的隐患
//	printf("%s\n", name);
//
//
//	return 0;
//}


//写一个函数，实现strcpy的功能
//strcpy返回值为目的数组的地址

//int main()
//{
//	const char str1[] = "abcdef";
//	char str2[20] = { 0 };//数组没有范围的话，会报错
//	my_strcpy(str2, str1);
//	printf("%s\n", str2);//abcdef
//
//	return 0;
//}


//
//字符串追加 strcat
// 注意事项同strcpy
//

int main()
{
	char arr1[20] = "hello ";
	//my_strcat(arr1, "world");
	//不能自己给自己追加，因为会把原来数组中的\0覆盖，导致无法结束，造成越界访问并死循环

	new_my_strcat(arr1, arr1);//改良版本，可以自己追加自己
	//new_my_strcat(arr1, "world");

	printf("%s\n", arr1);//hello,world

	return 0;
}