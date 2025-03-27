#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//结构是一些值的集合，这些值被称为成员变量
//结构体就是用来描述复杂变量

//描述人
//类型（类），不占用内存，相当于图纸
struct Peo
{
	char name[20];
	char tele[12];
	char sex[5];
	int high;
}m, n;
//m和n是用struct Peo结构类型创建的2个变量，但一般创建局部变量

struct Peo h;//全局变量

struct St
{
	struct Peo p;//全局变量
	int num;
	float f;
};

//指针传递时要用->
//地址传递节省空间和时间
//结构体传参时尽量用地址
void print(struct Peo* sp)
{
	printf("%s %s %s %d\n", sp->name, sp->tele, sp->sex, sp->high);//结构体指针，成员变量
}

void print2(struct Peo p)
{
	printf("%s %s %s %d\n", p.name, p.tele, p.sex, p.high);
}

//int main()
//{
//	struct Peo p1 = { "张三","15265452525","男",181};//结构体变量的创建，并初始化，相当于房子，会申请内存
//	struct St s = { {"李四","15265552525","男",171},100,3.14f };
//
//	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.high);//结构体变量，成员变量
//	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tele, s.p.sex,s.p.high,s.num,s.f);
//
//	print(&p1);
//	print2(p1);
//	return 0;
//}

