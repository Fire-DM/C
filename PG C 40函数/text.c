#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#include<math.h>


//构造函数时需要注意两点：
						//1.命名要有意义，能让别人知道它的用处
						//2.功能足够单一，便于重复使用——高内聚低耦合


//int main()
//{
//	//char arr1[20] = { 0 };
//	//char arr2[] = "hello bit";
//	////strcpy用于复制
//	//strcpy(arr1, arr2);//前面是目的地destination，后面是来源source
//	//printf("%s\n", arr1);
//
//
//	char arr[20] = "hello bit";
//	//更改字符串的值
//	//第一个参数为指针，即地址
//	//第二个参数为值，即替换内容
//	//第三个参数表示替换的数量
//	memset(arr, 'x', 5);
//	memset(arr+2, 'y', 2);//可以更改地址，此时表示从第三位替换
//	printf("%s\n", arr);
//
//
//
//	return 0;
//}

//自定义函数

//int get_max(int x, int y)
//{
//	 return (x > y ? x : y);
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//
//	//求较大值
//	int max = get_max(num1, num2);
//	//打印
//	printf("%d\n", max);
//	
//	return 0;
//}

//写一个函数能交换两个整形的内容

//int add(int x, int y)
//{
//	//只需要实参的值，不需修改实参
//	return (x + y);
//}
//
////这个函数不能交换两个整形的内容
//// 
////当实参传递给形参的时候，形参是实参的一份临时拷贝
////对形参的修改不会影响实参
//// 
////和局部变量相似，形参出函数后会自动销毁
////void Swap(int x,int y)
////{
////	//函数内部的变量会创建新的空间
////	int z = 0;
////	z = x; 
////	x = y;
////	y = z;
////}
//
//void Swap(int *px,int *py)
//{
//	//用指针来远程修改实参
//	int z = *px;
//	*px = *py;
//	*py = z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	//传值调用
//	int c = add(a, b);
//
//	printf("%d\n", c);
//
//	//交换
//	printf("交换前:a=%d b=%d\n", a, b);
//	//这里的a，b是实参
//	//Swap(a, b);
//
//	//传址调用
//	Swap(&a, &b);
//
//	printf("交换后:a=%d b=%d\n", a, b);
//
//	return 0;
//}

//判断一个数是不是素数

//素数只能被1和本身整除
//比如：7不能被2,3,4,5,6整除

//如果一个数不是素数，那它一定可以写成num = a*b	（a或b不为1或它本身）
//但实际上a或者b却一定小于等于它的算数平方根 sqrt(num)
//sqrt接收和返回均为double类型，但这里编译器自动转换类型了，但仍然需要注意

//偶数不会是素数，所以只用奇数

//int main()
//{
//	int num = 0;
//	int i = 1;
//	int count = 0;
//	//100-200的数
//	//for (num=100; num <= 200; num++)
//	for (num = 101; num <= 200; num += 2)
//	{
//		//判断是否为i素数
//		//是的话打印
//		//用2~i-1的数字去试除
//
//		int flag = 1;//flag为1，表示为素数
//		//一个一个去寻找
//		//for (i = 2; i < num; i++)
//		for (i = 2; i <= sqrt(num); i++)//利用算术平方根减小运算次数，需要引入头文件math
//		{
//			//模为0，不是素数
//			if ((num % i) == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", num);
//		}
//	}
//	//换行显示并计算素数的个数
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}

//函数版本

//是素数返回1
//不是素数返回0
//int is_prime(int n)
//{
//	int i = 1;
//
//	for (i = 2; i <= sqrt(n); i++)//利用算术平方根减小运算次数，需要引入头文件math
//	{
//		//模为0，不是素数
//		if ((n % i) == 0)
//		{
//			return 0;//return会直接结束程序，返回值
//		}
//	}
//	//循环结束都没有找到模为0的数，未进入if，返回1
//	return 1;
//}
//int main()
//{
//	 int num = 0;
//	 int count = 0;
//	//100-200的数
//	for (num = 101; num <= 200; num += 2)
//	{
//		//返回1，打印；返回0，为假，不打印
//		if (is_prime(num))
//		{
//			count++;
//			printf("%d ", num);
//		}
//	}
//	//换行显示并计算素数的个数
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}

//判断一年是不是闰年
//1.能被4整除，并且不能被100整除
//2.能被400整除

//int is_leap_year(int n)
//{
//	//闰年判断规则有两个，用两个if，用else if的话就只有一个规则
//	/*if (n % 4 == 0)
//	{
//		if (n % 100 != 0)
//			return 1;
//	}
//	if(n % 400 == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}*/
//
//	//也可用逻辑操作符简化
//	if ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	int i = 0;
//	//1000`2000年
//	for (year = 1000; year <= 2000; year += 4)
//	{
//		//返回1，是闰年，打印出来
//		if (is_leap_year(year))
//		{
//			i++;
//			printf("%d ", year);
//		}
//	}
//	printf("\n1000年到2000年期间一共有%d个闰年\n", i);
//
//	return 0;
//}

//实现整形有序数组的二分查找
//1.将数组下标分为左右两部分
//2.比较中值和目标数字的大小，丢弃不包含目标数字的一半元素，
//3.循环步骤2，直至得出结果
// 
//形参是实参的拷贝，如果传递的数据过大，就会极大浪费空间
//将数组作为实参传递给函数的时，只会传首元素的地址，即指针

//int binary_search( int x, int arr[],int sz)//这里的arr是指针
//{
//	int i = 0;
//	
//	int left = 0;
//	int right = sz - 1;//表示下标，要减一
//	//查找
//	while (left <= right)
//	{
//		int mid = (left + right + 1) / 2;//中点值的下标
//		//丢掉右边
//		if (arr[mid] > x)
//		{
//			right = mid - 1;
//		}
//		//丢掉左边
//		else if (arr[mid] < x)
//		{
//			left = mid + 1;
//		}
//		else
//		{	
//			//找到了，返回下标
//			return mid;
//		}
//	}
//	//找不到，返回-1，设置成0可能和下标0混淆，产生歧义
//	return -1;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	//传递数字
//	int ret = binary_search(k, arr1,sz);
//
//	if (ret == -1)
//	{
//		printf("找不到，数组没有该元素\n");
//	}
//	else
//	{
//		printf("找到了，下标为%d\n", ret);
//	}
//
//	return 0;
//}


//布尔类型
//c99引入布尔类型 bool ，表示真假
#include<stdbool.h>

//bool is_prime(int n)
//{
//	int i = 1;
//
//	for (i = 2; i <= sqrt(n); i++)//利用算术平方根减小运算次数，需要引入头文件math
//	{
//		//模为0，不是素数
//		if ((n % i) == 0)
//		{
//			return false;//return会直接结束程序，返回值
//		}
//	}
//	//循环结束都没有找到模为0的数，未进入if，返回true
//	return true;
//}
//int main()
//{
//	 int num = 0;
//	 int count = 0;
//	//100-200的数
//	for (num = 101; num <= 200; num += 2)
//	{
//		//返回1，打印；返回0，为假，不打印
//		if (is_prime(num))
//		{
//			count++;
//			printf("%d ", num);
//		}
//	}
//	//换行显示并计算素数的个数
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}

//写一个函数，每一次调用函数，就会将num的值增加1

// void Add(int* p)//用指针接收
//{
//	 (*p)++;
//}
//
// int Add2(int x)
// {
//	 x++;
//	 return x;
// }
//int main()
//{
//	int num = 0;
//	while (num < 3)
//	{
//		Add(&num);//传地址
//		printf("%d\n", num);
//	}
//
//	return 0;
//}



