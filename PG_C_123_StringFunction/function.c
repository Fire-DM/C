#define _CRT_SECURE_NO_WARNINGS
#include "head.h"


//写一个函数，实现strlen的功能

//计数器方法
size_t my_strlen_by_calculation(const char* str)
{
	size_t count = 0;
	assert(str);
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}


//指针-指针
size_t my_strlen_by_Sub(const char* str)
{
	char* start = str;
	assert(str);
	while (*str != '\0')
	{
		str++;
	}

	return str - start;
}


//递归
size_t my_strlen_by_recursion(const char* str)
{
	assert(str);
	//不为\0则+1
	if (*str != 0)
	{
		return my_strlen_by_recursion(++str)+1;
	}
	//遇到\0时就进行归
	else
	{
		return 0;
	}

}


//写一个函数，实现strcpy的功能
//不是strcpy的原理
char* my_strcpy(char* dest, const char* src)
{
	//不能为空指针
	assert(dest && src);
	char* ret = dest;
	while(*dest++ = *src++)//优化，既赋值又判断
	{
		;
		//*dest++ = *src++
	}
	//*dest= *src;
	return ret;
}


//写一个函数，实现strcat的功能
//返回值为目标数组起始地址
char* my_strcat(char* dest, const char* src)
{
	assert(dest && src);
	char* ret = dest;
	
	//求出目标字符串的结尾\0
	//int count = 0;
	//while (*dest++ != '\0')//error,最后不执行循环时也会dest++，多走了一步
	while (*dest != '\0')
	{
		dest++;
		//count++;
	}
	//拷贝
	while (*dest++ = *src++)
		;

	return ret;
}



//自己给自己追加
char* new_my_strcat(char* dest, const char* src)
{
	assert(dest && src);
	char* ret = dest;
	
	//求出目标字符串的结尾\0
	int count = 0;
	//while (*dest++ != '\0')//error,最后不执行循环时也会dest++，多走了一步
	while (*dest != '\0')
	{
		dest++;
		//得到长度
		count++;
	}

	//拷贝
	while (count--)
	{
		*dest++ = *src++;
	}

	*++dest = '\0';

	return ret;
}

