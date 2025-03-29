#define _CRT_SECURE_NO_WARNINGS
#include "work.h"


//
//将一个字符串str的内容颠倒过来，并输出
// 

//int main()
//{
//	char str[10001] = "hello bit";
//	
//	//2.设立首尾的下标
//	int left = 0;
//	int right = strlen(str) - 1;
//	//3.交换位置
//	while (left < right)
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//	
//	//4.输出
//	printf("%s\n", str);
//
//	return 0;
//}


//
//求Sn=a+aa+aaa+aaaa+aaaaa+...的前五项之和
//

//int main()
//{
//	//1.输入
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	//2.计算
//	int k = 0;
//	int sum = 0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		//2
//		//2*10+2
//		//22*10+2
//		k = k * 10 + a;
//		sum += k;
//	}
//	//3.输出
//	printf("%d\n", sum);
//
//	return 0;
//}


//
//求1-100000间的水仙花数
// n位数，各位的n次方之和等于该数
//

//int main()
//{
//	//1.给出1-100000的数
//	int i = 0;
//	int num = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		num = is_narcissistic_number(i);
//
//		if (num)//返回值为0则不打印
//		{
//			printf("%d ", num);
//		}
//	}
//	
//	return 0;
//}


//
//打印菱形
//

//int main()
//{
//	//1.分成上下两半,line行为分界线
//	// 且上半比下半多一行
//	// 想象成一行分别打印空格和*
//	int line = 0;
//	scanf("%d", &line);
//	//上半
//	int i = 0;
//	for (i = 1; i <= line; i++)
//	{
//		int j = 0;
//		//打印空格
//		for (j = 1; j <= line - i; j++)
//		{
//			printf(" ");
//		}
//		//打印*号
//		for (j = 1; j <= (2 * i - 1); j++)
//		{
//			printf("*");
//		}
//		printf("\n");//换行
//	}
//
//	//下半
//	for (i = 1; i < line; i++)
//	{
//		int j = 0;
//		//打印空格
//		for (j = 0; j < i ; j++)
//		{
//			printf(" ");
//		}
//		//打印*号
//		for (j = 0; j < 2 * (line-i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");//换行
//	}
//
//	return 0;
//}



//
// .操作符优先级高于*操作符
// 


//
//喝汽水，1瓶1元，2个空瓶换一瓶，20元可以喝多少瓶
//

//int main()
//{
//	//1.  20元 -> 20瓶
//	//2.  20空瓶 -》10瓶
//	//3.  10空瓶 -》5瓶
//	//4.  5空瓶 -》 2瓶
//	//5.  3空瓶 -》 1瓶
//	//6.  2空瓶 -》 1瓶
//	//7.  1空瓶 -》 0瓶
//
//	//3个变量：money,total,empty
//	int money = 0; 
//	scanf("%d", &money);
//
//	//assert(money >= 0);//对输入条件进行限制，超出给定范围则报错
//
//	int total = money;
//	int empty = money;
//
//	//置换
//	while (empty / 2)
//	{
//		//2空瓶换一瓶
//		total += empty / 2;
//		// 1瓶被空瓶换的满瓶 换1空瓶，
//		// 再和和剩下的空瓶相加
//		empty = empty / 2 + empty % 2;
//	}
//
//	printf("%d\n", total);
//	//观察结果得到的规律
//	/*if (money > 0)
//	{
//	printf("%d\n", 2*money-1);
//	}
//	else if (money == 0)
//	{
//		printf("%d\n", 0);
//	}*/
//
//	return 0;
//}