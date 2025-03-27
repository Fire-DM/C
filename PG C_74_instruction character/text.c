#include "function.h"

//小乐乐走n阶台阶，每次可以选走一阶或者两阶，那么一共有多少走法

//int main()
//{
//	int input = 0;
//	//输入
//	scanf("%d", &input);
//	//计算
//	int m = Fib(input);
//	//输出
//	if (m == -1)
//		printf("输入错误\n");
//	else
//		printf("%d\n", m);
//
//	return 0;
//}



//序列中删除指定数字

//int main()
//{
//	int arr[50] = { 0 };
//	
//	int del = 0;
//	//接收n个数字
//	int n = 0;
//	printf("请输入元素的个数:>");
//	scanf("%d", &n);
//
//	int m = 0;
//	printf("请向数组里填数字:>");
//	for (m=0; m < n; m++)
//	{
//		scanf("%d ", &arr[m]);
//	}
//
//	//删除特定数字,并返回删除后的数组大小
//	printf("请选择删除的数字:>");
//	scanf("%d", &del);
//	int fal_size = delete(arr,n,del);
//
//	for (m = 0; m < fal_size; m++)
//	{
//		printf("%d ", arr[m]);
//	}
//
//	return 0;
//}


//
//最高分与最低分之差（1-100）
//
//假设第一个数最大，用其他数和它比较，谁大值就换成更大的那一个
//最小同理，可以假设最后一个最小

//int main()
//{
//	int score[50] = { 0 };
//	//数据的个数
//	int n = 0;
//	printf("数据的个数:>");
//	scanf("%d", &n);
//	
//	
//	//比较
//	int sub = max_min_sub(score, n);
//	//打印
//	printf("结果为%d\n", sub);
//
//	return 0;
//}


//
//字母大小写转换
//
//判断是否是大写，是则转换成小写；不是则转换成大写


//int main()
//{
//	char ch = '0';
//
//	//成功读取数据时，返回数据个数
//	//未成功读取数据时，返回EOF
//	while (scanf("%c", &ch) == 1)
//	//while (scanf("%c", &ch) != EOF)
//	{
//		//小写转大写
//		if (ch >= 'a' && ch <= 'z')
//			printf("%c\n", ch - 32);
		//大写转小写
//		else if (ch >= 'A' && ch <= 'Z')
//			printf("%c\n", ch + 32);
//		else
//			printf("输入错误，请输入字母:>");
//
//		getchar();//处理\n
//	}
//
//	return 0;
//}


//int main()
//{
//	char ch = '0';
//
//	//成功读取数据时，返回数据个数
//	//未成功读取数据时，返回EOF
//	while (scanf("%c", &ch) == 1)
//	//while (scanf("%c", &ch) != EOF)
//	{
//		//小写转大写
//		if (islower(ch))
//			printf("%c\n", toupper(ch));
//		//大写转小写
//		else if (isupper(ch))
//			printf("%c\n", tolower(ch));
//		else
//			printf("输入错误，请输入字母:>");
//
//		getchar();//处理\n
//	}
//
//	return 0;
//}


//int main()
//{
//	char ch = '0';
//
//	while (scanf("%c", &ch) == 1)
//	{
//		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//		//if (isalpha(ch))
//			printf("%c is an alphabet.\n", ch);
//		else
//			printf("%c is ont an alphabet.\n", ch);
//
//		getchar();
//	}
//	
//
//	////%c前加空格
//	////就是跳过下一个字符之前的所有空白字符
//	//while (scanf(" %c", &ch) == 1)
//	//{
//	//	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//	//		printf("%c is an alphabet.\n", ch);
//	//	else
//	//		printf("%c is ont an alphabet.\n", ch);
//	//}
//
//
//	return 0;
//}


//
//变种水仙花 - Lily Number
// 把任意数字从中间拆分成两个数字，
// 若所有拆分后的乘积的和等于自身，就是Lily Number
// 
// 求所有五位数的水仙花数
//例如：655 = 6*55 + 65*5
//

int main()
{
	int num = 0;
	
	for (num = 10000; num < 100000; num++)
	{
		if (Lily_Number(num))
			printf("%d ", num);
	}

	return 0;
}