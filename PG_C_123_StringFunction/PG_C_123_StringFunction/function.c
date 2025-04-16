#define _CRT_SECURE_NO_WARNINGS
#include "head.h"


//写一个函数，实现strlen的功能

//计数器方法_strlen
size_t my_strlen_by_calculation(const char* str)
{
	size_t count = 0;
	assert(str);
	while (*str != '\0')
	{
		count++;//不为\0就+1
		str++;
	}
	return count;
}


//指针-指针_strlen
size_t my_strlen_by_Sub(const char* str)
{
	assert(str);
	char* start = str;
	while (*start != '\0')
	{
		start++;
	}

	return (start - str);
}


//递归_strlen
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
	
	//找到dest的\0的地址
	int count = 0;
	//while (*dest++ != '\0')//error,最后不执行循环时也会dest++，多走了一步
	while (*dest != '\0')
	{
		dest++;
		//得到长度，自己给自己追加时会覆盖\0，所以需要记录长度
		count++;
	}

	//拷贝
	while (count--)
	{
		*dest++ = *src++;
	}
	//在末尾加上\0
	*++dest = '\0';

	return ret;
}


//写一个函数，实现strcmp的功能
int  my_strcmp(const char* str1,const char*  str2)
{
	assert(str1 && str2);
	//找到首个不相等且不为\0的字符
	while (*str1 == *str2 && *str1 != '\0')
	{
		str1++;
		str2++;
	}
	//返回它们的差值
	return (*str1 - *str2);
}


//写一个函数，实现strncpy的功能
char* my_strncpy(char* dest, const char* src, size_t num)
{
	//int n = 0;
	assert(dest && src);
	//用num来限制拷贝的字符数

	while(num--)
	{
		//应对src字符数量小于num的情况
		if (*src != '\0')
		{
			*dest = *src;
			dest++;
			src++;
		}
		//此时*src= '\0'
		else
		{
			*dest++ = *src;
		}
		//n++;
	}

	//while (num && (*dest = *src) != '\0')	//拷贝字符串
	//	num--;

	//if (num)				//如果num>0，则用\0填充余下字符，直到num=0
	//	while (--num)
	//		*dest = '\0';
}



//写一个函数，实现strncat的功能
//不能自己追加自己
char* my_strncat(
	char* dest,
	const char* src,
	size_t num)
{
	char* start = dest;
	//找到目标字符串dest的\0的地址
	while (*dest++)
		;
		dest--;

	//num限制追加字符的个数
	while (num--)
	{
		//应对src字符数量小于num的情况
		if (*src != '\0')
		{
			*dest++ = *src++;
		}
		//此时*src= '\0'
		//strncat处理src字符数小于num时，只会在追加完后的字符串末尾加一个\0
		else
		{
			*dest = '\0';
			return start;
			//break;

			//下面的写法打印结果相同，但dest字符串会有所不同（仅限src字符数小于num的情况）
			//*dest++ = *src++;
		}

		/////////////
		//库函数写法
		//if((*dest++=*src++)=='\0')
			//return start;
	}
	//*dest = '\0';
	////////////

	return start;
}


//strncpy——库函数写法
char* __cdecl ano_strncpy(
    char* front,
    const char* back,
    size_t count
)
{
    char* start = front;

    while (count && (*front++ = *back++) != '\0')       //copy string  拷贝
        count--;

    if (count)                      //pad out with zeroes      用零填充\补零
        while (--count)
            *front++ = '\0';

    return (start);
}