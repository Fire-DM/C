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
char* my_strncpy(
	char* dest,
	const char* src, 
	size_t num
)
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
	size_t num
)
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




//写一个函数，实现strncmp的功能
int my_strncmp(const char* dest, const char* src, size_t num)
{
	assert(dest && src);
	while (num--)//最多循环num次
		if (*dest++ != *src++)		//找到第一次不相等，返回它们的差值
			return (*--dest - *--src);

	return 0;		//如果字符都相同，返回0
}



//写一个函数，实现strstr的功能
char* my_strstr(
		const char* str1, 
		const char* str2
)
{
	//多次匹配才能找到
	//abbbc -> str1
	//bbc -> str2

	assert(str1, str2);
	//不适合改变str1和str2的值
	const char* s1 = str1;
	const char* s2 = str2;
	const char* tmp = str1;

	while (*tmp)
	{
		s1 = tmp;//用str1的每一位去和str2比较
		s2 = str2;//重置s2
		while (*s1 !='\0' && *s2 != '\0' && *s1++ == *s2++)
		{
			if (*s2 == '\0')
				return (char*)tmp;
		}
		
		tmp++;
	}

	//没有子串就返回空指针
	return NULL;
}




//KMP算法
//用于实现在一个字符串中查找子字符串
//效率更高

//void computeLPSArray(char* pattern, int M, int* lps) {
//	int len = 0;  // 当前最长相同前后缀长度
//	lps[0] = 0;   // 第一个字符的前后缀长度为0
//	int i = 1;
//
//	while (i < M) {
//		if (pattern[i] == pattern[len]) {
//			len++;
//			lps[i] = len;
//			i++;
//		}
//		else {
//			if (len != 0) {
//				len = lps[len - 1];
//			}
//			else {
//				lps[i] = 0;
//				i++;
//			}
//		}
//	}
//}
//
//
//void KMPSearch(char* pattern, char* text,int M) 
//{
//	int N = strlen(text);
//
//	// 创建部分匹配表
//	int lps[1000];//vs不支持边长数组,所以设成足够大
//	//computeLPSArray(pattern, M, lps);
//
//	int i = 0;  // text的索引
//	int j = 0;  // pattern的索引
//
//	while (i < N) {
//		if (pattern[j] == text[i]) {
//			j++;
//			i++;
//		}
//
//		if (j == M) {
//			printf("找到匹配位置: %d\n", i - j);
//			j = lps[j - 1];
//		}
//		else if (i < N && pattern[j] != text[i]) {
//			if (j != 0) {
//				j = lps[j - 1];
//			}
//			else {
//				i++;
//			}
//		}
//	}
//}



//实现memcpy的功能，将一组数据复制到另一组数据中
void* my_memcpy(void* dest,
	const void* src,
	size_t num )
{
	assert(dest && src);
	void* ret = dest;
	while (num--)
	{
		//void*类型的数据不能直接解引用
		//复制每一个字节
		*((char*)dest)++ = *((char*)src)++;
	}
	return ret;
}


