#define _CRT_SECURE_NO_WARNINGS
#include "head.h"

//
//дһ��������ʵ�����򡢽�����
//

int main()
{
	//int arr[] = { 1,6,45,8,9,32,4,0,1 };
	//����Ԫ�ظ���
	//int sz = sizeof(arr) / sizeof(arr[0]);
	
	char arr[] = "edcba";
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);

	bubble_sort(arr,//��Ԫ�ص�ַ
		sz,//����Ԫ�ظ���
		sizeof(arr[0]),//Ԫ�ش�С
			cmp_int);//����ָ�롪���ȽϺ���

	return 0;
}