#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

//������ָ��

//void fun(int a[])//�����a��ָ�����
//{
//	printf("%zu", sizeof(a));
//}
//int main()
//{
//	int a[10] = { 0 };
//	printf("%zu\n", sizeof(a));//10��Ԫ�أ�ÿ��int���͵�Ԫ�ش�СΪ4bit���ܹ�Ϊ40bit
//	printf("%zu\n", sizeof(a[1]));//����Ԫ�أ���СΪ4bit
//	fun(a);//���鴫�ݲ���ʱ���ݵ�����Ԫ�صġ���ַ������СΪ8bit
//
//	return 0;
//}

//��������Ϸ��ʵ��

//˼·
//���Բ���һ�������
//������
//�´���
//��С��
//ֱ���¶�


void menu()
{
	printf("\t��������Ϸ\n\n");
	printf("*****************************\n");
	printf("*****	1. play		*****\n");
	printf("*****	2. 10-times	*****\n");
	printf("*****	0. exit		*****\n");
	printf("*****************************\n");
}
//�ͷ�����
void punish()
{
	int i = 0;
	//ȷ�����鹻��
	char input[256] = {0};

	//60���ػ�
	system("shutdown -s -t 60");

	printf("δ�ܴ����ս�����ڽ��ܳͷ�����\n");
	printf("�����ڿ�ʼ����ĵ��Խ�����60���ػ�\n");
	printf("���룺i.chaoxing.com��ȡ���ػ�:>");

	while(1)
	{ 
		//��ֹ�������
		scanf("%255s", input);
		while (getchar() != '\n')
		{
			getchar();
		}
		if (strcmp(input, "i.chaoxing.com") == 0)
		{
			//ȡ���ػ�
			system("shutdown -a");
			printf("��ϲ���㲻���ؿ������ˣ�\n");
			printf("�������ַ��ѧϰͨ��¼��ҳ�����������Ϸ���ȥѧϰ�ɣ�ֻ��ˣ��ѧϰ����������Ҳ��ɵ��\n");
			break;
		}
		else
		{
			printf("�������ʱ�䲻���~~��������:>");
			if (i == 3)
			{
				printf("�������������ע�ⲻҪ��ո�\n:>");
				}
		}
		i++;
	}
}
void game1()
{
	int guess = 0;
	int i = 0;
	//��������������ķ�Χ
	//0-RAND_MAX(32767)
	RAND_MAX;
	//1.���������
	//int ret = rand();//��Χ��0-32767
	int ret = rand() % 100 + 1;//ģ����0-32767������������������Χ��0-100
	//2.������
	printf("�������:>");

	//�ж�
	while (1)
	{
		scanf("%3d", &guess);
		while (getchar() != '\n')
		{
			getchar();
		}

		if (guess < ret)
		{
			printf("��С�ˣ��ٲ�:>");
		}
		else if (guess > ret)
		{
			printf("�´��ˣ��ٲ�:>");
		}
		else
		{
			printf("�¶��ˣ���ϲ����%d\n", ret);
			break;
		}
	}
}
void game2()
{
	int guess = 0;
	int i = 1;
	//��������������ķ�Χ
	//0-RAND_MAX(32767)
	RAND_MAX;
	//1.���������
	//int ret = rand();//��Χ��0-32767
	int ret = rand() % 100 + 1;//ģ����0-32767������������������Χ��0-99��+1���0-100��Ҳ����ģ101
	//2.������
	printf("�������:>");

	//�ж�
	while (i <= 10)
	{
		int n = 10 - i;
		scanf("%3d", &guess);
		while (getchar() != '\n');
		{
			getchar();
		}
		if (guess < ret)
		{
			if (n >= 1)
			{
				printf("��С�ˣ�����%d�λ��ᣬ�ٲ�:>", n);
			}
			else
			{
				printf("��С�ˣ���սʧ�ܣ�����%d���´μ��ͣ�\n", ret);
				punish();
			}
		}
		else if (guess > ret)
		{
			switch (n)
			{
			case 9:
			case 8:
			case 7:
			case 6:
			case 5:
			case 4:
			case 3:
			case 2:
			case 1:
				printf("�´��ˣ�����%d�λ��ᣬ�ٲ�:>", n);
				break;
			case 0:
				printf("�´��ˣ���սʧ�ܣ�����%d���´μ��ͣ�\n", ret);
				punish();
				break;
			}
		}
		else
		{
			printf("�¶��ˣ���ϲ������%d�Σ���%d\n", i, ret);
			break;
		}
		i++;
	}
}

