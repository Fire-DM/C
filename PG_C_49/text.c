#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


#include "Function.h"

//
//char也属于整型家族，因为字符储存的时候，存储的是ASCII值
//

//函数：将输入的数降序排列
//1.假设一个数最大max，让它和另外的数比较
//2.max大于它就不变；max小于它，就把它赋值给max



//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf(" %d %d %d", &a, &b, &c);
//
// 三数排序并打印（降序）
//	in_order(a, b, c);
//
//	return 0;
//}

//打印1-100间的所有三的倍数

//int main()
//{
//	int i = 0;
//	/*for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		printf("%d ", i);
//	}*/
//
//	for (i = 3; i <= 100; i += 3)
//	{
//		printf("%d ", i);
//
//	}
//	return 0;
//}

//给两个数，求这两个数的最大公约数
// 1.用较小的值作为除数，然后递减求公约数

//int main()
//{
//	int a = 0;
//	int b = 0;
//	//输入
//	scanf("%d %d", &a, &b);
//
//	int ret = max_common_divisor(a, b);
//	printf("最大公约数为%d\n", ret);
//
//	return 0;
//}

//数出1到100所有整数中数字9的个数
//1.个位为9
//2.十位为9

//int main()
//{
//	int i = 0;
//	//计算个数
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//判断个位有没有9
//		if (i % 10 == 9)
//			count++;
//		//判断十位有没有9
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d ", count);
//	return 0;
//}

//计算1/1-1/2+1/3-1/4...+1/99-1/100的值并打印
//1.分子为1
//2.分母为1到100
//3.分母为奇数则相加，分母为偶数则相减

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;//用于改变项的符号
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * (1.0 / i);//这里数据必须是浮点型，否则会被强制转换成整型
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//
//	return 0;
//}

//求十个整数的最大值
//1.假设第一个数最大
//2.用第一个数和其余数比较，将更大值赋值给第一个数

//int main()
//{
//	int max = 0;
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr[10] = { 0 };//当不指定数组元素个数时，会根据初始化内容来推算元素的个数
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//		scanf("%d", &arr[i]);//数组中的单个元素的地址
//
//	for (i = 1; i < 10; i++)
//	{
//		//用第一个数和其余数比较，将更大值赋值给第一个数
//		max = arr[0] > arr[i] ? arr[0] : arr[i];
//	}
//	printf("%d\n", max);
//
//	return 0;
//}

//输出九九乘法表，
//1.规定表达式：列数 * 行数 = 结果
//2.九次循环，每次打印一行/一列

//int main()
//{
//	int row = 1;//行数
//	//打印九行
//	for (row = 1; row <= 9; row++)
//	{
//		//打印一行
//		int col = 1;//列数
//
//		for (col = 1; col <= row; col++)
//		{
//			int sum = row * col;//结果
//
//			printf("%d*%d=%d\t", col, row, sum);
//			//printf("%d*%d=%-3d", col, row, sum);
//		}
//		//最后一个式子换行
//		printf("\n");
//	}
//
//	return 0;
//}

//写一个函数，打印九九乘法表，行数和列数自己指定

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	print_table(n); 
//
//	return 0;
//}

//返回两个值及多个值

//形参用两个数组
//void text1(int arr[])
//{
//	arr[0] = 1;//arr[0] -> *(arr+0)  编译器的理解，地址数相加
//	arr[1] = 2;
//}
//
////形参用两个指针
//void text2(int* px,int* py)
//{
//	*px = 3;
//	*py = 4;
//}
//
////用两个全局变量
//int a = 0;
//int b = 0;
//void text3()
//{
//	a = 5;
//	b = 6;
//}
//
//int main()
//{
//	int arr[2] = { 0 };
//	int x = 0;
//	int y = 0;
//
//	text1(arr);//传递的是地址
//	text2(&x, &y);//传递的是地址
//	text3();
//
//	return 0;
//}