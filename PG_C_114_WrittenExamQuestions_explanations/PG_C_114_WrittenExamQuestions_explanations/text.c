#define _CRT_SECURE_NO_WARNINGS
#include "head.h"

//ϵͳĬ��Ϊx64


//
//дһ��������ʵ�����򡢽�����
//

//int main()
//{
//	//int arr[] = { 1,6,45,8,9,32,4,0,1 };
//	//����Ԫ�ظ���
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	char arr[] = "edcba";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//
//	bubble_sort(arr,//��Ԫ�ص�ַ
//		sz,//����Ԫ�ظ���
//		sizeof(arr[0]),//Ԫ�ش�С
//			cmp_int);//����ָ�롪���ȽϺ���
//
//	return 0;
//}


//��������ָ��


//int main()
//{
//	//sizeof�������/������ռ�ڴ�Ĵ�С����λΪ�ֽ�
//	//strlen�����ַ����ĳ��ȣ���ȡ��'\0'��ֹͣ���Ҳ������\0
//	//ָ���������ַ���Ĵ�С��ϵͳ��������32λ�д�С��4�ֽڣ���64λ����8�ֽ�
//
//
//	char arr1[] = { 'a','b','c','d' };//��Ҫ�ֶ���һ��'\0'
//	char arr2[] = "abcd";//Ĭ�ϼ�һ��'\0'
//	
//
//	printf("%u\n", sizeof(arr1));//4
//
//	printf("%u\n", sizeof(arr2));//5 --> �����arr2����������
//	printf("%u\n", sizeof(arr2+1));//8  --> �����arr2����Ԫ�ص�ַ
//	printf("%u\n", sizeof(&arr1));//8
//	printf("%u\n", sizeof(&arr1+1));//8
//
//
//	printf("%u\n", strlen(arr1));//���ֵA
//	printf("%u\n", strlen(arr1+1));//���ֵA-1
//	printf("%u\n", strlen(arr2));//4 
//	printf("%u\n", strlen(arr2+1));//3 
//
//	//printf("%u\n", strlen(arr2[0]));//err
//	//printf("%u\n", strlen(*arr2));//err 
//	// strlen�Ĳ�����char* str��
//	// ������ǵ�ַ�Ĳ��������������ASCII��ֵ���ڵĵ�ַ
//	// strlen(arr2[0]) -> strlen('a') -> strlen(97)
//	// ��ǰ��Ĵ��벢δ���ڴ�������һ��ռ䣬97�ͳ���Ұָ��
//
//	return 0;
//}


//int main()
//{
//	//sizeof�������/������ռ�ڴ�Ĵ�С����λΪ�ֽ�
//	//strlen�����ַ����ĳ��ȣ���ȡ��'\0'��ֹͣ���Ҳ������\0
//	//ָ���������ַ���Ĵ�С��ϵͳ��������32λ�д�С��4�ֽڣ���64λ����8�ֽ�
//
//	char* p = "abcde";//��a�ĵ�ַ����p��
//
//	printf("%u\n", sizeof(p));//8
//	printf("%u\n", sizeof(p+1));//8
//	printf("%u\n", sizeof(*p));//1
//	printf("%u\n", sizeof(p[0]));//1
//	printf("%u\n", sizeof(&p));//8
//	printf("%u\n", sizeof(&p+1));//8
//	printf("%u\n", sizeof(&p[0] + 1));//8
//
//	printf("\n");
//
//	printf("%u\n", strlen(p));//5
//	printf("%u\n", strlen(p + 1));//4
//	//printf("%u\n", strlen(*p));//err
//	//printf("%u\n", strlen(p[0]));//err
//	printf("%u\n", strlen(&p));//���ֵa
//	printf("%u\n", strlen(&p + 1));//���ֵb  -->&p��ȡp�ĵ�ַ����һ���µ�ַ
//	//a�ĵ�ַ��0x00007FF7CFCAAC18,Ҳ����p,&p[0]
//	//����strlen�Ĳ���Ϊchar* str�����ڶ�ȡ��ַʱ��1�ֽ�Ϊ��λ����
//	//64λ��ָ�����Ϊ8�ֽڣ�strlen�ӵ�һ���ֽڿ�ʼ��ȡ���м���ܻ�����'\0'
//	//����ʹ��strlenʱ&p��&p+1���һ�������
//
//	printf("%u\n", strlen(&p[0] + 1));//4  -->&p[0]��ȡa�ĵ�ַ  &p[0] -> p
//
//	return 0;
//}


//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%u\n", sizeof(a));//48
//	printf("%u\n", sizeof(a[0][0]));//4
//	printf("%u\n", sizeof(a[0]));//16 
//	//a[0]�ǵ�һ�е�����������sizeof���ʾ��һ�������
//	//a[0][0]�������Ϊ(a[0])[0],����arr[0]
//	printf("%u\n", sizeof(a[0]+1));//8  --> ��һ�еڶ���Ԫ�صĵ�ַ &a[0][0]
//	printf("%u\n", sizeof(*(a[0]+1)));//4
//	printf("%u\n", sizeof(a + 1));//8  --���ڶ���Ԫ�صĵ�ַ
//	printf("%u\n", sizeof(*(a + 1)));//16  -->�Եڶ��е�ַ�Ľ����ã��õ����ǵڶ���Ԫ��
//	printf("%u\n", sizeof(&a[0] + 1));//8 --���Ե�һ�е�������ȡ��ַ�ټ�һ���õ��ڶ��еĵ�ַ
//	printf("%u\n", sizeof(*(&a[0] + 1)));//16 
//	printf("%u\n", sizeof(*a));//16  --��
//	printf("%u\n", sizeof(*a[0]));//4  --��a[0]�ǵ�һ��һά�������������*a[0]�ǵ�һ����Ԫ��
//	printf("%u\n", sizeof(a[3]));//16  -->�����е����������ڴ˴��������Խ��
//
//	//sizeof(����)����ֻ���ȡ���������ͣ����ں�����
//
//
//	return 0;
//}



