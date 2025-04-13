#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>



//结构体指针，变量名为p（x86环境）
struct Text
{
	int Num;//4字节
	char* pcName;//4字节
	short sDate;//2字节
	char cha[2];//1*2字节
	short sBa[4];//2*4字节
	//合计20字节
}*p = (struct Text*)0x100000;//将一个值赋给p