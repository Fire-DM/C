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