#define _CRT_SECURE_NO_WARNINGS
#define PI 3.1415926
#include<stdio.h>
#include<string.h>

//找最大数

//int main()
//{
//	//存储数字
//	int arr[4] = { 0 };
//	//输入
//	int i = 0;
//	while (i < 4)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//
//	//假设最大值是数组第一个元素
//	int max = arr[0];
//	i = 1;
//	while (i < 4)
//	{
//		//用其他元素和第一个元素比较大小，如果其他元素更大，将结果赋值给max
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		i++;
//	}
//
//	//输出
//	printf("%d\n", max);
//
//	return 0;
//}
//
//int main()
//{
//	int i = 1;
//	//存储输入数字的声明
//	int n = 0;
//	//假设max最大
//	int max = 0;
//	//输入
//	scanf("%d", &max);
//	//输入三个数
//	while (i < 4)
//	{
//		scanf("%d", &n);
//
//		if (n > max)
//		{
//			max = n;
//		}
//		i++;
//	}
//	printf("%d\n", max);
//
//	return 0;
//}
//
//int main()
//{
//	int i = 1;
//	int max = 0;
//	int n = 0;
//
//	scanf("%d", &max);
//	while (i < 4)
//	{
//		scanf("%d", &n);
//		i++;
//		//用三目操作符比较
//		max = max > n ? max : n;
//	}
//
//	printf("%d\n", max);
//
//	return 0;
//}

//计算球的体积

//int main()
//{
//	double r = 0.0;
//	double v = 0.0;
//
//	scanf("%lf", &r);
//
//	v = 4 / 3 * PI * r * r * r;
//
//	printf("%.3lf\n", v);
//
//	return 0;
//}

//float类型的初始化

//int main()
//{
//	//0.0默认是double类型，float类型要加上f
//	float a = 0.0f;
//	double b = 0.0;
//
//
//	return 0;
//}

//计算身体的体重指数

//int main()
//{
//	int weight = 0;
//	int height = 0;
//	//输入
//	scanf("%d %d", &weight, &height);
//	//计算
//	//要写成除以100.0，否则程序会有错误
//	float BMI = weight / (height / 100.0) / (height / 100.0);
//	//输出
//	printf("%.2f\n", BMI);
//
//	return 0;
//}


//猜数字

//int main()
//{
//	//指定猜测的数
//	int num = 52;
//	int i = 1;
//	
//	//int usr = getchar();
//	int usr = 0;
//
//
//	for (i = 1; usr != num; i++)
//	{
//		//输入
//		scanf("%d", &usr);
//
//		if (usr == num)
//			printf("猜对了，共猜了%d次,是%d\n", i, num);
//		else
//			printf("猜错了，已猜了%d次,再猜：\n", i);
//
//	}
//
//	return 0;
//}

//猜字母（有问题）

//int main()
//{
//	//指定猜测的数
//	char ch = 'e';
//
//	int i = 0;
//	char usr = '0';
//
//	for (i = 1; usr != ch; i++)
//	{
//		//输入
//		//getchar一次读取一个字符，直到缓冲区没有字符，不能用getchar
//		scanf("%c", &usr);
//
//		
//		if (usr == ch)
//			printf("猜对了，共猜了%d次,是%c\n", i, ch);
//		else
//			printf("猜错了，已猜了%d次,再猜：\n", i);
//
//	}
//
//	return 0;
//}
	
//验证switch中的case的作用

//int main()
//{
//	//声明数组
//	char day = '0';
//
//	//输入
//	scanf("%c", &day);
//
//	switch (day)
//	{
//	case 97:printf("星期一\n");
//		break;
//	case 98 :printf("星期二\n");
//		break;
//	case 99 :printf("星期三\n");
//		break;
//	}
//
//	return 0;
//}

//printf的返回值

//int main()
//{
//	int n = printf("hello,world!");
//	//printf的返回值为数字
//	printf("\n%d", n);
//
//	return 0;
//}

//static的用法

//建立函数
//int sum(int a)
//{
//	int c = 0;
//	//static修饰局部变量时会延长其生命周期至整个程序
//	static int b = 3;
//	c += 1;
//	b += 2;
//
//	return (a + b + c);
//}
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", sum(a));
//	}
//
//
//	return 0;
//}

//4个数（多个数）中找最大数

//int main()
//{
//	//假设第一个数最大
//	int max = 0;
//	//简写
//	//int max = scanf("%d", &max);
//	//存放其他数
//	int num = 0;
//	int i = 0;
//
//	scanf("%d", &max);
//
//	for (i = 1; i < 4; i++)
//	{
//		scanf("%d", &num);
//		//将最大的值赋给max
//		if (num > max)
//			max = num;
//		else
//			;
//	}
//
//	printf("%d", max);
//
//
//	return 0;
//}

//字符向中间移动

int main()
{
	  




	return 0;
}

