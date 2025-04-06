#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//结构体（head.h）
struct Stu
{
	char name[20];
	int age;
};



//测试用函数
int text();

//计算器
void clac(int (*)(int, int));

//加减乘除
int Add(int x, int y);
int Subtract(int x, int y);
int Multiply(int x, int y);
int Divide(int x, int y);

//计算器菜单
void menu(void);

//冒泡排序
void bubble_sort(int*, int);

//比较数据大小
int cmp_int(const void* , const void* );


//比较姓名
int cmp_stu_by_name(const void* ,const void* );
//比较年龄
int cmp_stu_by_age(const void*, const void*);


//交换位置
void Swap(char* buf1, char* buf2, int width);
//改进后的冒泡序列，可用于任何类型数据的比较
void new_bubble_sort(void* base,//待比较元素的起始位置
	int sz, //待比较元素的个数
	int width,//待比较元素的大小（单位为字节）
	int (*cmp)(const void* e1, const void* e2));//函数指针，指向比较两个元素大小的函数
