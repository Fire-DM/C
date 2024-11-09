#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//															字符串

//   \0标志字符串结束
//int main()
//{
//	//char 字符类型
//	/*char ch = 'w';*/
//	//字符串
//	//C语言中没有字符串类型
//	"abcde";
//	char arr1[] = "abcdef";//[]里可不写，会自动适配后面字符串的长度。		不用写\0，在监视里面有\0
//	char arr2[] = { 'a','b','c','d','e','f','\0'};//不主动写\0 在监视里面没有，运行也会有问题
//
//	printf("%d\n", strlen(arr1));           //求之前定义过的字符串的长度
//	printf("%d\n", strlen(arr2));        
//
//
//	int len = strlen("abc");//求字符串长度，string length                       只能求括号里的，不能求前面定义过的
//	//它是一个库函数，需要引用头文件 string.h         写成#include<string.h>
//	printf("%d\n", len);
//
//
//    printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//////////////////////////////////////////////////////////////////////
//                                            转义字符
//被转变意义的字符
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	printf("cen");
//	printf("ce\n");
//	//将原来的字符n转变成换行， \n为转义字符
//
//	printf("bo0th");
//	printf("bo\0th");
//	//将原来的0转变成结束标志，\0为转义字符
//
//	return 0;
//}
//              c语言里规定了哪些是转义字符

//三字母词        早期编译器里会出现的编译方法
//??( --> ]
//??) --> [

//%d      	              //打印整形	
//%c                      //打印字符
//%s				      //打印字符串
//%f                      //打印浮点数或小数（float类型的数据）
//%lf                     //打印double类型的数据
//%zu                     //打印sizeof的返回值
//#include<stdio.h>
//int main()
//{
//	//printf("welcome\n");//字符或字符串可以直接打印
//	//printf("%s\n", "(are ypu ok??)");//某些编译器会将??( 变成 ]
//	//printf("%s\n", "(are ypu ok\?\?)");//有了\就不会将其视为三字母词 
//	//printf("%c\n",'\'');//打印‘要用 \'
//	//printf("\"\n");
//
//	//printf("abc\0de\n");
//	//printf("abc\\0de\n");//反斜杠 \\，防止被解释成转义字符
//
//	//printf("\a");//警告声音 \a，蜂鸣
//
//	//printf("abc\tdef\n");//水平制表符 \t，相当于TAB,可以水平空出五格距离
//	//printf("abc	def\n");//按一下TAB即可
//	//printf("abc\vdef");//垂直制表符 \v，垂直向下挪一格
//
// //printf("abc\fdef");//进纸符 \f，把后面的所有字符向下挪一格
//	//printf("abc\bdef");//退格符 \b，把前一个字符吃掉了
//	
//	//printf("abc\rdef");//回车	\r ，吃掉前面所有字符
//
//	//printf("%c\n",'\130');//  \ddd(d表示阿拉伯数字)		将八进制转换成十进制，再经过ASCII编码转换成键盘上的符号，如A  a ‘  等等
 // printf("%c\n",'\x60');//  \xdd(d表示阿拉伯数字)		将十六进制转换成十进制，再经过ASCII编码转换成键盘上的符号，如B  , \ 等等
//
//
//return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//printf("%d\n", strlen("abc def"));//空格也算字符， \0不算
//	printf("%d\n", strlen("c:\test\628\test.c"));//14个
//
//	return 0;
//}

////////////////////////////////////								注释
// 1.写注释能梳理思路
// 2.对复杂代码进行解释
// 3.写下必要的注释能帮自己，也能帮别人			自己可能要看很久之前写的代码，别人可能要看自己之前写的代码
//int main()
//{
	//int a=10;//去掉不需要的代码
    
	//对一些复杂代码的解释
    //创建指针变量p，并赋值为NULL
	//int* p = NULL;


	//return 0;
//}

//C语言风格的注释 /*   */
//缺点是嵌套注释时会有问题
/*
int main()
{
/*
int a=10
*/
/*
	return 0;
}
*/

//C++风格的注释  //
//略

//								选择语句

//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("要好好学习吗?");
//	scanf("%d", &input);
// 
// ==是等于，=是赋值
//	if (input == 1)
//	{
//		printf("好offer\n");
//	}
//	else
//	{
//		printf("卖红薯\n");
//	}
//	return 0;
//}

