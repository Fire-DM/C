#define _CRT_SECURE_NO_WARNINGS
#define PI 3.1415926
#include<stdio.h>
#include<string.h>

//�������

//int main()
//{
//	//�洢����
//	int arr[4] = { 0 };
//	//����
//	int i = 0;
//	while (i < 4)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//
//	//�������ֵ�������һ��Ԫ��
//	int max = arr[0];
//	i = 1;
//	while (i < 4)
//	{
//		//������Ԫ�غ͵�һ��Ԫ�رȽϴ�С���������Ԫ�ظ��󣬽������ֵ��max
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		i++;
//	}
//
//	//���
//	printf("%d\n", max);
//
//	return 0;
//}
//
//int main()
//{
//	int i = 1;
//	//�洢�������ֵ�����
//	int n = 0;
//	//����max���
//	int max = 0;
//	//����
//	scanf("%d", &max);
//	//����������
//	while (i < 4)
//	{
//		scanf("%d", &n);
//
//		if (n > max)
//		{
//			max = n;
//		}
//		i++;
//	}
//	printf("%d\n", max);
//
//	return 0;
//}
//
//int main()
//{
//	int i = 1;
//	int max = 0;
//	int n = 0;
//
//	scanf("%d", &max);
//	while (i < 4)
//	{
//		scanf("%d", &n);
//		i++;
//		//����Ŀ�������Ƚ�
//		max = max > n ? max : n;
//	}
//
//	printf("%d\n", max);
//
//	return 0;
//}

//����������

//int main()
//{
//	double r = 0.0;
//	double v = 0.0;
//
//	scanf("%lf", &r);
//
//	v = 4 / 3 * PI * r * r * r;
//
//	printf("%.3lf\n", v);
//
//	return 0;
//}

//float���͵ĳ�ʼ��

//int main()
//{
//	//0.0Ĭ����double���ͣ�float����Ҫ����f
//	float a = 0.0f;
//	double b = 0.0;
//
//
//	return 0;
//}

//�������������ָ��

//int main()
//{
//	int weight = 0;
//	int height = 0;
//	//����
//	scanf("%d %d", &weight, &height);
//	//����
//	//Ҫд�ɳ���100.0�����������д���
//	float BMI = weight / (height / 100.0) / (height / 100.0);
//	//���
//	printf("%.2f\n", BMI);
//
//	return 0;
//}


//������

//int main()
//{
//	//ָ���²����
//	int num = 52;
//	int i = 1;
//	
//	//int usr = getchar();
//	int usr = 0;
//
//
//	for (i = 1; usr != num; i++)
//	{
//		//����
//		scanf("%d", &usr);
//
//		if (usr == num)
//			printf("�¶��ˣ�������%d��,��%d\n", i, num);
//		else
//			printf("�´��ˣ��Ѳ���%d��,�ٲ£�\n", i);
//
//	}
//
//	return 0;
//}

//����ĸ�������⣩

//int main()
//{
//	//ָ���²����
//	char ch = 'e';
//
//	int i = 0;
//	char usr = '0';
//
//	for (i = 1; usr != ch; i++)
//	{
//		//����
//		//getcharһ�ζ�ȡһ���ַ���ֱ��������û���ַ���������getchar
//		scanf("%c", &usr);
//
//		
//		if (usr == ch)
//			printf("�¶��ˣ�������%d��,��%c\n", i, ch);
//		else
//			printf("�´��ˣ��Ѳ���%d��,�ٲ£�\n", i);
//
//	}
//
//	return 0;
//}
	
//��֤switch�е�case������

//int main()
//{
//	//��������
//	char day = '0';
//
//	//����
//	scanf("%c", &day);
//
//	switch (day)
//	{
//	case 97:printf("����һ\n");
//		break;
//	case 98 :printf("���ڶ�\n");
//		break;
//	case 99 :printf("������\n");
//		break;
//	}
//
//	return 0;
//}

//printf�ķ���ֵ

//int main()
//{
//	int n = printf("hello,world!");
//	//printf�ķ���ֵΪ����
//	printf("\n%d", n);
//
//	return 0;
//}

//static���÷�

//��������
//int sum(int a)
//{
//	int c = 0;
//	//static���ξֲ�����ʱ���ӳ���������������������
//	static int b = 3;
//	c += 1;
//	b += 2;
//
//	return (a + b + c);
//}
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", sum(a));
//	}
//
//
//	return 0;
//}

//4����������������������

//int main()
//{
//	//�����һ�������
//	int max = 0;
//	//��д
//	//int max = scanf("%d", &max);
//	//���������
//	int num = 0;
//	int i = 0;
//
//	scanf("%d", &max);
//
//	for (i = 1; i < 4; i++)
//	{
//		scanf("%d", &num);
//		//������ֵ����max
//		if (num > max)
//			max = num;
//		else
//			;
//	}
//
//	printf("%d", max);
//
//
//	return 0;
//}

//�ַ����м��ƶ�

int main()
{
	  




	return 0;
}

