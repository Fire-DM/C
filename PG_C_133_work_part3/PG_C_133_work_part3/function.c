#define _CRT_SECURE_NO_WARNINGS
#include "head.h"

//�Ƚ���������
int int_cmp(const void* sep1, const void* sep2)
{
	return *(int*)sep1 - *(int*)sep2;
}


//�ж��ǲ�����������
int is_sorted(int* p,int n)
{
	int flag1 = 0;//����
	int flag2 = 0;//����
	while (--n)
	{
		if (*p > *(p + 1))//����
			flag2 = 1;
		else if (*p < *(p + 1))//����
			flag1 = 1;
		else
			;

		p++;
	}
		
	//0��1��ʾ����
	//2��ʾ����
	return flag1 + flag2;
}
