#include "function.h"

//小乐乐走n阶台阶
int Fib(int n)
{
	if (n > 0 && n <= 2)
		return n;
	else if (n >= 3 && n <= 30)
		return Fib(n - 1) + Fib(n - 2);
	else
		return -1;
}


//删除特定序列的字符
int delete(int arr[], int n, int del)
{
	int i = 0;
	int j = 0;//作为下标确定的位置就是用来存放不删除的数字的

	//存放不删除的数据
	for (i = 0; i < n; i++)
	{
		//i用来遍历每个数据，j用来记录数据确定的下标
		//下标为i的数据如果是保留的数据，就覆盖下标为j的数据
		if (arr[i] != del)
			arr[j++] = arr[i];
	}

	return j;
}


//最高分与最低分之差
int max_min_sub(int score[],int n)
{
	//假设最大值，并初始化成最小值，方便比较
	int max = 0;
	//假设最小值，并初始化成最大值，方便比较
	int min = 100;

	int i = 0;
	//输入
	printf("输入数据:>");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &score[i]);
		//将更大值赋给max
		if (max < score[i])
			max = score[i];
		
		if (min > score[i])
			min = score[i];
	}

	return max - min;
}


//水仙花数
//规定：水仙花数返回1，否则返回0
int Lily_Number(int num)
{
	int i = 0;
	int sum = 0;
	for (i = 1; i <= 4; i++)
	{
		//pow()为内置函数，求一个数的n次方
		//需要用math.h的头文件，返回值为double类型
		int k = (int)pow(10, i);
		sum += (num % k) * (num / k);
	}
	//判断
	if (sum == num)
		return 1;
	else
		return 0;
	
}