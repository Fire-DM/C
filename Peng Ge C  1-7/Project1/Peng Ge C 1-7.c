#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//��һ��C������Ŀ
//c���Դ�����һ������main����
//������

//printf��һ���⺯��
//������ӡ����
//ʹ��printfʱҪ����#include<stdio.h>

//��stdio�Ľ���
//std-standard��׼
//i-input����
//o-output���

// ������д���  
// ctrl + F5


		///////////////////////////////////////


//#include<stdio.h>

//main�����ǳ�������
//main��������ֻ����һ��
//��׼����������д��
//int main()
//{
//	return 0;
//}
//�����������л򷵻�дreturn 0��
//�쳣��ֹ�򷵻ؾ�return ����


										//��������
										// 
//�������� 
//#include<stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char)); //sizeofָ��С
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}




//int main()
//{
//	int age = 20;
//	double price = 33.3;
///
//return 0;
//}

							///////////////////////////////////////


//�����ͳ���������
//������Ϊ��
//�ֲ�����-{}�� ��int a = 7��
//ȫ�ֱ���-{}�� ��int b = 3��

//int b = 3;
//int main()
//{
//	int high = 175;
//	double weight = 55;
//	int a = 7;
//
//	return 0;
//}

//int a = 100;
//#include<stdio.h>
//int main()
//{
//	int a = 20;
//	printf("a=%d\n", a);//ȫ�ֱ����;ֲ�����������ͬʱ���ֲ�����
//
//	return 0;
//
//}

//�������齫ȫ�ֺ;ֲ�����������д��һ����





//дһ�����룬�������������ĺ�
//scanf��һ�����뺯��   �ڱ�������֧��ʱ������ #define _CRT_SECURE_NO_WARNINGS
//printf��һ���������
//#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;//����0�ǽ����ʼ����������ʼֵ��Ҳ����Ϊ����ֵ
//
//	//������������
//	scanf("%d %d", &num1, &num2);//����%d��ʾ����Ҫ���������&��ʾ��Ҫ�ĵ�ַ�����Ϊ���ȥ���ڣ�
//	//���
//	int sum = num1 + num2;//��������
//	//���
//	printf("%d\n", sum);
//
//	return 0;
//}


///////////////////////////////////////
//#include<stdio.h>
//������������//���õı���������
//1.�ֲ�����
// �ֲ��������������Ǳ������ڵľֲ���Χ
//int main()
//{
//
//	{
//		int a = 10;
//		printf("a=%d\n", a);//�ڵڶ���{}�����õ�int a = 10�޷��ڵ�һ��{}��ʹ�ã����ڵ�һ��{}�п������������ķ�Χ��ʹ��
//	}
//
//
//}
//2.ȫ�ֱ���
//ȫ�ֱ��������������������̡�
//extern int a;// �������������������ⲿ�ķ��ţ�������add.c����int a = 648
//#include<stdio.h>
//void test()
//{
//	printf("test- - >%d\n", a);//��ʱ�����ã�������˵
//}
//int main()
//{
//	printf("a=%d\n", a);
//	{
//		printf("a=%d\n", a);
//	}
//
//
//	return 0;
// }


///////////////////////////////////////
//											������������
//�ֲ�����		�����������������ڿ�ʼ�����������������ڽ�����
//int main()
//{
//	{							//
//		int a = 100;			//int a = 100 ����ֲ������ڵڶ���{}����Ч���������ڿ�ʼ --���������ڽ������������ط���Ч��
//		printf("a=%d\n", a);		//
//	}							//
//
//	return 0;
//}
//ȫ�ֱ���		����������������ڡ�

//�ܽ᣺������Լ�����������ڡ�
//


/////////////////////////
//																����
//��Ϊ�������֣�
//1.���泣��    ֱ������ �磺30   3.14  
//2.const���εĳ�����
//3.define����ı�ʶ��������//��һ��ֵ����
//4.ö�ٳ���


								//���泣��

//int main()
//{
//	//30��
//	//3.14��
//	//'w'��
//	//"abc"��
//
//								//const���εĳ�����
//
//	//int a = 10;
//	//int a = 20;//a�Ǳ��������Ը��ġ�
//
//   const int a = 10;//��C�����У�const���ε�a�������Ǳ�����������ֱ���޸ģ��г��������ԡ�����ֻ���ͬһ����Ĵ���
//   int b = 20;
//
//	{
//		int a = 30;
//		printf("a=%d\n", a);
//	}
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//
//	return 0;
//}

								//define����ı�ʶ������
//#define MAX 100
//int main() 
//{
//	printf(" %d\n",MAX);
//	int a = MAX;
//	printf("%d\n", a);
//	return 0;
//}

								//ö�ٳ���		//��ʱ������û��ϵ
//enum Color
//{
//	//ö�ٳ���
//	RED,
//	GREEN,
//	BLUE
//};
//
//enum Sex
//{
//	MAIE,
//	FEMALE,
//	SECRET
//
//
//};
//
//
//int main()
//{
//	//��ԭɫ
//	//Red Green Blue
//	int mun = 10;
//	enum Color c = RED;
//
//	return 0;
//}