//							循环语句

// int main()
//{
//	int line = 0;
//	printf("学习编程\n");
//
//	while (line < 200)
//	{
//			printf("写代码:%d\n",line);
//			line += 1;
//	}
//	while ( line >= 200 && line <= 300)
//	{
//		if (line >= 200 && line <= 240)
//		{
//			printf("良好的基础:%d\n", line);
//		}
//		else
//		{
//			printf("继续学习:%d\n", line);
//		}
//		line++;
//	}
//
//	return 0;
//}

//int main()
//{
//	int line = 200;
//	printf("颓废\n");
//
//	while (line >= 100)
//	{
//		printf("忘记代码:%d\n", line);
//		line--;
//	}
//	while (line >=30 && line < 100)
//	{
//		printf("基础丧失:%d\n",line);
//		line--;
//	}
//	while (line < 30 && line >= 0)
//	{
//		if (line < 30 && line > 10)
//			printf("忘记编程:%d\n", line);
//
//		else
//			printf("继续颓废:%d\n", line);
//		line--;
//	}
//	return 0;
//}


//											13.函数
//类似数学公式，能求特定值 如strlen

//int Add(int x, int y)//ADD->函数名，x y->函数参数，int->返回类型
//{
//	int z = 0;//
//	z = x + y;//这三行叫函数体
//	return z;//
//}

//简化代码
//int Add(int x, int y)
//{
//	return x + y;
//}
////封装好函数之后就可以频繁调用
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	//输入
//	scanf("%d %d", &n1, &n2);
//	//求和
//	//int sum = n1 + n2;
//	int sum = Add(n1, n2);//求和
//
//	//打印
//	printf("%d\n", sum);
//
//	return 0;
//}


//											14.数组

//int main()
//{
	//int a = 10;
	//int b = 11;
	////0-9
	//int c = 0;
	//int d = 1;
	////......
	//int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	//double d[4] = { 3.14,1.01,2.01,3.07 };
	////数组里每个数字都有个自然序号（按位置排序），叫数组的下标，下标从0开始
	// 程序从下标访问数组
	// 
	//int arr2 = 1;
	// C99标准之前数组的大小用常量或常量表达式来指定
	// 
	//打印单个元素
	//printf("%d\n",arr2);
//
	//用whlie循访问并打印出数组所有元素
	//char arr3[] = "MonTueWedThuFriSatSun";
	//int arr4[5] = {5,4,3,2,1};
//
	//int i = 0;
	//int f = 0;
	//while (i<21)
	//{
	//	printf("%c ",arr3[i]);//这里的i相当于数组的下标
	//	
//
	//	i++;//i=i+1;//两者都可以
//
	//}
	////
	//// 打印数组中的所有元素
	//while (f < 5)
	//{
	//printf("%d\n", arr4[f]);//这里的i相当于数组的下标
	//	f = f + 1;
	//}
//
	//return 0;
//}

 //							求最值

//设函数
//int get_max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	//输入
//	scanf("%d %d",&num1,&num2);
//	//引用
//	int max = get_max(num1,num2);
//	//输出
//	printf("%d\n", max);
//	
//	return 0;
//}

//							打印B2C小飞机
//int main()
//{
	/*printf("    bb\n");
	printf("    bb\n");
	printf("bbbbbbbbbb\n");
	printf("bbbbbbbbbb\n");
	printf("    bb\n");
	printf("    bb\n");*/

//}	
	

	//return 0;
//}


//						
//#include<stdint.h>
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int num3 = 0;
//	int arr[4] = { 0 };
//	
//	printf("请输入一个五位数");
//	//输入
//	scanf("%d", &num1);
//	num2 = num1 % 10000;//2345
//	for (int i = 0; i < 4; i++)
//	{
//		if (num2 % 10 != 0)
//		{
//			arr[i] = num2 % 10;
//			printf("%d", arr[i]);
//		}
//		num2 = num2 % 10;
//	}
//
//	return 0;
//}

//															17.操作符

//								1.算数操作符   加+	减-		乘*		除以/		取模（就是取余数）%

