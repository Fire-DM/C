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

//int main()
//{
//	char arr1[20] = "hello ";
//	//my_strcat(arr1, "world");
//	//不能自己给自己追加，因为会把原来数组中的\0覆盖，导致无法结束，造成越界访问并死循环
//
//	new_my_strcat(arr1, arr1);//改良版本，可以自己追加自己
//	//new_my_strcat(arr1, "world");
//
//	printf("%s\n", arr1);//hello,world
//
//	return 0;
//}




//字符串大小比较 strcmp 
// 比较的是ascii码值
//返回值类型为int，大于返回>0的值，小于返回<0的值，等于返回0

//int main()
//{
//	char arr1[20] = "zhansan";
//	char arr2[20] = "lisi";
//
//
//	//比较两个字符串的大小（不是比较长度）
//	int ret = strcmp(arr1, arr2);
//	if (ret==0)
//	{
//		printf("==\n");
//	}
//	else if(ret >= 0)
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//
//	return 0;
//}


//写一个函数，实现strcmp的功能

//int main()
//{
//	char arr1[20] = "abcde";
//	char arr2[20] = "abcd";
//
//	int ret = my_strcmp(arr1, arr2);
//	//比较两个字符串的大小（不是长度）
//	if (ret==0)
//	{
//		printf("==\n");
//	}
//	else if(ret > 0)
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//
//	return 0;
//}



/////////////////////////////////////////////////////////////////////////
// strlen	strcpy	strcmp
//长度不受限制的字符串数组, 实际使用时并不安全，因为即使报错也会执行功能
/////////////////////////////////////////////////////////////////////////




/////////////////////////////////////////////////////////////////////////
//strncpy 拷贝	strnlen  求长度		strncmp  比较字符大小
//长度受限制的字符串数组, 实际使用时相对安全，因为报错时不会执行功能
// 它们的参数多了一个长度 size_t num
/////////////////////////////////////////////////////////////////////////

//int main()
//{
//		char arr1[20] = "abcd\0xxxxx";//用于验证
//		char arr2[] = "efg";
//		//更安全
//		//strncpy(arr1, arr2,5);//arr2字符不够会在末尾补\0
//		//strncat(arr1, arr2, 5);///arr2字符不够会在末尾补\0
//		//ano_strncpy(arr1, arr2, 5);//库函数参考写法
//
//		//模仿
//		my_strncpy(arr1, arr2,5);//第三个参数传负数时，会被转化为很大的一个正数
//		//my_strncat(arr1, arr2,5);//第三个参数传负数时，会被转化为很大的一个正数
//
//		printf("%s\n", arr1);
//
//		return 0;
//}


//写一个函数，实现strncmp的功能


//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "abcdef";
//
//	//int ret = strncmp(arr1, arr2, 5);
//
//	
//	int ret = my_strncmp(arr1, arr2, 5);
//
//	if (ret == 0)
//		printf("==\n");
//	else if(ret > 0)
//		printf(">\n");
//	else
//		printf("<\n");
//
//	return 0;
//}



//
//查找子串  strstr
//

//int main()
//{
//	//char str1[] = "mihoyo's games:genshin,hongkai:star rail";
//	//char str2[] = "star";
//	char str1[] = "abbbcde";
//	char str2[] = "bbc";
//
//	//char* ret = strstr(str1, str2);
//
//	//写一个函数，实现strstr的功能
//	char* ret = my_strstr(str1, str2);
//
//	if (ret == NULL)
//		printf("子串不存在");
//	else
//		printf("%s\n", ret);
//
//	return 0;
//}


//strtok
//char * strtok ( char * str, const char * delimiters )
//切割字符串,会改变原来的字符串，将被处理字符串的分隔符标记换成\0
// 一般用于临时拷贝的字符串
// str包含了0或者多个分隔符分割的标记,不为NULL时，strtok会找到str第一个标记，并保存它的位置
//为NULL时，函数将在同一个字符串被保存的位置开始，查找下一个标记
//字符串不存在标记，则返回NULL


//int main()
//{
//	char* sep = "@.";
//	char email[] = "caicai.caicai@www@abcde.com";
//	char cp[100] = { 0 };//初始化字符串内容为0时，数组的大小为固定值
//	strcpy(cp, email);
//	
//	
//	//代码繁杂
//	/*char* ret = strtok(cp, sep);
//	if (ret != NULL)
//		printf("%s\n", ret);
//
//	ret = strtok(NULL, sep);
//	if (ret != NULL)
//		printf("%s\n", ret);
//
//	ret = strtok(NULL, sep);
//	if (ret != NULL)
//		printf("%s\n", ret);
//
//	ret = strtok(NULL, sep);
//	if (ret != NULL)
//	printf("%s\n", ret);*/
//
//	char* ret = NULL;
//	for (ret = strtok(cp, sep);
//		ret != NULL;
//		ret = strtok(NULL, sep))
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}



//c语言中的库函数，在执行失败时，都会设置错误码
// 0 1 2 3 4 5 6 7 8

//
//strerror
//返回错误码，所对应的错误信息


//int main()
//{
//	//printf("%s\n", strerror(0)); //No error
//	//printf("%s\n", strerror(1));//Operation not permitted
//	//printf("%s\n", strerror(2));//No such file or directory
//	//printf("%s\n", strerror(3));//No such process
//	//printf("%s\n", strerror(4));//Interrupted function call
//	//printf("%s\n", strerror(5));//
//
//
//	//errno  - 语言设置的一个全局的错误码存放的变量
//  //FILE* pf = fopen("字符分类函数.jpg", "r");
//	FILE* pf = fopen("test.txt","r");//这里是相对路径
//	//打开成功，返回有效地址；失败，返回一个空指针
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));//
//		return 1;
//	}
//	else
//	{
//		;
//	}
//	return 0;
//}


//库函数-用于统一代码
//字符分类 字符转换
//


//int main()
//{
//	//int a = isspace(' ');//不是空白字符，返回0；其他返回非0
//	//printf("%d\n", a);
//
//	//int a = isdigit('2');//不是十进制数字，返回0；其他返回非0
//	//printf("%d\n", a);
//
//	//只能用于单个字符，非字母和原本就是大/小写不处理
//	printf("%c\n", tolower('A'));//大写变小写
//	printf("%c\n", toupper('a'));//小写变大写
//
//	return 0;
//}




//
//memcpy
//

int main()
{



	return 0;
}


