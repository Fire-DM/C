#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//语句

//1.表达式语句
//2.函数调用语句
//3.控制语句
//4.复合语句
//5.空语句

//条件判断语句（分支语句）：if语句、switch语句
//循环执行语句：do while语句、while语句、for语句
//转向语句：break语句、goto语句、continue语句、return语句


//		c语言是【结构体】的程序设计语言
//		顺序结构
//		选择结构	if、switch
//		循环结构	for、while、do while

//		分支语句（选择结构）

//if语句

//int main()
//{
//	int a = 10;
//	int age = 20;
//	//if(表达式)
//	//如果表达式为真，执行语句；反之，不执行
//	//if (a == 3)
//	//	printf("结果为假，不打印\n");
//	//if (a == 10)
//	//	printf("结果为真，打印\n");
//
//
//	//if (age < 18)//if()是一条空语句，C语言用分号结束语句
//	//{
//	//	//if默认只跟一条语句，想要多条语句就用{}
//	//	printf("未成年\n");
//	//	printf("不能喝酒、抽烟\n");
//	//}
//	//else
//	//{
//	//	printf("成年\n");
//	//	printf("减少吸烟、喝酒\n");
//	//}
//
//	if (age < 18)
//		printf("青少年\n");
//	//表达式不能写成18<= age <28,会造成混乱
//	else if (age >= 18 && age < 28)
//		printf("青年\n");
//	else if (age >= 28 && age < 40)
//		printf("中年\n");
// //else只与最近的if匹配
//	else
//		printf("壮年及老年\n");
//
//	return 0;
//}

 //判断一个数是否为奇数

//int main()
//{
//	//创建一个数
//	int num = 0;
//	//输入
//	scanf("%d", &num);
//	//输出
//	//printf("%d\n", num);
//	if (num % 2 == 1)
//		printf("奇数\n");
//	else
//		printf("偶数\n");
//
//	return 0;
//}

//输出1-100的奇数

//int main()
//{
//	//创建一个数
//	int num = 1;
//
//	while (num < 101)
//	{
//		//选出奇数
//		if (num % 2 == 1)
//			//打印
//			printf("%d ", num);
//		//else
//			//printf("%d\n", num);
//		//产生1-100的数
//		num += 1;
//	}
//
//	return 0;
//}


//		switch语句 
//分支语句，适用于多分支的情况

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//
//	//if不适合多分支
//	/*if (day == 1)
//		printf("星期一\n");
//	else if (day == 2)
//		printf("星期二\n");
//	else if (day == 3)
//		printf("星期三\n");
//	else if (day == 4)
//		printf("星期四\n");
//	else if (day == 5)
//		printf("星期五\n");
//	else if (day == 6)
//		printf("星期六\n");
//	else if (day == 7)
//		printf("星期日\n");*/
//
//	//switch只能包含整型
//	switch(day)
//	{
//		//case决定入口，break终止
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
// default:
//		printf("选择错误\n");
//		break;
//	}
//
//	//有较多重复内容时可以简化，break不是必要的，可以看情况省略，但要养成加上break的好习惯
//	switch(day)
//	{
//		//case决定入口，break终止
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("选择错误\n");
//		break;
//	}
//
//	return 0;
//}
				//
				// 
				// 
//int main()
//{
//	int n = 1;
//	int m = 2;
//
//	switch (n)
//	{
//	case 1:n++;
//	case 2:m++;
//	case 3:
//		//switch可以嵌套
//		switch (n)
//		{
//		case 1:n++ ;
//		case 2:m++; n++;
//			break;
//		case 3:m--;
//			break;
//		}
//	case 4:m++;
//	case 5:n++;
//		break;
//	default:
//		printf("选择错误\n");
//		break;
//			}
//
//	printf("n=%d m=%d\n",n,m);
//
//	return 0;
//}

//循环语句

//for循环
//while循环
//do while循环

//while循环

//int main()
//{
//	int i = 1;
//	//while应包含表达式，否则容易死循环
//	while (i <= 10)
//	{
//		////可用break中途跳出循环
//		//if (i == 5)
//		//	break;
//
//		//执行continue会直接跳过continue后面的语句
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 1;
//	//while应包含表达式，否则容易死循环
//	while (i <= 10)
//	{
//		i++;
//
//		//continue会直接跳过本次循环后面的代码，直接去判断部分，进行下一次判断
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);
//	}
//	return 0;
//}

//getchar函数和putchar函数