//int main()
//{
	//除号的两端都是整数的时候，执行的是整数除法；如果两端有浮点数，就执行浮点数的除法
	//int a = 7 / 3 ;//除以
	//float c = 7 / 2.0;
	////取模操作符的等式只能是整数
	//int b = 7 % 3;//取模，就是余数
	//
	//
	//printf("%d\n", a);
	//printf("%lf\n", c);//常态六位小数
	//printf("%.1lf\n", c);//若只想打印出一位小数，在lf前加上.1
	//printf("%.3lf\n", c);//同理可打出三位小数
//
	//printf("%d\n", b);
//
	//return 0;
//}


//							2.移位操作符		>>      <<

//							3.位操作符			&		ʌ		


//							4.赋值操作符		赋值=		+=		*=		/=		&=		ʌ=		|=		>>=		<<=

//int main()
//{
//	int a = 0;//初始化：创建变量的同时给它一个值
//	//上一行代码创建了一个变量a
//	a = 20;//赋值：已经有了变量，将一个值赋给它
//
//	a = a + 3;//a=23
//	a += 3;//对上一行代码的简化
//
//								//除了“=”其余赋值操作符原理同上
//
//	return 0;
//}

//							5.单目操作符	!		-		+		&		sizeof		~		--		++		*		（类型）

//只有一个操作符	符号旁只有一个数据就可以运行，如 !flag
//
//int main()
//{	
// //	!	逻辑反操作
	//C语言中，0表示假，非0表示真
	//int flag = 0;//此时flag为假
	//if (!flag)//!可以颠倒真假，这时flag为真
	//{
	//	printf("game\n");//为真才能打印出内容，为假不能打印出内容
	//}


	//	-	负值;	+	正值
	//int b = -10;//-表示负值
	//int c = -b;
	//int d = +b; 
	//printf("%d",c);//10
	//printf("%d",d);//-10


	//	sizeof		操作数的类型长度（以字节为单位）

	//int d = 7;
	//printf("%zu\n", sizeof(d));//4			整型占4个字节
	//printf("%zu\n", sizeof(int));//4		417和416意义相同
	//printf("%zu\n", sizeof d);//4			变量可以不用括号，但类型一定要括号
	//printf("%zu\n", sizeof(int));
	// 
	//int arr[10] = { 0 };
	//printf("%zu\n", sizeof(arr));//40		计算的是整个数组的大小，单位是字节
	//printf("%zu\n", sizeof(arr[0]));//4		计算的是一个元素0的大小，单位是字节
	//printf("%zu\n", sizeof(arr) / sizeof(arr[0]));//10	计算的是整个数组元素的个数，单位是个


	//	++	前置、后置++；	--	前置、后置--
	
	//int a = 10;
	//int b = a++;//后置++，先使用，后++
	////int b = a; a=a++;
	//printf("%d\n", a);//11
	//printf("%d\n", b);//10
//
	//int g = 10;
	//int h = ++g;//前置++，先++，后使用
	////g = g + 1;h = g;
	//printf("%d\n",g);//11
	//printf("%d\n",h);//11
//
	//int e = 20;
	//int f = e--;//后置--，先使用，后--
	//printf("%d\n",e);//19
	//printf("%d\n",f);//20


	//	(类型)	强制类型转换
	//int i = (int)3.14;//3.14 字面浮点数，编译器默认理解为double类型，强制转换类型
	//printf("%d\n", i);//3

//	return 0;
//}

	//							关系操作符		>	>=	<=	!=	==
	
//	int main()
//{
//	int a = 10;
//	//if (a = 3)//此时=为赋值，此时a=3，为真（0为假，非0为真），会打印hehe
//	if (a == 3)//此时==为等于，但a=10，为假，不会打印hehe
//	{
//		printf("hehe\n");
//	}
//	
//	
//	
//		return 0;
//}


//				逻辑操作符		&&		||

//int main()
//{
//	//	&&	逻辑与	-	并且
//	//	||	逻辑或	-	或者
//
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	int d = 50;
//	if (a && b)//两边都为真，才运行
//	{
//		printf("hehe\n");
//	}
//	if (c || d)//有一个为真就可以运行
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}


//				条件操作符（三目操作符，有三个操作数）	

// exp1 ? exp2 : exp3
//	真	  √	 ×
//	假	  ×	 √
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int r1 = a > b ? a : b;			//a > b为假，输出b
//	int r2 = a < b ? a : b;			//a < b为假，输出a
//
//	printf("%d\n", r1);		//20
//	printf("%d\n", r2);		//10
//
//	return 0;
//}


