#define _CRT_SECURE_NO_WARNINGS
#include "head.h"

//
//如何传参
// ——让形参的类型和实参的类型相同
//


//
//数组指针常见用法——二维数组传参
//

//int main()
//{
//	//打印arr
//	int arr[3][2] = { 1,2,3,4,5,6 };
//
//	print1(arr,3,2);//函数需复制arr的内容
//	print2(arr,3,2);//函数接收地址
//
//	return 0;
//}



//int main()
//{
//	int arr[5];//arr是数组
//	int* parr1[5];//parr1是指针数组
//	int (*parr2)[5];//parr2是数组指针，指向一个 包含10个元素，每个元素类型为int的数组
//	int (*parr[10])[5];//parr3是存放数组指针的数组，元素类型为int (*)[5]
//
//	return 0;
//}



//
//二级指针传参
//

//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int arr[5] = { 0 };
//	int* parr = arr;
//	int** pp = &p;//pp是&p（p的地址），*pp是&n（n的地址），**pp是n的值
//	text(pp);//pp类型为int**
//	text(&p);//&p类型为int**
//
//	return 0;
//}



//
//函数指针
//指向函数的指针
//


//int main()
//{
//	int arr[8] = { 0 };
//	//&数组名——数组的地址
//	int (*p)[8] = &arr;//&arr为整个数组的地址
//
//	//&函数名——函数的地址
//	//下面两行代码结果相同
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//
//	//函数指针的存储,函数名可写可不写
//	int (*pf)(int, int) = &Add;
//	//int (*pf)(int, int) = Add;
//	
//	//函数指针使用时可以不使用*,或使用多个*
//	int ret1 = (*pf)(2, 3);
//	int ret2 = pf(2, 3);
//	int ret3 = Add(2, 3);
//	printf("%d\n", ret1);//5
//	printf("%d\n", ret2);//5
//	printf("%d\n", ret3);//5
//
//	return 0;
//}



int main()
{
	//通过函数指针让另一个函数调用不同的函数，实现一个综合的功能
	calc(Add);

	return 0;
}


