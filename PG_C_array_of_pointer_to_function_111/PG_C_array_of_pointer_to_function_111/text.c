#define _CRT_SECURE_NO_WARNINGS
#include "head.h"

//函数指针数组——存放函数指针的数组

//int main()
//{
//	int (*pf)() = text;//pf函数指针
//
//	int (*arr[5])() = { text };//arr是函数指针数组
//
//	int ret = text();
//	printf("%d\n", ret);//ret = 123
//
//	return 0;
//}




//写一个计算器，实现加，减，乘，除(两个数）
//（函数指针数组迭代版本）
//转移表


//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//
//	int (*PfArr[5])(int, int) = { 0,Add,Subtract,Multiply,Divide };
//
//	do {
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//
//		if (input == 0)
//		{
//			printf("退出计算器\n");
//			break;
//		}
//		else if(input>=1 && input<=4)
//		{
//			int ret= PfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//
//		/*switch (input)
//		{
//		case 1:
//			clac(Add);
//			break;
//		case 2:
//			clac(Subtract);
//			break;
//		case 3:
//			clac(Multiply);
//			break;
//		case 4:
//			clac(Divide);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}*/
//
//	} while (input);
//
//	return 0;
//}


//测试scanf
//int main()
//{
//	int input = 0;
//	int input2 = 0;
//	int ret = scanf("%d %d", &input, &input2);
//
//	printf("%d\n", ret);
//
//	return 0;
//}




//
//指向函数指针数组的指针
//
//

//int main()
//{
//	//函数指针数组
//	int (*PfArr[5])(int, int) = { 0,Add,Subtract,Multiply,Divide };
//
//	//指向【函数指针数组】的指针
//	int (*(*ppfArr)[5])(int, int) = &PfArr;
//	//指向数组的元素类型为int(*)(int, int)
//
//	return 0;
//}




//
//回调函数
//通过函数指针调用的函数


//冒泡排序

int main()
{
	//int arr1[] = { 6,5,4,3,2,1 };
	int arr1[] = { 3,6,9,5,7,2,4,6 };
	//把数组排序成升序
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	bubble_sort(arr1, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr1[i]);
	}

	return 0;
}
