#define _CRT_SECURE_NO_WARNINGS
#include "head.h"

//
//�ַ�������
//


//int main()
//{
//	//���ַ�������  strlen
//	//strlen����ֵΪsize_t�����޷�������
// 
//	char str1[] = "abcdef";//abcdef\0
//	char str2[] = { 'a','b','c','d','e','f'};//abcdef
//	char str3 =  NULL ;//abcdef\0
// 
//	//int len1 = strlen(str1);//��ǿ��ת��Ϊint
//	//int len2 = strlen(str2);//���ִ����󲻳�Ԥ�ڽ����������
//	//printf("%d\n", len1);//6
//	//printf("%d\n", len2);//���ֵ
//
//
//	//дһ��������ʵ��strlen�Ĺ���
//	//size_t len = my_strlen_by_calculation(str1);
//
//	//size_t len = my_strlen_by_Sub(str1);
//
//	size_t len = my_strlen_by_recursion(str1);
//
//	
//	printf("%u\n", len);//6
//
//	return 0;
//}



//int main()
//{
//	//�ַ������� strcpy
//	//����\0��ֹͣ������ͬʱ���\0��������
//	//Ŀ���������ɱ䣨�����޸ģ�������������arr[]
//
//	char name[20] = { 0 };
//	char str[] = { 'b','i','t'};
//	//name = "zhangsan";//error
//	//*name = "zhangsan";//error
//	strcpy(name, "zhangsan");
//	//strcpy(name, str);//error��strû��\0����Խ�������
//	printf("%s\n", name);
//
//
//	return 0;
//}


//дһ��������ʵ��strcpy�Ĺ���
//strcpy����ֵΪĿ������ĵ�ַ

//int main()
//{
//	const char str1[] = "abcdef";
//	char str2[20] = { 0 };//����û�з�Χ�Ļ����ᱨ��
//	my_strcpy(str2, str1);
//	printf("%s\n", str2);//abcdef
//
//	return 0;
//}


//
//�ַ���׷�� strcat
// ע������ͬstrcpy
//

//int main()
//{
//	char arr1[20] = "hello ";
//	//my_strcat(arr1, "world");
//	//�����Լ����Լ�׷�ӣ���Ϊ���ԭ�������е�\0���ǣ������޷����������Խ����ʲ���ѭ��
//
//	new_my_strcat(arr1, arr1);//�����汾�������Լ�׷���Լ�
//	//new_my_strcat(arr1, "world");
//
//	printf("%s\n", arr1);//hello,world
//
//	return 0;
//}




//�ַ�����С�Ƚ� strcmp 
// �Ƚϵ���ascii��ֵ
//����ֵ����Ϊint�����ڷ���>0��ֵ��С�ڷ���<0��ֵ�����ڷ���0

//int main()
//{
//	char arr1[20] = "zhansan";
//	char arr2[20] = "lisi";
//
//
//	//�Ƚ������ַ����Ĵ�С�����ǱȽϳ��ȣ�
//	int ret = strcmp(arr1, arr2);
//	if (ret==0)
//	{
//		printf("==\n");
//	}
//	else if(ret >= 0)
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//
//	return 0;
//}


//дһ��������ʵ��strcmp�Ĺ���

//int main()
//{
//	char arr1[20] = "abcde";
//	char arr2[20] = "abcd";
//
//	int ret = my_strcmp(arr1, arr2);
//	//�Ƚ������ַ����Ĵ�С�����ǳ��ȣ�
//	if (ret==0)
//	{
//		printf("==\n");
//	}
//	else if(ret > 0)
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//
//	return 0;
//}



/////////////////////////////////////////////////////////////////////////
// strlen	strcpy	strcmp
//���Ȳ������Ƶ��ַ�������, ʵ��ʹ��ʱ������ȫ����Ϊ��ʹ����Ҳ��ִ�й���
/////////////////////////////////////////////////////////////////////////




/////////////////////////////////////////////////////////////////////////
//strncpy ����	strnlen  �󳤶�		strncmp  �Ƚ��ַ���С
//���������Ƶ��ַ�������, ʵ��ʹ��ʱ��԰�ȫ����Ϊ����ʱ����ִ�й���
// ���ǵĲ�������һ������ size_t num
/////////////////////////////////////////////////////////////////////////

//int main()
//{
//		char arr1[20] = "abcd\0xxxxx";//������֤
//		char arr2[] = "efg";
//		//����ȫ
//		//strncpy(arr1, arr2,5);//arr2�ַ���������ĩβ��\0
//		//strncat(arr1, arr2, 5);///arr2�ַ���������ĩβ��\0
//		//ano_strncpy(arr1, arr2, 5);//�⺯���ο�д��
//
//		//ģ��
//		my_strncpy(arr1, arr2,5);//����������������ʱ���ᱻת��Ϊ�ܴ��һ������
//		//my_strncat(arr1, arr2,5);//����������������ʱ���ᱻת��Ϊ�ܴ��һ������
//
//		printf("%s\n", arr1);
//
//		return 0;
//}



int main()
{
	char arr1[20] = "abcd";//������֤
	char arr2[] = "abcdef";

	int ret = strncmp(arr1, arr2, 5);

	if (ret == 0)
		printf("==\n");
	else if(ret > 0)
		printf(">\n");
	else
		printf("<\n");

	return 0;
}
