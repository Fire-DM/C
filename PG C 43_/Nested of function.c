#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>
//#include<.h>

//函数的调用

//void new_line()
//{
//	printf("hehe\n");
//}
//
//void three_line()
//{
//	int i = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		//调用第一个函数
//		new_line();
//	}
//}
//
//int main()
//{
//	three_line();
//
//	return 0;
//}

//链式访问

//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n", len);
//
//	//链式访问
//	printf("%d\n", strlen("abcdef"));//strlen返回值类型为size_t，但printf最好用int类型的参数
//
//	printf("%d\n", printf("%d", printf("%d", 43)));//结果为4321,	printf的返回值是打印的字符个数，类型为int
//		
//	return 0;
//}

//int main(void)//明确main函数不需要参数
//{
//
//	return 0;
//}

//main函数有参数
//int main(int argc, char* argv[], char *envp[])
//{
//
//	return 0;
//}



//函数的声明和定义

//函数的声明（函数名，返回类型，参数类型）
//函数名Add，返回类型int，参数类型int,int（x和y可写可不写）

//int Add(int x, int y );
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	scanf("%d %d", &a, &b);
//
//	//加法
//	int sum = Add(a, b);
//	//打印
//	printf("%d\n", sum);
//
//	return 0;
//}
////函数的定义
////实现两个数的和
//int Add(int x, int y)
//{
//	return x + y;
//}

//可以把函数和声明放在别的文件里,使用时需要include引入
//比如创建一个函数add，实现三个数相加

//#include "add.h"//非库里的头文件用""
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	scanf("%d %d %d", &a, &b, &c);
//
//	int sum = add(a, b, c);//函数模块放在其他文件了
//
//	printf("%d\n", sum);
//
//	return 0;
//}



//
//假如你写了一个程序，有公司想使用两年，你不想泄露源代码，此时一种方法是使用静态库（这里只考虑简单的程序）：
//1.将函数的声明和定义分别放在.h和.c文件中
//2.将项目的更改为lib文件（属性-配置属性-常规-配置类型-更改为lib）
//3.将文件（头文件.h和程序文件.c）交付，让买方使用
//4.提醒买方使用时需要导入静态库	#pragma comment(lib,"name.lib")
//




//
//函数递归recursion
//定义：程序调用自身的编程技巧		核心：大事化小
//缺点是容易栈溢出或低效率

//接受一个整型值（无符号），按顺序打印它的每一位
//输入1234	打印：1 2 3 4

//拆分成小模块
//print(1234)
//print(123) 4
//print(12) 3 4
//print(1) 2 3 4
//1 2 3 4

//void print(unsigned int x)
//{
//		if (x > 9)
//		{
//			//函数递归
//			//分为传递和回归
//			//输入1234大于9，除以10，得x=123，进入函数递归，这是第一层函数
//			//123大于9，123再次除以10，得x=12，进入函数递归，这是第二层函数
//			//12大于9，12再次除以10，得x=1，进入函数递归，这是第三层函数
//			//1小于9，打印1，最里层函数结束
//			//第三层函数继续执行，打印2
//			//第二层函数继续执行，打印3
//			//第一层函数继续执行，打印4
//			print(x / 10);
//		}
//		//打印最末位数字
//		printf("%d ", x % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);//无符号整型用%u（无负数）
//
//	print(num);
//	
//	return 0;
//}

//编写函数不允许创建临时变量，求字符串长度

//int my_strlen(char str[])
//int my_strlen(char* str)//数组的传参用地址，即指针来接收
//{
//	int count = 0;//计数，临时变量
//	while (*str != '\0')//这里的*str指的是传递过来的数组里的元素
//	{
//		count++;
//		str++;//找下一个字符
//	}
//	return count;
//}

//递归求解
//拆分求解
// 读到'\0'结束
//my_strlen("abc")
//1+my_strlen("bc")
//1+1+my_strlen("c")
//1+1+1+my_strlen("")
//1+1+1+0

//int my_strlen(char* str)
//{
//	if (*str != '\0')//这里的*str指数组里的元素
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//
//	int len = my_strlen(arr);
//
//	printf("%d\n", len);
//
//	return 0;
//}

//写一个函数计算n的阶乘

//n*fac(n-1)
//n*(n-1)*fac(n-2)
//......
//n*(n-1)*...*1

//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//
//	scanf("%d", &n);
//
//	int ret = fac(n);
//	printf("%d\n", ret);
//
//	return 0;
//}

//求第n个斐波那契数列
//1 1 2 3 5 8 13 21 34 55...
//从第三项开始，每个项的值等于前两个项之和

//int count = 0;
//计算次数指数增长，大量重复运算导致效率低下
//int Fib(int n)
//{
//	if (n == 3)
//		count++;
//	if (n <= 2 && n > 0)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int i = 1;
//
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		for (i = 1; i <= (n - 2); i++)
//		{
//			//第n项等于前两项之和
//			int c = a + b;
//			//每次循环让前两项的次序+1，即让a和b是n的前两项
//			a = b;
//			b = c;
//			//得出结果就返回c
//			if (i == (n - 2))
//				return c;
//		}
//	}
//}

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		while (n >= 3)
//		{
//			//第n项等于前两项之和
//			c = a + b;
//			//每次循环让前两项的次序+1，即让a和b是n的前两项
//			a = b;
//			b = c;
//			n--;
//		}
//		//得出结果就返回c
//		return c;
//	}
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = Fib(n);
//
//	printf("%d\n", ret);
//	//printf("%d\n", count);
//
//	return 0;
//}

//汉诺塔问题
//有A,B,C三个柱子，A柱子上有n个盘子，从上到下依次变小
//现在借助B将盘子放到C上，顺序一致，一次放一个

//顺序由上到下
//1.将A柱子n-1个盘子放在B上，再将第n个盘子给C
//2.将B柱子n-2个盘子放在A柱子上，再将第n-1个盘子给C
//......
//n.将第1个盘子给C

void Hanoi(char* p, int n)
{	
	char arr2[] = { 0 };

	if (n - 1 > 0)
	{
		Hanoi(p, n - 1);
	}


}

int main()
{
	char arr1[] = "abcdefg";
	int len = strlen(arr1);

	Hanoi(arr1, len);

	return 0;
}