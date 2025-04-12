#define _CRT_SECURE_NO_WARNINGS
#include "head.h"

//系统默认为x64


//
//写一个函数，实现升序、降序功能
//

//int main()
//{
//	//int arr[] = { 1,6,45,8,9,32,4,0,1 };
//	//数组元素个数
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	char arr[] = "edcba";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//
//	bubble_sort(arr,//首元素地址
//		sz,//数组元素个数
//		sizeof(arr[0]),//元素大小
//			cmp_int);//函数指针——比较函数
//
//	return 0;
//}


//数组名和指针


//int main()
//{
//	//sizeof是求对象/类型所占内存的大小，单位为字节
//	//strlen是求字符串的长度，读取到'\0'就停止，且不会计入\0
//	//指针变量（地址）的大小由系统决定，在32位中大小是4字节，在64位中是8字节
//
//
//	char arr1[] = { 'a','b','c','d' };//需要手动加一个'\0'
//	char arr2[] = "abcd";//默认加一个'\0'
//	
//
//	printf("%u\n", sizeof(arr1));//4
//
//	printf("%u\n", sizeof(arr2));//5 --> 这里的arr2是整个数组
//	printf("%u\n", sizeof(arr2+1));//8  --> 这里的arr2是首元素地址
//	printf("%u\n", sizeof(&arr1));//8
//	printf("%u\n", sizeof(&arr1+1));//8
//
//
//	printf("%u\n", strlen(arr1));//随机值A
//	printf("%u\n", strlen(arr1+1));//随机值A-1
//	printf("%u\n", strlen(arr2));//4 
//	printf("%u\n", strlen(arr2+1));//3 
//
//	//printf("%u\n", strlen(arr2[0]));//err
//	//printf("%u\n", strlen(*arr2));//err 
//	// strlen的参数是char* str，
//	// 若输入非地址的参数，会访问以其ASCII码值所在的地址
//	// strlen(arr2[0]) -> strlen('a') -> strlen(97)
//	// 但前面的代码并未向内存申请这一块空间，97就成了野指针
//
//	return 0;
//}


//int main()
//{
//	//sizeof是求对象/类型所占内存的大小，单位为字节
//	//strlen是求字符串的长度，读取到'\0'就停止，且不会计入\0
//	//指针变量（地址）的大小由系统决定，在32位中大小是4字节，在64位中是8字节
//
//	char* p = "abcde";//将a的地址存在p中
//
//	printf("%u\n", sizeof(p));//8
//	printf("%u\n", sizeof(p+1));//8
//	printf("%u\n", sizeof(*p));//1
//	printf("%u\n", sizeof(p[0]));//1
//	printf("%u\n", sizeof(&p));//8
//	printf("%u\n", sizeof(&p+1));//8
//	printf("%u\n", sizeof(&p[0] + 1));//8
//
//	printf("\n");
//
//	printf("%u\n", strlen(p));//5
//	printf("%u\n", strlen(p + 1));//4
//	//printf("%u\n", strlen(*p));//err
//	//printf("%u\n", strlen(p[0]));//err
//	printf("%u\n", strlen(&p));//随机值a
//	printf("%u\n", strlen(&p + 1));//随机值b  -->&p是取p的地址，是一个新地址
//	//a的地址是0x00007FF7CFCAAC18,也就是p,&p[0]
//	//由于strlen的参数为char* str，它在读取地址时以1字节为单位，、
//	//64位的指针变量为8字节，strlen从第一个字节开始读取，中间可能会遇见'\0'
//	//所以使用strlen时&p与&p+1相差一个随机数
//
//	printf("%u\n", strlen(&p[0] + 1));//4  -->&p[0]是取a的地址  &p[0] -> p
//
//	return 0;
//}


//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%u\n", sizeof(a));//48
//	printf("%u\n", sizeof(a[0][0]));//4
//	printf("%u\n", sizeof(a[0]));//16 
//	//a[0]是第一行的数组名，在sizeof里表示第一行数组的
//	//a[0][0]可以理解为(a[0])[0],就像arr[0]
//	printf("%u\n", sizeof(a[0]+1));//8  --> 第一行第二个元素的地址 &a[0][0]
//	printf("%u\n", sizeof(*(a[0]+1)));//4
//	printf("%u\n", sizeof(a + 1));//8  --》第二行元素的地址
//	printf("%u\n", sizeof(*(a + 1)));//16  -->对第二行地址的解引用，拿到的是第二行元素
//	printf("%u\n", sizeof(&a[0] + 1));//8 --》对第一行的数组名取地址再加一，得到第二行的地址
//	printf("%u\n", sizeof(*(&a[0] + 1)));//16 
//	printf("%u\n", sizeof(*a));//16  --》
//	printf("%u\n", sizeof(*a[0]));//4  --》a[0]是第一行一维数组的数组名，*a[0]是第一行首元素
//	printf("%u\n", sizeof(a[3]));//16  -->第四行的数组名，在此处不会造成越界
//
//	//sizeof(类型)，它只会读取参数的类型，不在乎内容
//
//
//	return 0;
//}



