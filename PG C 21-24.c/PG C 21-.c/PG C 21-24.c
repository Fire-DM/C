#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//define���峣���ͺ꣬���ǹؼ��֣�����Ԥ����ָ��
//#define NUM 100
//ADD����	(x,y)��Ĳ�����������	((x)+(y))����
//#define ADD(x,y) ((x)+(y))

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	/*printf("%d\n", NUM);
//
//	int num2 = NUM;
//	printf("%d\n", num2);
//
//	int arr[NUM] = { 9,8,7,6,5,4,3,2,1 };
//	printf("%d\n", arr[0]);*/
//
//	int a = 10;
//	int b = 20;
//	int c = ADD(a,b);//���滻	int c = ((a)+(b));
//
//	printf("%d\n", c);
//
//	return 0;
//}

//.h ͷ�ļ������������������͵�������ͷ�ļ��İ�����
//.c Դ�ļ�������ʵ�֣�

//���������ڴ���ܲ��ܾ�ȷ����
//1.45�ڴ���ʱ���ܱ��1.448956989...����




//		ָ��
//�ڴ�
//��Ҫ�Ĵ洢����������г�������ж������ڴ��н��е�
//�ڴ汻���ֳ�һ����С���ڴ浥Ԫ��ÿ����СΪ1���ֽڣ�ÿ����Ԫ����һ����ַ�����\ָ�룩

//F11���ԣ��ڵ�������򿪼��Ӵ��ں��ڴ洰��
//int main()
//{
//	int a = 10;//���ڴ�����4���ֽڣ������洢10����һ���ֽڵĵ�ַ������������ĵ�ַ
//	&a;// ������&	ȡ��ַ
//
//	printf("%p\n", &a);//%p��ӡ�洢��ַ
//	int* p = &a;//��a�ĵ�ַ����ָ�����p���棬����Ϊint *
//		//int˵��pָ��Ķ�����int����		*˵��p��ָ�����
//
//	//char ch = 'w';
//	//char * h = &ch;
//	//printf("%p\n", &ch);//%p��ӡ�洢��ַ
//
//	*p = 20;//*�ǽ����ò�����������ͨ��p���������д�ŵĵ�ַ���ҵ�p����������ָ���a�����󣩣�*p����pָ���a�����󣩣�����ʱ*p = a
//	printf("%d\n",a);//20
//	return 0;
//}

//int main()
//{
//	//�����Ϊ8
//	//����ʲô���͵�ָ�룬������ʼ����ָ�����
//	//ָ�������������ŵ�ַ��
//	//ָ������Ĵ�Сȡ����һ����ַ��ŵ�ʱ����Ҫ���Ŀռ�
//	//32λ�����ϵĵ�ַ��32bitλ - 4byte������ָ������Ĵ�С��4���ֽ�
//	//64λ�����ϵĵ�ַ��64bitλ - 8byte������ָ������Ĵ�С��8���ֽ�
//	printf("%zu\n", sizeof(char *));
//	printf("%zu\n", sizeof(int *));
//	printf("%zu\n", sizeof(short *));
//	printf("%zu\n", sizeof(long *));
//	printf("%zu\n", sizeof(float *));
//	printf("%zu\n", sizeof(double *));
//	//sizeof��%zu��ת��˵��
//
//	return 0;
//}



//			�ṹ��

//���Ӷ���
//�ˣ����� + ���� + �Ա� + ��ַ + �绰
//�飺���� + ���� + ������ + ���� + ���
//C���Ը����Զ������͵�����������һ�����;ͽ� �ṹ�� struct


//struct �����޷���ʱ��ͼֽ��ֻ���ڽ��÷��Ӻ��ռ�ط���ʹ��ʱ�������ڴ棩
//����ѧ��

struct Stu
{
	//��Ա
	char name[20];
	int age;
	char gender[10];
	char tele[];
};
//����s��ָ�����
void print(struct Stu* ps)
{
	printf("%s	%d	%s	%s\n", (*ps).name, (*ps).age, (*ps).gender, (*ps).tele);
	// ->
	//�ṹ��ָ�����->��Ա��
	printf("%s	%d	%s	%s\n", ps->name, ps->age, ps->gender, ps->tele);//�򻯰�
}


int main()
{
	struct Stu s = {"Fire",20,"male","9,723,000,000"};

	//�ṹ����� .��Ա��
	//printf("%s	%d	%s	%s", s.name, s.age, s.gender, s.tele);

	//	&sȡ��ַ��
	print(&s);
	return 0;
}