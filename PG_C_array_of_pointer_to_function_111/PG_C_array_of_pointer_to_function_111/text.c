#define _CRT_SECURE_NO_WARNINGS
#include "head.h"

//����ָ�����顪����ź���ָ�������

//int main()
//{
//	int (*pf)() = text;//pf����ָ��
//
//	int (*arr[5])() = { text };//arr�Ǻ���ָ������
//
//	int ret = text();
//	printf("%d\n", ret);//ret = 123
//
//	return 0;
//}




//дһ����������ʵ�ּӣ������ˣ���(��������
//������ָ����������汾��
//ת�Ʊ�


//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//
//	int (*PfArr[5])(int, int) = { 0,Add,Subtract,Multiply,Divide };
//
//	do {
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//
//		if (input == 0)
//		{
//			printf("�˳�������\n");
//			break;
//		}
//		else if(input>=1 && input<=4)
//		{
//			int ret= PfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//
//		/*switch (input)
//		{
//		case 1:
//			clac(Add);
//			break;
//		case 2:
//			clac(Subtract);
//			break;
//		case 3:
//			clac(Multiply);
//			break;
//		case 4:
//			clac(Divide);
//			break;
//		case 0:
//			printf("�˳�������\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}*/
//
//	} while (input);
//
//	return 0;
//}


//����scanf
//int main()
//{
//	int input = 0;
//	int input2 = 0;
//	int ret = scanf("%d %d", &input, &input2);
//
//	printf("%d\n", ret);
//
//	return 0;
//}




//
//ָ����ָ�������ָ��
//
//

//int main()
//{
//	//����ָ������
//	int (*PfArr[5])(int, int) = { 0,Add,Subtract,Multiply,Divide };
//
//	//ָ�򡾺���ָ�����顿��ָ��
//	int (*(*ppfArr)[5])(int, int) = &PfArr;
//	//ָ�������Ԫ������Ϊint(*)(int, int)
//
//	return 0;
//}




//
//�ص�����
//ͨ������ָ����õĺ���


//int main()
//{
//	int a = 10;
//	//char* pa = &a;//err
//	void* pv = &a;//viod*���޾������͵�ָ�룬���Խ����������͵ĵ�ַ
//	//void*���ܽ����ò�����Ҳ����+1-1����Ҫǿ��ת������
//
//	return 0;
//}



//ð������

//int main()
//{
//	//int arr1[] = { 6,5,4,3,2,1 };
//	int arr1[] = { 3,6,9,5,7,2,4,6 };
//	//���������������
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	//bubble_sort(arr1, sz);
//
//	qsort(arr1, sz, sizeof(arr1[0]), cmp_int);//qsort�ص�����
//	//void qsort(void* base,//���������ݵ���ʼλ��
////	size_t num,//����������Ԫ�ظ���
////	size_t size,//����������Ԫ�صĴ�С����λ���ֽڣ�
////	int (*cmp)(const void*, const void*));//����ָ�롪���ȽϺ���
//
//	//��ӡ
//	/*int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}*/
//
//	return 0;
//}



//int main()
//{
//
//	int arr[] = { 5,9,3,6,4,1,23,5,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	new_bubble_sort(arr,//���Ƚ�Ԫ�ص���ʼλ��
//	sz,//���Ƚ�Ԫ�صĸ���
//	sizeof(arr[0]),//���Ƚ�Ԫ�صĴ�С����λΪ�ֽڣ�
//	cmp_int);//����ָ�룬ָ��Ƚ�����Ԫ�ش�С�ĺ���
//
//	//��ӡ
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}



int main()
{
	text_Stu();

	return 0;
}