//					逗号表达式：用逗号隔开的一串表达式

//特点：从左到右依次计算，整个表达式的结果是最后一个表达式的结果
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//
//	//			c = 8	a = 28		5
//	int d = (c = a - 2, a = b + c, c - 3);//5
//
//	printf("%d\n", d);
//	//printf("%d\n", f);
//
//	return 0;
//}


//					下标引用、函数调用和结构成员		[]		()		.		->

//int main()
//{
//	//int c = 10;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//这里的[]不是下标引用操作符		创建数组时需要在程序运行前确定所占空间大小，而对变量的赋值在程序运行之后，因此数组里不能用变量
//
//	int n = 3;
//	arr[n] = 20;//通过下标访问元素时可以用变量
//
//	arr[3];//[]就是下标操作引用符	arr和3就是[]的操作数
//
//
//	return 0;
//}


//		函数调用符()

//int Add(int x, int y)
//{
//	/*int z = 0;
//	z = x + y;
//	return z;*/
//	return x + y;//简化
//
//}
//int main()
//{
//	int sum = Add(2, 3);//()函数调用符，Add和3都是()的操作数
//
//	printf("%d\n", sum);
//	return 0;
//}




//				18.关键字-	C语言本身内置的，不能自己创建

//	auto	break	case	char		const		continue	default		do			double		else	enum	
// extern	float	for		goto		register	int			long		if			return		short	signed
// sizeof	static	switch	typedef		union		unsigned	void		volatile	while	
// 
//int main()
//{
//	auto int a = 10;//自动创建，自动销毁。局部变量都是自动变量，一般省略了auto
//
//	return 0;
//}

//变量的命名:
//1.有意义
//2.有字母、数字、下划线组成，不能有特殊字符，不能以数字开头
//3.不能是关键字


//			20.关键词typedef和static
 
//typedef

//	typedef		类型定义，可理解为类型重命名,简化代码的书写
//typedef unsigned int uint;
//
////结构体类型，可用typedef简化，在括号外写简化后的名称
//typedef struct Node
//{
//	int date;
//	struct Node* next;
//}Node;		//Node就是简化后的struct Node
//int main()
//{
//	//下面两行代码类型相同
//	unsigned int a = 1;
//	uint b = 2;
//
//	//下面两行代码类型相同
//	struct Node n1;
//	Node n2;
//
//	return 0;
//}

//	static
//1.修饰局部变量
//2.修饰全局变量
//3.修饰函数

//static修饰局部变量

//void test1()
//{
//	int a = 1;
//	a++;
//	printf("%d ", a);
//}
////static修饰局部变量时，局部变量出了作用域不会销毁
////本质上是static改变了局部变量的存储位置(栈区 -> 静态区)
////影响了变量的生命周期，生命周期变长，和程序的生命周期一样
//void test2()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test1();//2 2 2 2 2 2 2 2 2 2
//		test2();//2 3 4 5 6 7 8 9 10 11
//		i++;
//	}
//	return 0;
//}


//不返回可以用void

//void test()
//{
//	//执行任务
//	printf("hello,world\n");
//}

//static修饰全局变量

////声明外部符号
////全局变量具有外部连接属性
//extern int g_val2;
////add.c的g_val3被static修饰
//extern int g_val3;
////static修饰全局变量时，它的外部链接属性就变成了内部连接属性，其他源文件(.c)就不能再使用这个全局变量了
//int main()
//{
//	printf("%d\n", g_val2);
//	printf("%d\n", g_val3);
//
//	return 0;
//}

//static修饰函数

//extern int Add1(int x, int y);
//extern int Add2(int x, int y);//函数Add2被static修饰后，外部链接属性就变成了内部连接属性，其他源文件(.c)就不能再使用了
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int z = Add1(a, b);
//	int m = Add2(a, b);
//
//	printf("%d\n", z);
//	printf("%d\n", m);
//
//	return 0;
//}


//电脑上的存储设备（由上往下依次空间增大、读写速度变慢、造价变低）

//寄存器(register)
//高速缓存(cache)
//内存
//硬盘
//int main()
//{
//	//寄存器变量
//	register int num = 3;//建议3放在寄存中,最终有编译器决定
//
//	return 0;
//}
