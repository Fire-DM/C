#define _CRT_SECURE_NO_WARNINGS
#include "head.h"

//测试用
int text()
{
	return 123;
}

//计算器菜单
void menu(void)
{
	printf("******** 1.相加 ********\n");
	printf("******** 2.相减 ********\n");
	printf("******** 3.相乘 ********\n");
	printf("******** 4.相除 ********\n");
	printf("******** 0.退出 ********\n");
}


//加
int Add(int x, int y)
{
	return x + y;
}

//减
int Subtract(int x, int y)
{
	return x - y;
}

//乘
int Multiply(int x, int y)
{
	return x * y;
}

//除
int Divide(int x, int y)
{
	return x / y;
}


//写一个计算器，实现两数的加减乘除
void clac(int (*pf)(int, int))
{
	int a = 0;
	int b = 0;
	int ret = 0;

	printf("请输入两个数:>");
	scanf("%d %d", &a, &b);
	ret = pf(a, b);
	printf("结果为%d\n\n", ret);
}


/////////////////////////////////////////////////////

//冒泡排序
//让每个元素同相邻元素比较，交换位置
void bubble_sort(int* p, int sz)
{
	int i = 0;
	//躺数
	for (i = 0; i < sz-1; i++)
	{
		int flag = 1;//假设数组是有序的
		int j = 0;
		//下标为j的数要和下标为sz-1-j的数比较
		for (j = 0; j < sz - 1-i; j++)
		{
			if ( p[j]> p[j+1])
			{
				int tmp = p[j + 1];
				p[j + 1] = p[j];
				p[j] = tmp;
				flag = 0;//进行交换则换为0，表示数组无序
			}
		}
		if (flag == 1)
		{
			break;//数组有序则直接退出
		}
	}
}



//比较两个整形元素
//e1指向一个整数、
//e2指向另一个整数
int cmp_int(const void* e1, const void* e2)
{
	//if (*(int*)e1 > *(int*)e2)//无法直接进行解引用
	//	return 1;
	//else if (*(int*)e1 == *(int*)e2)
	//	return 0;
	//else
	//	return -1;

	//简化
	return (*(int*)e1 - *(int*)e2);//升序
	//return (*(int*)e2 - *(int*)e1);//降序
}

/////////////////////////////////////////////////

//测试使用qsort或new_bubble_sort排序结构体
void text_Stu()
{
	struct Stu s[] = { {"zhangsan",18},{"lisi",16},{"wangwu",45} };
	int sz = sizeof(s) / sizeof(s[0]);
	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
	new_bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
}


//比较姓名
int cmp_stu_by_name(const void* e1,const void* e2)
{
	//结构体指针要用->
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}


//比较年龄
int cmp_stu_by_age(const void* e1,const void* e2)
{
	//return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;//升序
	return ((struct Stu*)e2)->age - ((struct Stu*)e1)->age;//降序
}


//交换位置
void Swap(char* buf1, char* buf2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
	//不创建临时空间
	//交换每一对字节，而不是值
		//00000000 00000000 00000000 00000001  - 1
		//00000000 00000000 00000000 00000011  - 3
		//8位是一个字节，对应字节交换顺序
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}


//改进后的冒泡序列（学的qsort）
//typedef (*cmp)(const void* e1, const void* e2)
void new_bubble_sort(void* base,//待比较元素的起始位置
	int sz, //待比较元素的个数
	int width,//待比较元素的大小（单位为字节）
	int (*cmp)(const void* e1, const void* e2))//函数指针，指向比较两个元素大小的函数
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//假设为顺序
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//将base类型改为char*，这样就可根据类型进行+1-1操作
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//比如实参类型为short，形参执行“+1-1操作”只需要+2即可
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
				flag = 0;
			}
		}
		if (flag == 1)//若一次都没有交换，说明为顺序
		{
			break;
		}
	}
}