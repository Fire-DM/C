#define _CRT_SECURE_NO_WARNINGS
#include "head.h"


//指针
//一定要画图做题

//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);//&a+1的类型为int(*)[5]，但被强制类型转换成了int*
//	printf("%d,%d", *(a + 1), *(ptr - 1));//2,5
//
//
//	return 0;
//}



//结构体
//假设p的值为0x100000，下列表达式的值分别为？（环境为x86）
//已知，Text的变量大小是20个字节

//int main()
//{
//	\\+0x1相当于+1
//	printf("%p\n", p + 0x1);//0x100000+20 --> 0x100014
//	printf("%p\n", (unsigned long)p + 0x1);//1,048,576+1 --> 1,048,577 -->0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);//0x100000+4 --> 0x100004
//
//	return 0;
//}


//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);//原类型为int(*)[5]，但被强制类型转换成了int*
//	int* ptr2 = (int*)((int)a + 1);//地址+1
//	//a在内存中的存储： 01 00 00 00 | 02 00 00 00 | 03 00 00 00 |04 00 00 00
//	//小端存储			   ptr2 向后访问四个字节
//	//a在内存中的存储： 01| 00 00 00 02 | 00 00 00 | 03 00 00 00 |04 00 00 00
//	//*ptr2=0x02 00 00 00
//	printf("%x,%x", ptr1[-1], *ptr2);//4,2000000
//
//	return 0;
//}


//int main()
//{
//	//int a[3][2] = { {0,1},{2,3},{4,5} };
//	int a[3][2] = { (0,1),(2,3),(4,5) };
//	//逗号表达式：从左到右依次计算结果为最后的值
//	//{ {1,3},{5,0},{0,0} }
//	int* p;
//	p = a[0];//a[0]是一维数组{1,3}的数组名,表示&a[0][0]
//	printf("%d", p[0]);//1
//
//	return 0;
//}



//int main()
//{
//	int a[5][5];//int(*)[5]
//	int(*p)[4];//类型为int(*)[4]
//	p = a;//被强行转换
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//FFFFFFFC,-4
//	//p在访问内存时单位为4字节，而a为5字节，a[5]为1字节
//	// printf()打印的是内存中的数，内存中存放的是补码
//	//%d是有符号数，读取内存中的补码，然后转换成原码
//	// %p是无符号类型，读取内存中的补码
//
//	return 0;
//}



//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));//*(aa+1)表示aa[1],是第二行第一个元素的地址（我在这有错误理解）
//
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10,5
//
//	return 0;
//}


//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	//char* pstr1 = "work";
//	//char* pstr2 = "at";
//	//char* pstr3 = "alibaba";
//	//char* a[] = { pstr1, pstr2, pstr3 };
//
//	char** pa = a;
//	//char* (*pa2)[3] = &a;
//	printf("%s\n", *pa);//*pa是w的地址，%s通过地址打印字符串
//	//*pa是a的地址
//	return 0;
//}


int main()
{
	char* c[] = { "work","at","mihoyo","lucky"};
	//char *c[] ={ pc1,pc2,pc3,pc4};
	//char* pc1 = "work";
	// pc1--> w
	char** cp[] = { c + 3,c + 2,c + 1,c };

	char*** cpp = cp;

	printf("%s\n", **++cpp);//cpp+1 -->mihoyo
	//注意，此时cpp指向的值改变为c+2
	printf("%s\n", *-- * ++cpp + 3);//* ++cpp=c+1,  * -- * ++cpp=pc1, * -- * ++cpp +3 = pc1+3
	//注意，此时cpp指向的值改变为c+1
	printf("%s\n", *cpp[-2] + 3);//cpp[-2]->*(cpp-2)=c+3 , * cpp[-2]=pc4 , * cpp[-2]+3=pc4+3 
	//注意，此时cpp指向的值仍然为c+1
	printf("%s\n", cpp[-1][-1] + 1);//cpp[-1] = c+2, cpp[-1][-1] = *(c+2-1)
	//注意，此时cpp指向的值仍然为c+1


	return 0;
}