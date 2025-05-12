#define _CRT_SECURE_NO_WARNINGS
#include "head.h"



//�����ַ���1
void my_strrev(char* str, size_t len)
{
	int left = 0;
	int right = len - 1;

	while (left < right)
	{
		char tmp = str[left];
		str[left] = str[right];
		str[right] = tmp;
		left++;
		right--;
	}
}

//�����ַ���2
void my_strrev_2(char* left, char* right)
{
	assert(left && right);//ָ�벻��Ϊ��
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

///////////////////////////////////////////////////////


//�ַ������������ַ���������
void Left_handed(char* str,int n,size_t len)
{
	int i = 0;
	n %= len;//����n����len�����

	for(i=0;i<n;i++)
	{
		//�ó�һ��Ԫ��
		char tmp = str[0];
		//������Ԫ����ǰ�ƶ�һλ
		int j = 0;
		for (j=0;j<len-1;j++)
		{
			str[j] = str[j + 1];
		}
		//��ת�ó���Ԫ��
		str[len - 1] = tmp;
	}

}



//�ַ������������򷨣�
void Left_handed_strrev(char* str,int n,size_t len)
{
	n %= len;//����n����len�����

	/*my_strrev(str, n);
	my_strrev(str+n, len-n);
	my_strrev(str, len);*/
	
	my_strrev_2(str, str + n - 1);
	my_strrev_2(str + n, str + len - 1);
	my_strrev_2(str, str + len - 1);
}


///////////////////////////////////////////////////////


// ��ÿ���������ֺ��ض�ֵ�Ƚ�
// ����ÿ����������ȥ���ض�ֵ�Ƚ�
// ��������������һ��/�������һ��/����С��
// ��ǰ�߸�����ȥ�����ڵ���һ��
// ��ǰ�߸�С��ȥ�����ڵ���һ��
// �ظ���������
// ��5
//1 2 3
//4 5 6
//7 8 9

//���Ͼ���
struct Point find_num(int arr[][3], int row, int col, int num)
{
	int i = 0;
	int j = col - 1;
	struct Point p = { -1,-1 };
	while (i <= row - 1 && j >= 0)
	{
		//��ȥһ��
		if (arr[i][j] > num)
			j--;
		//��ȥһ��
		else if (arr[i][j] < num)
			i++;
		else
		{
			p.x = i+1;
			p.y = j+1;
			return p;
		}
	}
	
	return p;
}