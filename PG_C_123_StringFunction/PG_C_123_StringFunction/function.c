#define _CRT_SECURE_NO_WARNINGS
#include "head.h"


//дһ��������ʵ��strlen�Ĺ���

//����������_strlen
size_t my_strlen_by_calculation(const char* str)
{
	size_t count = 0;
	assert(str);
	while (*str != '\0')
	{
		count++;//��Ϊ\0��+1
		str++;
	}
	return count;
}


//ָ��-ָ��_strlen
size_t my_strlen_by_Sub(const char* str)
{
	assert(str);
	char* start = str;
	while (*start != '\0')
	{
		start++;
	}

	return (start - str);
}


//�ݹ�_strlen
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
	
	//�ҵ�dest��\0�ĵ�ַ
	int count = 0;
	//while (*dest++ != '\0')//error,���ִ��ѭ��ʱҲ��dest++��������һ��
	while (*dest != '\0')
	{
		dest++;
		//�õ����ȣ��Լ����Լ�׷��ʱ�Ḳ��\0��������Ҫ��¼����
		count++;
	}

	//����
	while (count--)
	{
		*dest++ = *src++;
	}
	//��ĩβ����\0
	*++dest = '\0';

	return ret;
}


//дһ��������ʵ��strcmp�Ĺ���
int  my_strcmp(const char* str1,const char*  str2)
{
	assert(str1 && str2);
	//�ҵ��׸�������Ҳ�Ϊ\0���ַ�
	while (*str1 == *str2 && *str1 != '\0')
	{
		str1++;
		str2++;
	}
	//�������ǵĲ�ֵ
	return (*str1 - *str2);
}


//дһ��������ʵ��strncpy�Ĺ���
char* my_strncpy(char* dest, const char* src, size_t num)
{
	//int n = 0;
	assert(dest && src);
	//��num�����ƿ������ַ���

	while(num--)
	{
		//Ӧ��src�ַ�����С��num�����
		if (*src != '\0')
		{
			*dest = *src;
			dest++;
			src++;
		}
		//��ʱ*src= '\0'
		else
		{
			*dest++ = *src;
		}
		//n++;
	}

	//while (num && (*dest = *src) != '\0')	//�����ַ���
	//	num--;

	//if (num)				//���num>0������\0��������ַ���ֱ��num=0
	//	while (--num)
	//		*dest = '\0';
}



//дһ��������ʵ��strncat�Ĺ���
//�����Լ�׷���Լ�
char* my_strncat(
	char* dest,
	const char* src,
	size_t num)
{
	char* start = dest;
	//�ҵ�Ŀ���ַ���dest��\0�ĵ�ַ
	while (*dest++)
		;
		dest--;

	//num����׷���ַ��ĸ���
	while (num--)
	{
		//Ӧ��src�ַ�����С��num�����
		if (*src != '\0')
		{
			*dest++ = *src++;
		}
		//��ʱ*src= '\0'
		//strncat����src�ַ���С��numʱ��ֻ����׷�������ַ���ĩβ��һ��\0
		else
		{
			*dest = '\0';
			return start;
			//break;

			//�����д����ӡ�����ͬ����dest�ַ�����������ͬ������src�ַ���С��num�������
			//*dest++ = *src++;
		}

		/////////////
		//�⺯��д��
		//if((*dest++=*src++)=='\0')
			//return start;
	}
	//*dest = '\0';
	////////////

	return start;
}


//strncpy�����⺯��д��
char* __cdecl ano_strncpy(
    char* front,
    const char* back,
    size_t count
)
{
    char* start = front;

    while (count && (*front++ = *back++) != '\0')       //copy string  ����
        count--;

    if (count)                      //pad out with zeroes      �������\����
        while (--count)
            *front++ = '\0';

    return (start);
}