#define _CRT_SECURE_NO_WARNINGS
#include "work.h"


int is_narcissistic_number(int i)
{
	//2.��������Ǽ�λ��
	int tmp = i;
	int n = 1;//������1λ��
	while (tmp/10)
	{
		n++;
		tmp /= 10;//ʵ�ʸı�tmp��ֵ����ֹѭ��
	}

	int sum = 0;
	tmp = i;//��ԭtmp��ֵ
	while (tmp)
	{
		//3.�����λ��n�η�
		sum += (int)pow(tmp % 10, n);//pow()����ֵ����Ϊdouble
		tmp /= 10;
	}

	if(i==sum)
	{
		return sum;
	}
	else
	{
		return 0;
	}
}