//int main()
//{
////	//从键盘上获取字符
//// getchar的返回值是对应字母的ASCII值，如果程序错误或程序结束，则返回EOF(end of file),所以用int接受返回值
////	int ch = getchar();
////	//两种打印方式
////	printf("%c\n",ch);
////	putchar(ch);
////	
//	//
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF)
//	//{
//	//	//输入a，按下回车后，实际getchar会读取两个字符，第一个为a，第二个为\n
//	//	//getchar从输入缓冲区获取字符，而我们在键盘上输入的值也会放在输入缓冲区
//	//	//输入a，存在输入缓冲区 -> 按下回车，同时自动在输入缓冲区生成\n -> getchar读取a，putchar打印a -> getchar读取\n，putchar打印\n
//	//	putchar(ch);
////
//	//}
//
//	char password[20] = { 0 };
//	printf("请输入密码：>");
//	//输入abcdef，但按下回车后会生成\n,但scanf只拿输入的abcdef
//	//scanf读到空格会停止读取
//	scanf("%s", password);
//
//	//这个getchar拿走了\n，但也只能拿走一个字符
//	//getchar();
//
//	//实际用while循环处理多的字符
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//
//	printf("请确认密码(Y/N):>");
//	//没有上面的getchar的话，这里的getchar会直接读取剩下的\n
//	int ret = getchar();
//
//	if (ret == 'Y')
//		printf("YES\n");
//	else
//		printf("NO\n");
//
//	return 0;
//}

//只打印正数，跳过其他字符，减号、小数点都是字符

//int main()
//{
//	char ch = '0';
//	while ((ch = getchar()) != EOF)
//	{
//		//这里的'0'和'9'是字符，指ASCII码中的十进制数字
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//
//	return 0;
//}

//转换ASCII码为对应字符并输出

//int main()
//{
//		'a';//97
//	//打印a
//	/*printf("%c\n", 'a');
//	printf("%c\n", 97);*/
//	
//	
//	int arr[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33 };
//	//如果明确知道里面数据是ASCII码值，char能够存下并存进去后没有问题，也可以用char
//	//char arr[] = { 73, 32, 99, 97, 110, 32, 100, 111, 105, 116, 33 };
//	
//	int i = 0;
//	//计算元素个数
//	//sizeof(arr)计算数组总大小，单位是字节
//	//sizeof(arr[0])计算数组元素的大小，单位是字节
//	//总大小除以单个元素的大小就为元素个数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	while (i < sz)
//	{
//		//在数据有多种表现形式时，打印的具体数值由转换说明决定
//		printf("%c ", arr[i]);
//		i++;
//	}
//
//	for (i=0; i<sz; i++)
//	{
//		//在数据有多种表现形式时，打印的具体数值由转换说明决定
//		printf("%d ", arr[i]);
//	}
//	
//	return 0;
// }

//打印printf的返回值

//int main()
//{
//	//想要换行打印的话不能在"hello world！"后面加\n，否则会造成返回值变化
//	int n = printf("hello world!");
// //在printf函数的输出数字前面加\n
//	printf("\n%d\n",n);
//
//	return 0;
//}

//static的练习

//int sum(int a)
//{
//    int c = 0;
//    //static函数修饰局部变量时，会延长它的生命周期至整个程序结束时
//    //在这段代码中b会继承上一次的值
//    static int b = 3;
//    c += 1;
//    b += 2;
//    return (a + b + c);
//}
//int main()
//{
//    int i;
//    int a = 2;
//    for (i = 0; i < 5; i++)
//    {
//		//调用上面创建的函数
//        printf("%d,", sum(a));
//    }
//}

//for循环
//while循环结构松散，在代码比较长时不便修改
//for(表达式1;表达式2;表达式3)
// 循环语句;

//表达式1为初始化部分，用于初始化循环变量
//表达式2为条件判断部分，用于判断循环何时终止
//表达式3为调整部分，用于调整循环条件

//int main()
//{
//	//for循环打印1-10
//	int i = 0;
// 	for (i = 1; i <= 10; i++)
//  for (int i = 1; i <= 10; i++)//在C语言中c99语法才支持这种写法；c++也支持这种写法 
//	{
//		//跳过5
//		if (i == 5)
//			continue;  
//
//		printf("%d ", i);
//	}
//	return 0;
//}

//for循环不要随意省略初始化

//int main()
//{
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("hello\n");
//		}
//	}//结果为9个hello
//
//	//缺少对i的初始化，上面的循环结束时i的值为3，不满足循环条件，即不会执行程序
//	for (; i < 3; i++)
//	{
//		//缺少对j的初始化，导致j第一次循环结束后的值变成3，不满足后面循环的条件
//		for (; j < 3; j++)
//		{
//			printf("hello\n");
//		}
//	}//结果为3个hello
//
//
//	return 0;
//}

//多个变量的for循环

//int main()
//{
//	int x = 0;
//	int y = 0;
//
//	for (x = 0, y = 0; x < 3 && y < 6; ++x, y++)
//	{
//		printf("hello\n");//3
//		printf("%d\n", x+y);
//		
//	}
//
//	return 0;
//}

//条件判断为假则不会进入循环,条件判断为赋值且不为零时会死循环

//int main()
//{
//	int i = 1;
//
//	死循环,条件判断i被2赋值
//	for (i = 0; i = 2; i++)
//	{
//		printf("hello\n");
//	}
//
//	不会进入循环，条件判断0表示假
//	for (i = 0; i = 0; i++)
//	{
//		printf("hello\n");
//	}
//
	//执行一次
//	for (i = 0; i == 0; i++)
//	{
//		printf("hello\n");
//	}
//	//跳过
//	for (i = 0; i == 1; i++)
//	{
//		printf("hello\n");
//	}
//
//	printf("%d\n", i);
//
//	return 0;
//}

