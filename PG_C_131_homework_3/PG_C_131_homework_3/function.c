#define _CRT_SECURE_NO_WARNINGS
#include "head.h"



//逆序字符串1
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

//逆序字符串2
void my_strrev_2(char* left, char* right)
{
	assert(left && right);//指针不能为空
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


//字符串左旋（单字符左旋法）
void Left_handed(char* str,int n,size_t len)
{
	int i = 0;
	n %= len;//处理n大于len的情况

	for(i=0;i<n;i++)
	{
		//拿出一个元素
		char tmp = str[0];
		//让其他元素向前移动一位
		int j = 0;
		for (j=0;j<len-1;j++)
		{
			str[j] = str[j + 1];
		}
		//旋转拿出的元素
		str[len - 1] = tmp;
	}

}



//字符串左旋（逆序法）
void Left_handed_strrev(char* str,int n,size_t len)
{
	n %= len;//处理n大于len的情况

	/*my_strrev(str, n);
	my_strrev(str+n, len-n);
	my_strrev(str, len);*/
	
	my_strrev_2(str, str + n - 1);
	my_strrev_2(str + n, str + len - 1);
	my_strrev_2(str, str + len - 1);
}


///////////////////////////////////////////////////////


// 用每行最后的数字和特定值比较
// 或者每列最后的数字去和特定值比较
// （在它所处的那一行/列最大，那一列/行最小）
// 若前者更大则划去它所在的那一列
// 若前者更小则划去它所在的那一行
// 重复上述操作
// 找5
//1 2 3
//4 5 6
//7 8 9

//杨氏矩阵
struct Point find_num(int arr[][3], int row, int col, int num)
{
	int i = 0;
	int j = col - 1;
	struct Point p = { -1,-1 };
	while (i <= row - 1 && j >= 0)
	{
		//划去一列
		if (arr[i][j] > num)
			j--;
		//划去一行
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



//杨氏矩阵——第二种解法
int find_num_2(int arr[][3], int* px, int* py, int num)
{

	int i = 0;
	int j = *py - 1;
	struct Point p = { -1,-1 };
	while (i <= *px - 1 && j >= 0)
	{
		//划去一列
		if (arr[i][j] > num)
			j--;
		//划去一行
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

	return 0;//找不到
}

///////////////////////////////////////////////////////


//写一个函数，判断一个字符串是否为另一个字符串旋转之后的字符串
//每次旋转一个字符
int is_left_handed(char s1[], const char s2[])
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	//长度不相等不可能相同
	if (len1 != len2)
		return 0;

	int i = 0;
	for (i = 0; i < len1; i++)
	{
		//拿出一个元素
		char tmp = s1[0];
		//让其他元素向前移动一位
		int j = 0;
		for (j = 0; j < len1 - 1; j++)
		{
			s1[j] = s1[j + 1];
		}
		//旋转拿出的元素
		s1[len1 - 1] = tmp;
		//比较是否相同
		if (strncmp(s1, s2, len1) == 0)
			return 1;
	}

	return 0;
}


//库函数写法
//但要求字符串最大长度至少为它现有字符串长度的两倍
int is_left_handed_2(char s1[], const char s2[])
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	//长度不相等不可能相同
	if (len1 != len2)
		return 0;

	strncat(s1, s1, len1);
	char* ret = strstr(s1, s2);
	if (ret == NULL)
		return 1;

	return 0;

}