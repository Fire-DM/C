#define _CRT_SECURE_NO_WARNINGS
#include "head.h"


//int main()
//{
//	//ָ��
//	int n = 0;
//	char ch[6];
//	int* p = &n;
//	char* pc = ch;
//
//	//ָ������
//	int* arr[5];
//	char* ch2[5];
//	int** parr = arr;
//
//	//����ָ��
//	int arr2[6];
//	int (*parr2)[6] = &arr2;
//
//	return 0;
//}


//int main()
//{
//	//����ָ�롪��ָ������ָ��
//	//printf("%p\n", text)/*;
//	//printf("%p\n", &text*/);
//
//	//����ָ��
//	int (*pf)(const char*) = text;
//	//����
//	int ret = pf("abc");//�ַ�������Ҳ�Ǵ�����Ԫ�ص�ַ
//	printf("%d\n", ret);
//
//	return 0;
//}




//�Ķ����Ӵ���Ҫ�ȴ��������ı�����������������
//typedef void(*pf_t)(int);//��void(*)(int)������Ϊpf_t,����������
//
//int main()
//{
//	//(*pf)()
//	( *(void (*)() )0 )();
//	//��������ͬ( (void (*)() )0 )();
//	//void(*p)()	�Ǻ���ָ��
//	//void(*)()		�Ǻ���ָ������
//	//(void(*)())0	 ���ǽ�0ǿ��ת����void(*)()����
//	//
//	//���ϲ���λ�������ã����õ�ַΪ0�ĺ���
//	//��0ǿ������ת��Ϊ���޲Σ�����������void�ĺ����ĵ�ַ
//	//����0��ַ���ĺ���
//
//	void( *singal ( int,void(*)(int) ) )(int);
//	//singal�Ǻ��������Ⱥ�()��ϣ����ϴ�����һ�κ�������
//	// �������� -->  ���� ������(��������);
//	//������signal�����ĵ�һ������������int��
//	// �ڶ��������������Ǻ���ָ�룬�ú���ָ��ָ��ĺ�������������Ϊint����������ֵ����Ϊvoid
//	//signal�����ķ���ֵҲ�Ǻ���ָ�룬�ú���ָ��ָ�����Ĳ�������Ϊint����������Ϊvoid
//
//	//�򻯴���
//	pf_t signal(int, pf_t);
//
//	return 0;
//}




//
//����ָ�����;
//

//дһ��������
//ʵ�ּӣ������ˣ���(��������
//����ʱ��1,2,3,4ʵ�ֹ��ܣ�ѡ0���˳�
int main()
{
	int n = 0;

	do {
		menu();
		printf("��ѡ��:>");
		if (scanf("%d", &n) != 1)
		{
			printf("ֻ��0~4����һ����������������:>");
		}
		switch (n)
		{
		case 1:
			clac(Add);
			break;
		case 2:
			clac(Subtract);
			break;
		case 3:
			clac(Multiply);
			break;
		case 4:
			clac(Divide);
			break;
		case 0:
			printf("�˳�������\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (n);

	return 0;
}