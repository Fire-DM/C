#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//第一个C语言项目
//c语言代码中一定会有main函数
//主函数

//printf是一个库函数
//用来打印数据
//使用printf时要加上#include<stdio.h>

//对stdio的解释
//std-standard标准
//i-input输入
//o-output输出

// 如何运行代码  
// ctrl + F5


		///////////////////////////////////////


//#include<stdio.h>

//main函数是程序的入口
//main函数有且只能有一个
//标准的主函数的写法
//int main()
//{
//	return 0;
//}
//代码正常运行或返回写return 0；
//异常终止或返回就return 非零


										//数据类型
										// 
//数据类型 
//#include<stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char)); //sizeof指大小
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}




//int main()
//{
//	int age = 20;
//	double price = 33.3;
///
//return 0;
//}

							///////////////////////////////////////


//变量和常量的区别
//变量分为：
//局部变量-{}内 如int a = 7；
//全局变量-{}外 如int b = 3；

//int b = 3;
//int main()
//{
//	int high = 175;
//	double weight = 55;
//	int a = 7;
//
//	return 0;
//}

//int a = 100;
//#include<stdio.h>
//int main()
//{
//	int a = 20;
//	printf("a=%d\n", a);//全局变量和局部变量名字相同时，局部优先
//
//	return 0;
//
//}

//但不建议将全局和局部变量的名字写成一样的





//写一个代码，计算两个整数的和
//scanf是一个输入函数   在编译器不支持时，可用 #define _CRT_SECURE_NO_WARNINGS
//printf是一个输出函数
//#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;//等于0是将其初始化，创建初始值，也可以为其他值
//
//	//输入两个整数
//	scanf("%d %d", &num1, &num2);//两个%d表示两个要输入的数，&表示需要的地址（理解为介词去，在）
//	//求和
//	int sum = num1 + num2;//创建变量
//	//输出
//	printf("%d\n", sum);
//
//	return 0;
//}


///////////////////////////////////////
//#include<stdio.h>
//变量的作用域//设置的变量的区间
//1.局部变量
// 局部变量的作用域是变量所在的局部范围
//int main()
//{
//
//	{
//		int a = 10;
//		printf("a=%d\n", a);//在第二个{}中设置的int a = 10无法在第一个{}中使用；但在第一个{}中可以在它包含的范围内使用
//	}
//
//
//}
//2.全局变量
//全局变量的作用域是整个工程。
//extern int a;// 这个代码可以声明来自外部的符号，比如在add.c中令int a = 648
//#include<stdio.h>
//void test()
//{
//	printf("test- - >%d\n", a);//暂时不会用，后面再说
//}
//int main()
//{
//	printf("a=%d\n", a);
//	{
//		printf("a=%d\n", a);
//	}
//
//
//	return 0;
// }


///////////////////////////////////////
//											变量生命周期
//局部变量		进入作用域生命周期开始，出作用域生命周期结束。
//int main()
//{
//	{							//
//		int a = 100;			//int a = 100 这个局部变量在第二个{}中有效（生命周期开始 --》生命周期结束），其他地方无效。
//		printf("a=%d\n", a);		//
//	}							//
//
//	return 0;
//}
//全局变量		整个程序的生命周期。

//总结：作用域约等于生命周期。
//


/////////////////////////
//																常量
//分为以下四种：
//1.字面常量    直观明白 如：30   3.14  
//2.const修饰的常变量
//3.define定义的标识符常量。//给一个值起名
//4.枚举常量


								//字面常量

//int main()
//{
//	//30；
//	//3.14；
//	//'w'；
//	//"abc"；
//
//								//const修饰的常变量
//
//	//int a = 10;
//	//int a = 20;//a是变量，可以更改。
//
//   const int a = 10;//在C语言中，const修饰的a，本质是变量，但不能直接修改，有常量的属性。以上只针对同一级里的代码
//   int b = 20;
//
//	{
//		int a = 30;
//		printf("a=%d\n", a);
//	}
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//
//	return 0;
//}

								//define定义的标识符常量
//#define MAX 100
//int main() 
//{
//	printf(" %d\n",MAX);
//	int a = MAX;
//	printf("%d\n", a);
//	return 0;
//}

								//枚举常量		//暂时不明白没关系
//enum Color
//{
//	//枚举常量
//	RED,
//	GREEN,
//	BLUE
//};
//
//enum Sex
//{
//	MAIE,
//	FEMALE,
//	SECRET
//
//
//};
//
//
//int main()
//{
//	//三原色
//	//Red Green Blue
//	int mun = 10;
//	enum Color c = RED;
//
//	return 0;
//}
