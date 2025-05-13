#define _CRT_SECURE_NO_WARNINGS
#include "head.h"


//字符串左旋Left-handed
//实现一个函数,可以左旋字符串中k个字符
//比如: ABCD左旋一个字符得到BCDA
//比如: ABCD左旋一个字符得到CDAB


//未更改字符串本身
//int main()
//{
//	char str[] = "ABCDEFG";
//	char str2[20] = { 0 };
//	int input = 0;
//
//	int i = 0;
//
//	//输入
//	if (scanf("%d", &input) == 1 && input < strlen(str))
//	{
//		//将未左旋部分赋给新数组str2
//		while (str[input + i])
//		{
//			str2[i] = str[input + i];
//			i++;
//		}
//
//		int j = 0;
//		//将左旋部分赋给更改后的str2
//		while (input--)
//		{
//			str2[i++] = str[j++];
//		}
//	}
//		//打印
//		printf("%s\n", str2);
//
//	return 0;
//}


//函数版
//int main()
//{
//	char str[] = "ABCDEFG";
//	int input = 0;
//	scanf("%d", &input);
//
//	int len = strlen(str);
//
//	Left_handed(str, input, len);
//	Left_handed_strrev(str, input, len);
//
//	printf("%s\n", str);
//	return 0;
//}


/////////////////////////////////////////////////////////////////////////


//杨氏矩阵
//有一个数字矩阵，每行从左到右递增，从上到下是递增的
//请编写程序在这样的矩阵中查找某个数字是否存在
//要求时间复杂度小于O(N)
//O(N)是指数组里有N个元素，最多遍历N次找到特定值所花的时间

//1 2 3
//4 5 6
//7 8 9

//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int input = 0;
//	scanf("%d", &input);
//
//	struct Point ret = find_num(arr, 3, 3, input);
//	
//	printf("%d %d", ret.x, ret.y);
//
//	return 0;
//}


//第二种方法
//会改变a和b的值，再次调用需重置a、b的值
 
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int input = 0;
//	scanf("%d", &input);
//	int r = 3;//行
//	int c = 3;//列
//
//	int ret = find_num_2(arr, &r, &c, input);
//	
//	if (ret == 1)
//		printf("%d %d\n", r, c);
//	else
//		printf("找不到\n");
//
//	return 0;
//}


/////////////////////////////////////////////////////////////////////////


//写一个函数，判断一个字符串是否为另一个字符串旋转之后的字符串
// 
//例：s1=bcdaa和s2=aabcd


int main()
{
	char s1[20] = "aabcd";
	char s2[20] = "bcdaa";

	int ret = is_left_handed(s1,s2);

	if (ret == 1)
		printf("是\n");
	else
		printf("不是\n");


	return 0;
}