#include "function.h"

//С������n��̨��
int Fib(int n)
{
	if (n > 0 && n <= 2)
		return n;
	else if (n >= 3 && n <= 30)
		return Fib(n - 1) + Fib(n - 2);
	else
		return -1;
}


//ɾ���ض����е��ַ�
int delete(int arr[], int n, int del)
{
	int i = 0;
	int j = 0;//��Ϊ�±�ȷ����λ�þ���������Ų�ɾ�������ֵ�

	//��Ų�ɾ��������
	for (i = 0; i < n; i++)
	{
		//i��������ÿ�����ݣ�j������¼����ȷ�����±�
		//�±�Ϊi����������Ǳ��������ݣ��͸����±�Ϊj������
		if (arr[i] != del)
			arr[j++] = arr[i];
	}

	return j;
}


//��߷�����ͷ�֮��
int max_min_sub(int score[],int n)
{
	//�������ֵ������ʼ������Сֵ������Ƚ�
	int max = 0;
	//������Сֵ������ʼ�������ֵ������Ƚ�
	int min = 100;

	int i = 0;
	//����
	printf("��������:>");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &score[i]);
		//������ֵ����max
		if (max < score[i])
			max = score[i];
		
		if (min > score[i])
			min = score[i];
	}

	return max - min;
}


//ˮ�ɻ���
//�涨��ˮ�ɻ�������1�����򷵻�0
int Lily_Number(int num)
{
	int i = 0;
	int sum = 0;
	for (i = 1; i <= 4; i++)
	{
		//pow()Ϊ���ú�������һ������n�η�
		//��Ҫ��math.h��ͷ�ļ�������ֵΪdouble����
		int k = (int)pow(10, i);
		sum += (num % k) * (num / k);
	}
	//�ж�
	if (sum == num)
		return 1;
	else
		return 0;
	
}