//do wilie循环
//do 
//{
//	语句;
//} 
//while (条件);

//int main()
//{
//	int i = 1;
//
//	do
//	{
//		//break打破循环
//		//调整部分在continue上面时，不输出5；在下面时，死循环
//		//if (i == 5)
//			//break;
//			//continue;
//		printf("%d ", i);
//		i++;
//	}
//	while (i <= 10);
//
//	return 0;
//}

//do while循环的练习

//n的阶乘
//int main()
//{
//	//声明变量
//	int n = 0;
//	int i = 1;
//	int ret = 1;
//	scanf("%d", &n);
//
//	//计算
//	do
//	{
//		i++;
//		ret = ret * i;
//	} 
//	while (i <  n);
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//1!+2!+...+n!的和
//int main()
//{
//	//声明变量
//	int n = 0;
//	int i = 1;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &n);
//
//	while (i <= n)
//	{
//		//计算阶乘
//		ret *= i;
//		//计算阶乘的和
//		sum += ret;
//		i++;
//	}
//
//	printf("%d\n", s);
//
//	return 0;
//}

//查找 有序 数组中的具体某个数字n

//遍历查找

//int main()
//{
//	char arr[] = { 1, 2, 3, 4, 5, 6, 7 };
//	int k = 5 ;
//	int i = 0;
//	//元素个数 等于 数组总大小 除以 单个元素的大小
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到了，下标是%d\n", i);
//			break;
//		}
//		if (i == sz)
//		{
//			printf("找不到\n");
//		}
//	}
//
//	return 0;
//}
 
//二分查找 
//不需要精确求下标

//int main()
//{
//	char arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int k = 5;
//	int i = 0;
//	//元素个数 等于 数组总大小 除以 单个元素的大小
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//分成左中右三部分
//	int left = 0;
//	int right = sz;
//	
//	while (left <= right)
//	{
//		//每次查找下标的中值，查一次少一般的数据
//		//int mid = (left + right) / 2;		//元素的数量少于数组的容纳量时会溢出
//		int mid = left + (right - left) / 2;		//元素的数量少于数组的容纳量时不会溢出
//
//
//		if (arr[mid] < k)
//		{
//
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标为%d\n", mid);
//			break;
//		}
//		if (left > right)
//		{
//			printf("找不到\n");
//			break;
//		}
//	}
//
//	return 0;
//}

//演示多个字符从两端移动,向z中间汇聚
//需要精确求下标

//思路
//weicome to here!!
//每一次变换都按首尾顺序替换字符
//##############
//w############!
//we##########!!
//......
//weicome to here!!

#include<windows.h>
#include<stdlib.h>

//int main()
//{
//	//两个数组
//	char arr1[] = "welcome to here!";//16个字符
//	char arr2[] = "################";
//	
//	int left = 0;
//	//下标需要对应，比如用sizeof求到的arr1长度为17，而 ! 的下标为15，所以-2
//	//int right =  sizeof(arr1) / arr(arr1[0]) -2;		//会把\0算进去
//	//内置函数strlen，求数组的长度，不会把\0算进去，但仍需-1对齐下标
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		//替换字符
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//
//		printf("%s\n", arr2);
//		Sleep(1000);//单位为毫秒,放慢打印速度，需要引入windows的头文件
//		//清空屏幕，用在这里可表现出字符向中间靠拢的效果
//		system("cls");//system是一个库函数，可执行系统命令，需要引入stdlib的头文件
//		left += 1;
//		right -= 1;
//	}
//	//屏幕上最后留下的结果，上面的system("cls")会清空屏幕
//	printf("%s\n", arr1);
//
//	return 0;
//}


//模拟用户登录情景，并且只能登录三次。

int main()
{
	int i = 0;
	//假设密码是abc
	char password[20] = { 0 };
	

	//for (i = 1; i <= 3; i++ )
	//{
	//	printf("请输入密码:>");
	//	scanf("%s", password);//数组名本来就是地址，不需要用&
	//
	//	//判断两个字符串是否相等，不能使用==，应该用库函数: strcmp,需要引用头文件string
	//	if (strcmp(password, "abc") == 0)//	strcmp(arr1, arr2) == 0	表示字符串相等
	//	{
	//		printf("登录成功\n");
	//		break;
	//	}
	//	else
	//	{
	//		printf("密码错误\n");
	//	}
	//}
	//
	//if (i == 4)
	//{
	//	printf("三次密码输入均错误，已锁定\n");
	//}


	while (i < 3)
	{
		printf("请输入密码:>");
		scanf("%s", password);//数组名本来就是地址，不需要用&

		//判断两个字符串是否相等，不能使用==，应该用库函数: strcmp,需要引用头文件string
		if (strcmp(password, "abc") == 0)//	strcmp(arr1, arr2) == 0	表示字符串相等
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}

		i++;
	}
	if (i == 3)
	{
		printf("三次密码输入均错误，已锁定\n");
	}

	return 0;
}

