#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

//一维数组

//int main()
//{
//	//数组：一组相同元素的集合
//	int arr[10] = { 0 };
//	char ch[10] = { 'a' };
//	double date[10] = { 1.1 };
//
//	//在C99标准之前，数组大小必须是常量或常量表达式
//	//在C99标准之后，数组大小可以是变量，用以支持变长数组
//
//	//不完全初始化,剩余元素默认为0
//	int arr1[10] = { 1,2.3,4,5 };
//
//	//a b c 0 0 0 0 0 0 0 
//	char ch1[10] = { 'a','b','c'};//初始化元素个数为3
//	//a b c \0 0 0 0 0 0 0
//	char ch2[10] = "abc";//初始化元素个数为4——'a' 'b' 'c' '\0'
//
//	//初始化元素个数决定数组大小
//
//	return 0;
//}

//int main()
//{
//	//数组的创建
//	//type_t arr_name [const_n]
//	//type_t是数组元素类型
//	//const_n是一个常量表达式，用来指定数组大小
//	//[]是下表引用符
//
//	//一维数组在内存中是连续存放的
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	//计算数组大小
// 
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//顺序打印
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");//换行
//	//倒序打印
//	for (i = sz-1; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	//打印元素的地址
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n ", i, &arr[i]);
//	}
//
//	return 0;
//}


//二维数组
//每个元素都是一维数组的数组
//数组下标规定从0开始，若有n个元素，最后一个元素下标为n-1
// 数组越界：数组的下标小于0，或大于n-1，就是数组访问越界

//int main()
//{
//	//缺少的元素用0来代替
//	//不能省略列数
//	//行数和列数都从零开始
//	int arr1[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };//三行四列
//	int arr2[3][4] = { {1,2},{5,6,7,8},{9,10,11,12} };//三行四列
//	char ch[5][10] = {'0'};//五行十列
//	//通过下标定位元素
//	printf("%d\n", arr1[2][2]);
//
//	return 0;
//}

//int main()
//{
//	//二维数组在内存中是连续存放的
//	//列数越界时会按顺序读取元素，行越界则是随机数
//	int i = 0;
//	int arr1[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };//三行四列
//	//打印地址
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf(" &arr1[%d][%d] = %p\n", i, j, &arr1[i][j]);
//		}
//	}
// 
//	return 0;
//}


//
//冒泡排序
//核心思想：两个相邻元素进行比较
//一趟冒泡排序让一个数据来到它最终应该出现的位置上

//1.数组
//void bubble_sort(int arr[],int n)
//2.指针
//void bubble_sort(int* arr,int n)//数组传递的是首元素的地址
//{
//	//趟数
//	int i = 0;
//	for (i = 0; i < n - 1; i++)
//	{
//		//一趟冒泡序列
//		int j = 0;
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j+1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	//把数组的元素排成升序
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int j = 0;
//	//0 1 2 3 4 5 6 7 8 9
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//冒泡排序的算法，对数组进行排序
//	bubble_sort(arr,sz);
//	for (j = 0; j < sz; j++)
//	{
//		printf("%d ", arr[j]);
//	}
//
//
//	return 0;
//}


//
//数组名能表示首元素的地址
// 但有两个例外：
// 1.	sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组大小，单位是字节
// 2.	&数组名，这里的数组名表示整个数组，取出的是整个数组的地址
//

//int main()
//{
//	int arr[10];
//	printf("%p\n", arr); //首元素的地址
//	printf("%p\n", arr+1);
//	printf("-------------------\n");
//
//	printf("%p\n", &arr[0]);//首元素的地址
//	printf("%p\n", &arr[0]+1);
//	printf("-------------------\n");
//
//	printf("%p\n", &arr);//数组的地址
//	printf("%p\n", &arr+1);
//
//	int n = sizeof(arr);//40
//	printf("%d\n", n);
//
//	return 0;
//}

//二维数组的数组名
//数组名表示首元素（第一行）的地址

//int main()
//{
//	//sizeof(arr)是整个数组的地址
//
//	int arr[4][5];
//	int row = sizeof(arr) / sizeof(arr[0]);//行数 = 整个数组大小 / 一行的大小
//	int col = sizeof(arr[0]) / sizeof(arr[0][0]);//列数 = 一行的大小 / 一个元素的大小
//
//
//	printf("%p\n", arr); //首元素（第一行）的地址
//	printf("%p\n", arr + 1);
//
//
//	return 0;
//}



