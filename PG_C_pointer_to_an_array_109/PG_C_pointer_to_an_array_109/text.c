#define _CRT_SECURE_NO_WARNINGS
#include "head.h"

//
//��δ���
// �������βε����ͺ�ʵ�ε�������ͬ
//


//
//����ָ�볣���÷�������ά���鴫��
//

//int main()
//{
//	//��ӡarr
//	int arr[3][2] = { 1,2,3,4,5,6 };
//
//	print1(arr,3,2);//�����踴��arr������
//	print2(arr,3,2);//�������յ�ַ
//
//	return 0;
//}



//int main()
//{
//	int arr[5];//arr������
//	int* parr1[5];//parr1��ָ������
//	int (*parr2)[5];//parr2������ָ�룬ָ��һ�� ����10��Ԫ�أ�ÿ��Ԫ������Ϊint������
//	int (*parr[10])[5];//parr3�Ǵ������ָ������飬Ԫ������Ϊint (*)[5]
//
//	return 0;
//}



//
//����ָ�봫��
//

//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int arr[5] = { 0 };
//	int* parr = arr;
//	int** pp = &p;//pp��&p��p�ĵ�ַ����*pp��&n��n�ĵ�ַ����**pp��n��ֵ
//	text(pp);//pp����Ϊint**
//	text(&p);//&p����Ϊint**
//
//	return 0;
//}



//
//����ָ��
//ָ������ָ��
//


//int main()
//{
//	int arr[8] = { 0 };
//	//&��������������ĵ�ַ
//	int (*p)[8] = &arr;//&arrΪ��������ĵ�ַ
//
//	//&���������������ĵ�ַ
//	//�������д�������ͬ
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//
//	//����ָ��Ĵ洢,��������д�ɲ�д
//	int (*pf)(int, int) = &Add;
//	//int (*pf)(int, int) = Add;
//	
//	//����ָ��ʹ��ʱ���Բ�ʹ��*,��ʹ�ö��*
//	int ret1 = (*pf)(2, 3);
//	int ret2 = pf(2, 3);
//	int ret3 = Add(2, 3);
//	printf("%d\n", ret1);//5
//	printf("%d\n", ret2);//5
//	printf("%d\n", ret3);//5
//
//	return 0;
//}



int main()
{
	//ͨ������ָ������һ���������ò�ͬ�ĺ�����ʵ��һ���ۺϵĹ���
	calc(Add);

	return 0;
}


