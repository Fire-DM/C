#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>



//�ṹ��ָ�룬������Ϊp��x86������
struct Text
{
	int Num;//4�ֽ�
	char* pcName;//4�ֽ�
	short sDate;//2�ֽ�
	char cha[2];//1*2�ֽ�
	short sBa[4];//2*4�ֽ�
	//�ϼ�20�ֽ�
}*p = (struct Text*)0x100000;//��һ��ֵ����p