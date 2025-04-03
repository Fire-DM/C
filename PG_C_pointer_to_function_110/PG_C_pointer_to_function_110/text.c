#define _CRT_SECURE_NO_WARNINGS
#include "head.h"


//int main()
//{
//	//指针
//	int n = 0;
//	char ch[6];
//	int* p = &n;
//	char* pc = ch;
//
//	//指针数组
//	int* arr[5];
//	char* ch2[5];
//	int** parr = arr;
//
//	//数组指针
//	int arr2[6];
//	int (*parr2)[6] = &arr2;
//
//	return 0;
//}


//int main()
//{
//	//函数指针——指向函数的指针
//	//printf("%p\n", text)/*;
//	//printf("%p\n", &text*/);
//
//	//函数指针
//	int (*pf)(const char*) = text;
//	//调用
//	int ret = pf("abc");//字符串传参也是传递首元素地址
//	printf("%d\n", ret);
//
//	return 0;
//}




//阅读复杂代码要先从自命名的变量名或者数字入手
//typedef void(*pf_t)(int);//将void(*)(int)重命名为pf_t,它是类型名
//
//int main()
//{
//	//(*pf)()
//	( *(void (*)() )0 )();
//	//和上面相同( (void (*)() )0 )();
//	//void(*p)()	是函数指针
//	//void(*)()		是函数指针类型
//	//(void(*)())0	 就是将0强制转换成void(*)()类型
//	//
//	//以上操作位函数调用，调用地址为0的函数
//	//把0强制类型转换为：无参，返回类型是void的函数的地址
//	//调用0地址处的函数
//
//	void( *singal ( int,void(*)(int) ) )(int);
//	//singal是函数名，先和()结合，以上代码是一次函数声明
//	// 函数声明 -->  类型 函数名(参数类型);
//	//声明的signal函数的第一个参数类型是int，
//	// 第二个参数类型则是函数指针，该函数指针指向的函数参数的类型为int，函数返回值类型为void
//	//signal函数的返回值也是函数指针，该函数指针指向函数的参数类型为int，返回类型为void
//
//	//简化代码
//	pf_t signal(int, pf_t);
//
//	return 0;
//}




//
//函数指针的用途
//

//写一个计算器
//实现加，减，乘，除(两个数）
//操作时用1,2,3,4实现功能，选0则退出
int main()
{
	int n = 0;

	do {
		menu();
		printf("请选择:>");
		if (scanf("%d", &n) != 1)
		{
			printf("只能0~4其中一个数，请重新输入:>");
		}
		switch (n)
		{
		case 1:
			clac(Add);
			break;
		case 2:
			clac(Subtract);
			break;
		case 3:
			clac(Multiply);
			break;
		case 4:
			clac(Divide);
			break;
		case 0:
			printf("退出计算器\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (n);

	return 0;
}