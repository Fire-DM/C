#define _CRT_SECURE_NO_WARNINGS
#include "head.h"

//������
int text()
{
	return 123;
}

//�������˵�
void menu(void)
{
	printf("******** 1.��� ********\n");
	printf("******** 2.��� ********\n");
	printf("******** 3.��� ********\n");
	printf("******** 4.��� ********\n");
	printf("******** 0.�˳� ********\n");
}


//��
int Add(int x, int y)
{
	return x + y;
}

//��
int Subtract(int x, int y)
{
	return x - y;
}

//��
int Multiply(int x, int y)
{
	return x * y;
}

//��
int Divide(int x, int y)
{
	return x / y;
}


//дһ����������ʵ�������ļӼ��˳�
void clac(int (*pf)(int, int))
{
	int a = 0;
	int b = 0;
	int ret = 0;

	printf("������������:>");
	scanf("%d %d", &a, &b);
	ret = pf(a, b);
	printf("���Ϊ%d\n\n", ret);
}


/////////////////////////////////////////////////////

//ð������
//��ÿ��Ԫ��ͬ����Ԫ�رȽϣ�����λ��
void bubble_sort(int* p, int sz)
{
	int i = 0;
	//����
	for (i = 0; i < sz-1; i++)
	{
		int flag = 1;//���������������
		int j = 0;
		//�±�Ϊj����Ҫ���±�Ϊsz-1-j�����Ƚ�
		for (j = 0; j < sz - 1-i; j++)
		{
			if ( p[j]> p[j+1])
			{
				int tmp = p[j + 1];
				p[j + 1] = p[j];
				p[j] = tmp;
				flag = 0;//���н�����Ϊ0����ʾ��������
			}
		}
		if (flag == 1)
		{
			break;//����������ֱ���˳�
		}
	}
}



//�Ƚ���������Ԫ��
//e1ָ��һ��������
//e2ָ����һ������
int cmp_int(const void* e1, const void* e2)
{
	//if (*(int*)e1 > *(int*)e2)//�޷�ֱ�ӽ��н�����
	//	return 1;
	//else if (*(int*)e1 == *(int*)e2)
	//	return 0;
	//else
	//	return -1;

	//��
	return (*(int*)e1 - *(int*)e2);//����
	//return (*(int*)e2 - *(int*)e1);//����
}

/////////////////////////////////////////////////

//����ʹ��qsort��new_bubble_sort����ṹ��
void text_Stu()
{
	struct Stu s[] = { {"zhangsan",18},{"lisi",16},{"wangwu",45} };
	int sz = sizeof(s) / sizeof(s[0]);
	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
	new_bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
}


//�Ƚ�����
int cmp_stu_by_name(const void* e1,const void* e2)
{
	//�ṹ��ָ��Ҫ��->
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}


//�Ƚ�����
int cmp_stu_by_age(const void* e1,const void* e2)
{
	//return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;//����
	return ((struct Stu*)e2)->age - ((struct Stu*)e1)->age;//����
}


//����λ��
void Swap(char* buf1, char* buf2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
	//��������ʱ�ռ�
	//����ÿһ���ֽڣ�������ֵ
		//00000000 00000000 00000000 00000001  - 1
		//00000000 00000000 00000000 00000011  - 3
		//8λ��һ���ֽڣ���Ӧ�ֽڽ���˳��
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}


//�Ľ����ð�����У�ѧ��qsort��
//typedef (*cmp)(const void* e1, const void* e2)
void new_bubble_sort(void* base,//���Ƚ�Ԫ�ص���ʼλ��
	int sz, //���Ƚ�Ԫ�صĸ���
	int width,//���Ƚ�Ԫ�صĴ�С����λΪ�ֽڣ�
	int (*cmp)(const void* e1, const void* e2))//����ָ�룬ָ��Ƚ�����Ԫ�ش�С�ĺ���
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//����Ϊ˳��
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//��base���͸�Ϊchar*�������Ϳɸ������ͽ���+1-1����
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//����ʵ������Ϊshort���β�ִ�С�+1-1������ֻ��Ҫ+2����
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
				flag = 0;
			}
		}
		if (flag == 1)//��һ�ζ�û�н�����˵��Ϊ˳��
		{
			break;
		}
	}
}