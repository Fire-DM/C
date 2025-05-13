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



//���Ͼ��󡪡��ڶ��ֽⷨ
int find_num_2(int arr[][3], int* px, int* py, int num)
{

	int i = 0;
	int j = *py - 1;
	struct Point p = { -1,-1 };
	while (i <= *px - 1 && j >= 0)
	{
		//��ȥһ��
		if (arr[i][j] > num)
			j--;
		//��ȥһ��
		else if (arr[i][j] < num)
			i++;
		else
		{
			*px = i + 1;
			*py = j + 1;
			return 1;
		}
	}

	*px = -1;
	*py = -1;

	return 0;//�Ҳ���
}

///////////////////////////////////////////////////////


//дһ���������ж�һ���ַ����Ƿ�Ϊ��һ���ַ�����ת֮����ַ���
//ÿ����תһ���ַ�
int is_left_handed(char s1[], const char s2[])
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	//���Ȳ���Ȳ�������ͬ
	if (len1 != len2)
		return 0;

	int i = 0;
	for (i = 0; i < len1; i++)
	{
		//�ó�һ��Ԫ��
		char tmp = s1[0];
		//������Ԫ����ǰ�ƶ�һλ
		int j = 0;
		for (j = 0; j < len1 - 1; j++)
		{
			s1[j] = s1[j + 1];
		}
		//��ת�ó���Ԫ��
		s1[len1 - 1] = tmp;
		//�Ƚ��Ƿ���ͬ
		if (strncmp(s1, s2, len1) == 0)
			return 1;
	}

	return 0;
}


//�⺯��д��
//��Ҫ���ַ�����󳤶�����Ϊ�������ַ������ȵ�����
int is_left_handed_2(char s1[], const char s2[])
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	//���Ȳ���Ȳ�������ͬ
	if (len1 != len2)
		return 0;

	strncat(s1, s1, len1);
	char* ret = strstr(s1, s2);
	if (ret == NULL)
		return 1;

	return 0;

}