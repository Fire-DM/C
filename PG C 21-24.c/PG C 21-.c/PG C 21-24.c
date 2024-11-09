#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//define定义常量和宏，不是关键字，而是预处理指令
//#define NUM 100
//ADD宏名	(x,y)宏的参数，无类型	((x)+(y))宏体
//#define ADD(x,y) ((x)+(y))

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	/*printf("%d\n", NUM);
//
//	int num2 = NUM;
//	printf("%d\n", num2);
//
//	int arr[NUM] = { 9,8,7,6,5,4,3,2,1 };
//	printf("%d\n", arr[0]);*/
//
//	int a = 10;
//	int b = 20;
//	int c = ADD(a,b);//宏替换	int c = ((a)+(b));
//
//	printf("%d\n", c);
//
//	return 0;
//}

//.h 头文件（函数的声明、类型的声明、头文件的包含）
//.c 源文件（函数实现）

//浮点数在内存可能不能精确保存
//1.45在储存时可能变成1.448956989...这种




//		指针
//内存
//重要的存储器，计算机中程序的运行都是在内存中进行的
//内存被划分成一个个小的内存单元，每个大小为1个字节，每个单元都有一个地址（编号\指针）

//F11调试，在调试里面打开监视窗口和内存窗口
//int main()
//{
//	int a = 10;//向内存申请4个字节，用来存储10，第一个字节的地址就是这个变量的地址
//	&a;// 操作符&	取地址
//
//	printf("%p\n", &a);//%p打印存储地址
//	int* p = &a;//将a的地址存在指针变量p里面，类型为int *
//		//int说明p指向的对象是int类型		*说明p是指针变量
//
//	//char ch = 'w';
//	//char * h = &ch;
//	//printf("%p\n", &ch);//%p打印存储地址
//
//	*p = 20;//*是解引用操作符，可以通过p（变量）中存放的地址，找到p（变量）所指向的a（对象），*p就是p指向的a（对象），即此时*p = a
//	printf("%d\n",a);//20
//	return 0;
//}

//int main()
//{
//	//结果都为8
//	//不管什么类型的指针，创建的始终是指针变量
//	//指针变量是用来存放地址的
//	//指针变量的大小取决于一个地址存放的时候需要多大的空间
//	//32位机器上的地址：32bit位 - 4byte，所以指针变量的大小是4个字节
//	//64位机器上的地址：64bit位 - 8byte，所以指针变量的大小是8个字节
//	printf("%zu\n", sizeof(char *));
//	printf("%zu\n", sizeof(int *));
//	printf("%zu\n", sizeof(short *));
//	printf("%zu\n", sizeof(long *));
//	printf("%zu\n", sizeof(float *));
//	printf("%zu\n", sizeof(double *));
//	//sizeof用%zu的转换说明
//
//	return 0;
//}



//			结构体

//复杂对象
//人：姓名 + 年龄 + 性别 + 地址 + 电话
//书：书名 + 作者 + 出版社 + 定价 + 书号
//C语言给了自定义类型的能力，其中一种类型就叫 结构体 struct


//struct 就像修房子时的图纸，只有在建好房子后才占地方（使用时才申请内存）
//描述学生

struct Stu
{
	//成员
	char name[20];
	int age;
	char gender[10];
	char tele[];
};
//创建s的指针变量
void print(struct Stu* ps)
{
	printf("%s	%d	%s	%s\n", (*ps).name, (*ps).age, (*ps).gender, (*ps).tele);
	// ->
	//结构体指针变量->成员名
	printf("%s	%d	%s	%s\n", ps->name, ps->age, ps->gender, ps->tele);//简化版
}


int main()
{
	struct Stu s = {"Fire",20,"male","9,723,000,000"};

	//结构体对象 .成员名
	//printf("%s	%d	%s	%s", s.name, s.age, s.gender, s.tele);

	//	&s取地址，
	print(&s);
	return 0;
}