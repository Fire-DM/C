#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

//数组是指针

//void fun(int a[])//这里的a是指针变量
//{
//	printf("%zu", sizeof(a));
//}
//int main()
//{
//	int a[10] = { 0 };
//	printf("%zu\n", sizeof(a));//10个元素，每个int类型的元素大小为4bit，总共为40bit
//	printf("%zu\n", sizeof(a[1]));//单个元素，大小为4bit
//	fun(a);//数组传递参数时传递的是首元素的【地址】，大小为8bit
//
//	return 0;
//}

//猜数字游戏的实现

//思路
//电脑产生一个随机数
//猜数字
//猜大了
//猜小了
//直到猜对


void menu()
{
	printf("\t猜数字游戏\n\n");
	printf("*****************************\n");
	printf("*****	1. play		*****\n");
	printf("*****	2. 10-times	*****\n");
	printf("*****	0. exit		*****\n");
	printf("*****************************\n");
}
//惩罚程序
void punish()
{
	int i = 0;
	//确保数组够大
	char input[256] = {0};

	//60秒后关机
	system("shutdown -s -t 60");

	printf("未能达成挑战，现在接受惩罚——\n");
	printf("从现在开始，你的电脑将会在60秒后关机\n");
	printf("输入：i.chaoxing.com，取消关机:>");

	while(1)
	{ 
		//防止输入溢出
		scanf("%255s", input);
		while (getchar() != '\n')
		{
			getchar();
		}
		if (strcmp(input, "i.chaoxing.com") == 0)
		{
			//取消关机
			system("shutdown -a");
			printf("恭喜！你不用重开电脑了！\n");
			printf("输入的网址是学习通登录网页，玩完这个游戏后就去学习吧！只玩耍不学习，聪明三月也变傻。\n");
			break;
		}
		else
		{
			printf("输入错误，时间不多喽~~重新输入:>");
			if (i == 3)
			{
				printf("第三次输入错误，注意不要打空格\n:>");
				}
		}
		i++;
	}
}
void game1()
{
	int guess = 0;
	int i = 0;
	//引入生成随机数的范围
	//0-RAND_MAX(32767)
	RAND_MAX;
	//1.产生随机数
	//int ret = rand();//范围是0-32767
	int ret = rand() % 100 + 1;//模，求0-32767中任意数的余数，范围是0-100
	//2.猜数字
	printf("请猜数字:>");

	//判断
	while (1)
	{
		scanf("%3d", &guess);
		while (getchar() != '\n')
		{
			getchar();
		}

		if (guess < ret)
		{
			printf("猜小了，再猜:>");
		}
		else if (guess > ret)
		{
			printf("猜大了，再猜:>");
		}
		else
		{
			printf("猜对了，恭喜，是%d\n", ret);
			break;
		}
	}
}
void game2()
{
	int guess = 0;
	int i = 1;
	//引入生成随机数的范围
	//0-RAND_MAX(32767)
	RAND_MAX;
	//1.产生随机数
	//int ret = rand();//范围是0-32767
	int ret = rand() % 100 + 1;//模，求0-32767中任意数的余数，范围是0-99，+1变成0-100；也可以模101
	//2.猜数字
	printf("请猜数字:>");

	//判断
	while (i <= 10)
	{
		int n = 10 - i;
		scanf("%3d", &guess);
		while (getchar() != '\n');
		{
			getchar();
		}
		if (guess < ret)
		{
			if (n >= 1)
			{
				printf("猜小了，还有%d次机会，再猜:>", n);
			}
			else
			{
				printf("猜小了，挑战失败，答案是%d，下次加油！\n", ret);
				punish();
			}
		}
		else if (guess > ret)
		{
			switch (n)
			{
			case 9:
			case 8:
			case 7:
			case 6:
			case 5:
			case 4:
			case 3:
			case 2:
			case 1:
				printf("猜大了，还有%d次机会，再猜:>", n);
				break;
			case 0:
				printf("猜大了，挑战失败，答案是%d，下次加油！\n", ret);
				punish();
				break;
			}
		}
		else
		{
			printf("猜对了，恭喜！用了%d次，是%d\n", i, ret);
			break;
		}
		i++;
	}
}

int main()
{
	//srand设置在rand前，让rand随机生成数字，否则rand只生成固定的随机数。需要引入<stdlib.h>的头文件
	//用时间戳来随时改变传入srand的数值，从而让rand生成随机数
	//time会返回一个时间戳(time_t)，参数为指针 time_t * timer。需要引入<time.h>的头文件
	//ctrl + click（点击）可以查看 time_t 的类型，结果为long long
	//srand只能接受无符号类型的参数，所以要强制转换时间戳的参数
	srand((unsigned int)time(NULL));//NULL为空指针,		int *p = NULL;	相当于	int a = 0;

	//设置菜单，可以继续游玩
	int input = 0;
	int input2 = 0;

	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		while (getchar() != '\n')
		{
			getchar();
		}

		switch (input)
		{
		case 1:
			game1();
			break;
		case 2:
			printf("游戏二是10次限次挑战，但失败会有惩罚\n");
			printf("确定挑战请输入：22\n返回请输入一个随机数\n");
			printf("请输入:>");
			scanf("%d", &input2);
			//清除缓冲区多余的输入
			while (getchar() != '\n')
			{
				getchar();
			}
			if (input2 == 22)
			{
				game2();
				break;
			}
			else
			{
				break;
			}
		case 0:
			printf("退出游戏\n"); 
			break;
		default:
			printf("选择错误，请重新选择\n"); 
			break;
		}
	} while (input);//input为1，继续循环；input为0时，条件为假，不循环；input不为1或0时，条件判断为真，继续循环

	return 0;
}


//goto语句
//设置标记和跳转，但容易打乱程序，产生bug，实际开发一般不用
//标记again只能在同一个函数内部进行跳转
//goto一般用于终止某些程序深度嵌套的结构的处理过程

//int main()
//{
//again:
//	printf("hehe\n");
//	printf("haha\n");
//	goto again;
//
//	//处理深度嵌套
//	for (...)
//		for (...)
//		{
//			for (...)
//			{
//				if (disaster)
//					goto error;
//			}
//		}
//error:
//	if (disaster);
//	//处理错误情况
//
//	return 0;
//}

//关机程序
//1.电脑运行后，一分钟内关机
//2.输入：hello，则取消关机

//goto实现迭代（循环）

//int main()
//{
//	char input[] = { 0 };
//	system("shutdown -s -t 180");
//anain:
//	printf("注意，你的电脑在180秒后关机；如果输入：hello，就取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "hello") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto anain;
//	}
//
//	return 0;
//}

//while循环

//int main()
//{
//	char input[] = { 0 };
//	int i = 0;
//	system("shutdown -s -t 180");
//	while (1)
//	{
//		printf("注意，你的电脑在180秒后关机；如果输入：hello，就取消关机\n");
//		scanf("%s", input);//数组名就是是地址，不需要&
//		if (strcmp(input, "hello") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//
//	return 0;
//}.

