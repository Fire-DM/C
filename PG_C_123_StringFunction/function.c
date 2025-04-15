#define _CRT_SECURE_NO_WARNINGS
#include "head.h"


//дһ��������ʵ��strlen�Ĺ���

//����������
size_t my_strlen_by_calculation(const char* str)
{
	size_t count = 0;
	assert(str);
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}


//ָ��-ָ��
size_t my_strlen_by_Sub(const char* str)
{
	char* start = str;
	assert(str);
	while (*str != '\0')
	{
		str++;
	}

	return str - start;
}


//�ݹ�
size_t my_strlen_by_recursion(const char* str)
{
	assert(str);
	//��Ϊ\0��+1
	if (*str != 0)
	{
		return my_strlen_by_recursion(++str)+1;
	}
	//����\0ʱ�ͽ��й�
	else
	{
		return 0;
	}

}


//дһ��������ʵ��strcpy�Ĺ���
//����strcpy��ԭ��
char* my_strcpy(char* dest, const char* src)
{
	//����Ϊ��ָ��
	assert(dest && src);
	char* ret = dest;
	while(*dest++ = *src++)//�Ż����ȸ�ֵ���ж�
	{
		;
		//*dest++ = *src++
	}
	//*dest= *src;
	return ret;
}


//дһ��������ʵ��strcat�Ĺ���
//����ֵΪĿ��������ʼ��ַ
char* my_strcat(char* dest, const char* src)
{
	assert(dest && src);
	char* ret = dest;
	
	//���Ŀ���ַ����Ľ�β\0
	//int count = 0;
	//while (*dest++ != '\0')//error,���ִ��ѭ��ʱҲ��dest++��������һ��
	while (*dest != '\0')
	{
		dest++;
		//count++;
	}
	//����
	while (*dest++ = *src++)
		;

	return ret;
}



//�Լ����Լ�׷��
char* new_my_strcat(char* dest, const char* src)
{
	assert(dest && src);
	char* ret = dest;
	
	//���Ŀ���ַ����Ľ�β\0
	int count = 0;
	//while (*dest++ != '\0')//error,���ִ��ѭ��ʱҲ��dest++��������һ��
	while (*dest != '\0')
	{
		dest++;
		//�õ�����
		count++;
	}

	//����
	while (count--)
	{
		*dest++ = *src++;
	}

	*++dest = '\0';

	return ret;
}

