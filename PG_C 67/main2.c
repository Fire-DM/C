#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>


//
//关系操作符
//


//int main()
//{
//	//int a = 0;
//	////	~是按二进制位取反
//	////0000 0000 0000 0000 0000 0000 0000 -补码
//	////1111 1111 1111 1111 1111 1111 1111 -> ~a的补码
//	////1111 1111 1111 1111 1111 1111 1110 -> ~a的补码减去1
//	////1000 0000 0000 0000 0000 0000 0001 -> ~a的反码
//	////-1
//	//printf("%d\n", ~a);
//
//
//	//int b = 3;
//	////0000 0000 0000 0000 0000 0000 0011
//	////1111 1111 1111 1111 1111 1111 1100 - 补码
//	////1111 1111 1111 1111 1111 1111 1011
//	////1000 0000 0000 0000 0000 0000 0100
//	////-4
//	//printf("%d\n", ~b);
//
//
//	int c = 13;
//	c |= (1 << 4);//c按位或，将倒数第五位上的数变为1
//	printf("%d\n", c);//29
//	//0000 0000 0000 0000 0000 0000 1101 - c的补码
//	//0000 0000 0000 0000 0000 0001 0000 - 1<<4
//	// 
//	//将倒数第5位改成1，按位或运算，对应位有1则结果为1
//	//0000 0000 0000 0000 0000 0001 1101
//
//	c &= (~(1 << 4));
//	printf("%d\n", c);//29
//	//0000 0000 0000 0000 0000 0001 1101 - c的补码
//	//0000 0000 0000 0000 0000 0001 0000 - 1<<4
//	//1111 1111 1111 1111 1111 1110 1111 - ~(1 << 4)
//	//
//	//按位与，都为1结果才为1，c变为原数13
//	//0000 0000 0000 0000 0000 0000 1101
//
//	return 0;
//}

//
//	++		--
//

//int main()
//{
//	int a = 3;
//	int c = 9;
//
//	int b = ++a;//前置加加，先加加，后使用
//	//a = a + 1, b = a
//	printf("%d\n", a);//4
//	printf("%d\n", b);//4
//
//	int d = c++;//后置加加，先使用，后加加
//	//b = a，a = a + 1
//	printf("%d\n", c);//10
//	printf("%d\n", d);//9
//	
//	// --同理
//
//	return 0;
//}

//
//	() 强制类型转换
//

//int main()
//{
//	int a = 0;
//	int b = (int)3.14;//强制类型转换
//	int* p = &a;//p里面存储a的地址
//	*p = 3;// *是间接访问操作符（解引用操作符），通过地址指向a所处空间，理解为*p等价于a
//	printf("%d\n", a);
//	printf("%d\n", b);
//	
//	return 0;
//}


//		sizeof


//int main()
//{
//	int a = -13;
//	//	sizeof不是函数
//	//	strlen是函数
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof a);//4
//	//printf("%d\n", sizeof int);//err
//
//	return 0;
//}
//
//void text1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//
//void text2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//只要是地址大小就是4字节或8字节
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(ch));//10
//	text1(arr);//8
//	text2(ch);//8
//
//	return 0;
//}


//
//	==  !=
//

//int main()
//{
//	if (3 == 5)
//	{
//	}
//	if ("abc" == "abcd")//比较字符串首字符的地址
//	{
//	}
//	//比较两个字符串用strcmp
//	return 0;
//}


//
//逻辑操作符 &&  ||

//int main()
//{
//	int a = 3;
//	int b = 3;
//	int c = a && b;//两者为真，c结果为真，结果为1；反之，结果为0
//	int d = a || b;//一个为真，c为真，结果为1；服装，结果为0
//	printf("%d\n", c);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int a = 0;
//	int b = 1;
//	int c = 2;
//
//	i = a++ && ++b && c++;//并且，从左往右计算，为假就停止运算并返回结果
//	printf("i=%d\n", i);//0
//	printf("a = %d b = %d c = %d\n", a, b, c);
//
//	j = a++ || ++b || c++;//或者，从左往右计算，为真就停止运算并返回结果
//	printf("j=%d\n", j);//
//	printf("a = %d b = %d c = %d\n", a, b, c);
//
//	return 0;
//}


//
//三目操作符（条件操作符）
//exp1 ? exp2 : exp3
// 真	  √	×
// 假	  ×	√
//


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("a = %d", &a);
//
//	(a > 3) ? (b = 1) : (b = 2);//第一个为判断条件，第二三个为执行语句
//
//	printf("b = %d\n", b);
//
//	return 0;
//}


//逗号表达式
//用逗号隔开的多个表达式
//从左向右依次执行，整个表达式的结果是最后一个表达式的结果


//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a>b, a=b+10, a, b=a+1);
//
//	printf("c = %d\n", c);//c=13
//
//	return 0;
//}


//下标引用操作符 []

//int main()
//{
//	int arr[7] = { 0 };
//	//arr[7] --> *(arr+7)
//	//arr是数组首元素的地址
//	//arr+7就是跳过7个元素指向第8个元素
//	//*(arr+7)就是第8个元素
//
//
//	arr[5] = 5;//将下标为5的元素改为5
//	5[arr] = 9;//将下标为5的元素改为9
//	//	[]本质就是操作符，操作值为arr，7
//
//	printf("%d\n", arr[5]);
//
//	return 0;
//}


//		函数调用操作符	function()

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数调用
//	int c = Add(a, b);
//
//	printf("c = %d\n", c);//  ()就是函数调用操作符，操作数a，b
//
//	return 0;
//}


//			结构体调用
//	.	结构体对象.成员名
//  ->  结构体指针->成员名

//结构体
struct stu{
	char name[20];
	int age;
	double score;
};

void set_stu(struct stu* ps)
{
	//name是地址，不能将字符串赋值给地址
	//利用strcpy将字符串拷贝，放入地址所指向的空间中
	
	//结构体对象

	//strcpy((*ps).name, "zhangsan");
	//(*ps).age = 20;
	//(*ps).score = 100.0;

	//结构体指针

	strcpy(ps->name, "zhangsan");
	ps->age = 20;
	ps->score = 100.0;
}

//void print_stu(struct stu ss)//ss拷贝实参，会开辟一块新空间，会浪费空间
void print_stu(struct stu* ps)//使用指针则会节省空间
{
	printf("%s %d %lf\n", ps->name, ps->age, ps->score);
}


int main()
{
	struct stu s = { 0 };
	set_stu(&s);
	print_stu(&s);

	return 0;
}

