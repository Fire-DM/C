#include "function.h"

//С������n��̨�ף�ÿ�ο���ѡ��һ�׻������ף���ôһ���ж����߷�

//int main()
//{
//	int input = 0;
//	//����
//	scanf("%d", &input);
//	//����
//	int m = Fib(input);
//	//���
//	if (m == -1)
//		printf("�������\n");
//	else
//		printf("%d\n", m);
//
//	return 0;
//}



//������ɾ��ָ������

//int main()
//{
//	int arr[50] = { 0 };
//	
//	int del = 0;
//	//����n������
//	int n = 0;
//	printf("������Ԫ�صĸ���:>");
//	scanf("%d", &n);
//
//	int m = 0;
//	printf("����������������:>");
//	for (m=0; m < n; m++)
//	{
//		scanf("%d ", &arr[m]);
//	}
//
//	//ɾ���ض�����,������ɾ����������С
//	printf("��ѡ��ɾ��������:>");
//	scanf("%d", &del);
//	int fal_size = delete(arr,n,del);
//
//	for (m = 0; m < fal_size; m++)
//	{
//		printf("%d ", arr[m]);
//	}
//
//	return 0;
//}


//
//��߷�����ͷ�֮�1-100��
//
//�����һ��������������������Ƚϣ�˭��ֵ�ͻ��ɸ������һ��
//��Сͬ�����Լ������һ����С

//int main()
//{
//	int score[50] = { 0 };
//	//���ݵĸ���
//	int n = 0;
//	printf("���ݵĸ���:>");
//	scanf("%d", &n);
//	
//	
//	//�Ƚ�
//	int sub = max_min_sub(score, n);
//	//��ӡ
//	printf("���Ϊ%d\n", sub);
//
//	return 0;
//}


//
//��ĸ��Сдת��
//
//�ж��Ƿ��Ǵ�д������ת����Сд��������ת���ɴ�д


//int main()
//{
//	char ch = '0';
//
//	//�ɹ���ȡ����ʱ���������ݸ���
//	//δ�ɹ���ȡ����ʱ������EOF
//	while (scanf("%c", &ch) == 1)
//	//while (scanf("%c", &ch) != EOF)
//	{
//		//Сдת��д
//		if (ch >= 'a' && ch <= 'z')
//			printf("%c\n", ch - 32);
		//��дתСд
//		else if (ch >= 'A' && ch <= 'Z')
//			printf("%c\n", ch + 32);
//		else
//			printf("���������������ĸ:>");
//
//		getchar();//����\n
//	}
//
//	return 0;
//}


//int main()
//{
//	char ch = '0';
//
//	//�ɹ���ȡ����ʱ���������ݸ���
//	//δ�ɹ���ȡ����ʱ������EOF
//	while (scanf("%c", &ch) == 1)
//	//while (scanf("%c", &ch) != EOF)
//	{
//		//Сдת��д
//		if (islower(ch))
//			printf("%c\n", toupper(ch));
//		//��дתСд
//		else if (isupper(ch))
//			printf("%c\n", tolower(ch));
//		else
//			printf("���������������ĸ:>");
//
//		getchar();//����\n
//	}
//
//	return 0;
//}


//int main()
//{
//	char ch = '0';
//
//	while (scanf("%c", &ch) == 1)
//	{
//		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//		//if (isalpha(ch))
//			printf("%c is an alphabet.\n", ch);
//		else
//			printf("%c is ont an alphabet.\n", ch);
//
//		getchar();
//	}
//	
//
//	////%cǰ�ӿո�
//	////����������һ���ַ�֮ǰ�����пհ��ַ�
//	//while (scanf(" %c", &ch) == 1)
//	//{
//	//	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//	//		printf("%c is an alphabet.\n", ch);
//	//	else
//	//		printf("%c is ont an alphabet.\n", ch);
//	//}
//
//
//	return 0;
//}


//
//����ˮ�ɻ� - Lily Number
// ���������ִ��м��ֳ��������֣�
// �����в�ֺ�ĳ˻��ĺ͵�����������Lily Number
// 
// ��������λ����ˮ�ɻ���
//���磺655 = 6*55 + 65*5
//

int main()
{
	int num = 0;
	
	for (num = 10000; num < 100000; num++)
	{
		if (Lily_Number(num))
			printf("%d ", num);
	}

	return 0;
}