int main()
{
	//srand������randǰ����rand����������֣�����randֻ���ɹ̶������������Ҫ����<stdlib.h>��ͷ�ļ�
	//��ʱ�������ʱ�ı䴫��srand����ֵ���Ӷ���rand���������
	//time�᷵��һ��ʱ���(time_t)������Ϊָ�� time_t * timer����Ҫ����<time.h>��ͷ�ļ�
	//ctrl + click����������Բ鿴 time_t �����ͣ����Ϊlong long
	//srandֻ�ܽ����޷������͵Ĳ���������Ҫǿ��ת��ʱ����Ĳ���
	srand((unsigned int)time(NULL));//NULLΪ��ָ��,		int *p = NULL;	�൱��	int a = 0;

	//���ò˵������Լ�������
	int input = 0;
	int input2 = 0;

	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		while (getchar() != '\n')
		{
			getchar();
		}

		switch (input)
		{
		case 1:
			game1();
			break;
		case 2:
			printf("��Ϸ����10���޴���ս����ʧ�ܻ��гͷ�\n");
			printf("ȷ����ս�����룺22\n����������һ�������\n");
			printf("������:>");
			scanf("%d", &input2);
			//������������������
			while (getchar() != '\n')
			{
				getchar();
			}
			if (input2 == 22)
			{
				game2();
				break;
			}
			else
			{
				break;
			}
		case 0:
			printf("�˳���Ϸ\n"); 
			break;
		default:
			printf("ѡ�����������ѡ��\n"); 
			break;
		}
	} while (input);//inputΪ1������ѭ����inputΪ0ʱ������Ϊ�٣���ѭ����input��Ϊ1��0ʱ�������ж�Ϊ�棬����ѭ��

	return 0;
}


//goto���
//���ñ�Ǻ���ת�������״��ҳ��򣬲���bug��ʵ�ʿ���һ�㲻��
//���againֻ����ͬһ�������ڲ�������ת
//gotoһ��������ֹĳЩ�������Ƕ�׵Ľṹ�Ĵ������

//int main()
//{
//again:
//	printf("hehe\n");
//	printf("haha\n");
//	goto again;
//
//	//�������Ƕ��
//	for (...)
//		for (...)
//		{
//			for (...)
//			{
//				if (disaster)
//					goto error;
//			}
//		}
//error:
//	if (disaster);
//	//����������
//
//	return 0;
//}

//�ػ�����
//1.�������к�һ�����ڹػ�
//2.���룺hello����ȡ���ػ�

//gotoʵ�ֵ�����ѭ����

//int main()
//{
//	char input[] = { 0 };
//	system("shutdown -s -t 180");
//anain:
//	printf("ע�⣬��ĵ�����180���ػ���������룺hello����ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "hello") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto anain;
//	}
//
//	return 0;
//}

//whileѭ��

//int main()
//{
//	char input[] = { 0 };
//	int i = 0;
//	system("shutdown -s -t 180");
//	while (1)
//	{
//		printf("ע�⣬��ĵ�����180���ػ���������룺hello����ȡ���ػ�\n");
//		scanf("%s", input);//�����������ǵ�ַ������Ҫ&
//		if (strcmp(input, "hello") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//
//	return 0;
//}.

