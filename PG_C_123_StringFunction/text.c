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

int main()
{
	char arr1[20] = "hello ";
	//my_strcat(arr1, "world");
	//�����Լ����Լ�׷�ӣ���Ϊ���ԭ�������е�\0���ǣ������޷����������Խ����ʲ���ѭ��

	new_my_strcat(arr1, arr1);//�����汾�������Լ�׷���Լ�
	//new_my_strcat(arr1, "world");

	printf("%s\n", arr1);//hello,world

	return 0;
}