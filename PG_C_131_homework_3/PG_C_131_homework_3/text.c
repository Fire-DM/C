#define _CRT_SECURE_NO_WARNINGS
#include "head.h"


//�ַ�������Left-handed
//ʵ��һ������,���������ַ�����k���ַ�
//����: ABCD����һ���ַ��õ�BCDA
//����: ABCD����һ���ַ��õ�CDAB


//δ�����ַ�������
//int main()
//{
//	char str[] = "ABCDEFG";
//	char str2[20] = { 0 };
//	int input = 0;
//
//	int i = 0;
//
//	//����
//	if (scanf("%d", &input) == 1 && input < strlen(str))
//	{
//		//��δ�������ָ���������str2
//		while (str[input + i])
//		{
//			str2[i] = str[input + i];
//			i++;
//		}
//
//		int j = 0;
//		//���������ָ������ĺ��str2
//		while (input--)
//		{
//			str2[i++] = str[j++];
//		}
//	}
//		//��ӡ
//		printf("%s\n", str2);
//
//	return 0;
//}


//������
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


//���Ͼ���
//��һ�����־���ÿ�д����ҵ��������ϵ����ǵ�����
//���д�����������ľ����в���ĳ�������Ƿ����
//Ҫ��ʱ�临�Ӷ�С��O(N)
//O(N)��ָ��������N��Ԫ�أ�������N���ҵ��ض�ֵ������ʱ��

//1 2 3
//4 5 6
//7 8 9

int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int input = 0;
	scanf("%d", &input);

	struct Point ret = find_num(arr, 3, 3, input);
	
	printf("%d %d", ret.x, ret.y);

	return 0;
}