#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


//int cnt = 0;
//int fib(int n)
//{
//	cnt++;
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return 2;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//
//void main()
//{
//	fib(8);
//	//计算fib进行了几次递归
//	printf("%d", cnt);
//}


//
//  ++操作符优先级高于*
//


//
//求最小公倍数
//

//int main()
//{
//	//1.输入
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	//2.看是否为倍数，若是，比较大小
//	if ((num1 % num2) == 0 || (num1 % num2) == 0)
//	{
//		if (num1 > num2)
//			printf("%d\n", num1);
//		else
//			printf("%d\n", num2);
//	}
//	//不是，将这两数相乘
//	else
//		printf("%d\n", num1 * num2);
//
//	return 0;
//}


//int main()
//{
//	//1.输入
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//
//	//2.比较大小，让较大数及其更大的数模上较小数
//	int m = (num1 > num2 ? num1 : num2);
//
//	while(1)
//	{
//		if (m % num1 == 0 && m % num2 == 0)
//		{
//			break;
//		}
//		m++;
//	}
//
//	//3.打印
//	printf("%d\n", m);
//
//	return 0;
//}


//int main()
//{
//	//1.输入
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//
//	//让num1*i，若它%num2的结果为0时，num1*i为最小公倍数
//	int i = 1;
//	while (num1 * i % num2)
//	{
//		i++;
//	}
//
//	printf("%d\n", num1 * i);
//
//	return 0;
//}


//
// 将字符串倒序
//

int main()
{
	//1.读取
	char str[100];
	//fgets需要的参数：输入地址，大小，输入流
	//stdin为<stdio.h>中的标准输入流，即从键盘读取数据
	//想要读取文件数据则用FILE*
	//举例：FILE* FP = fopen("input.txt", "r");
	//fgets(str, sizeof(str), fp);
	//r表示只阅读，还有w,a

	if (fgets(str, sizeof(str), stdin) == NULL)
	{
		printf("输入错误，请重新输入：");
	}
	str[strcspn(str, "\n")] = '\0';//去除换行符

	int left = 0;
	int right = strlen(str) - 1;//strlen求数组的字符串的长度

	while (left < right)
	{
		char tmp = str[left];
		str[left] = str[right];
		str[right] = tmp;
		left++;
		right--;
	}

	printf("%s\n", str);

	return 0;
}