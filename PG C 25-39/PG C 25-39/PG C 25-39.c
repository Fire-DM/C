#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//���

//1.���ʽ���
//2.�����������
//3.�������
//4.�������
//5.�����

//�����ж���䣨��֧��䣩��if��䡢switch���
//ѭ��ִ����䣺do while��䡢while��䡢for���
//ת����䣺break��䡢goto��䡢continue��䡢return���


//		c�����ǡ��ṹ�塿�ĳ����������
//		˳��ṹ
//		ѡ��ṹ	if��switch
//		ѭ���ṹ	for��while��do while

//		��֧��䣨ѡ��ṹ��

//if���

//int main()
//{
//	int a = 10;
//	int age = 20;
//	//if(���ʽ)
//	//������ʽΪ�棬ִ����䣻��֮����ִ��
//	//if (a == 3)
//	//	printf("���Ϊ�٣�����ӡ\n");
//	//if (a == 10)
//	//	printf("���Ϊ�棬��ӡ\n");
//
//
//	//if (age < 18)//if()��һ������䣬C�����÷ֺŽ������
//	//{
//	//	//ifĬ��ֻ��һ����䣬��Ҫ����������{}
//	//	printf("δ����\n");
//	//	printf("���ܺȾơ�����\n");
//	//}
//	//else
//	//{
//	//	printf("����\n");
//	//	printf("�������̡��Ⱦ�\n");
//	//}
//
//	if (age < 18)
//		printf("������\n");
//	//���ʽ����д��18<= age <28,����ɻ���
//	else if (age >= 18 && age < 28)
//		printf("����\n");
//	else if (age >= 28 && age < 40)
//		printf("����\n");
// //elseֻ�������ifƥ��
//	else
//		printf("׳�꼰����\n");
//
//	return 0;
//}

 //�ж�һ�����Ƿ�Ϊ����

//int main()
//{
//	//����һ����
//	int num = 0;
//	//����
//	scanf("%d", &num);
//	//���
//	//printf("%d\n", num);
//	if (num % 2 == 1)
//		printf("����\n");
//	else
//		printf("ż��\n");
//
//	return 0;
//}

//���1-100������

//int main()
//{
//	//����һ����
//	int num = 1;
//
//	while (num < 101)
//	{
//		//ѡ������
//		if (num % 2 == 1)
//			//��ӡ
//			printf("%d ", num);
//		//else
//			//printf("%d\n", num);
//		//����1-100����
//		num += 1;
//	}
//
//	return 0;
//}


//		switch��� 
//��֧��䣬�����ڶ��֧�����

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//
//	//if���ʺ϶��֧
//	/*if (day == 1)
//		printf("����һ\n");
//	else if (day == 2)
//		printf("���ڶ�\n");
//	else if (day == 3)
//		printf("������\n");
//	else if (day == 4)
//		printf("������\n");
//	else if (day == 5)
//		printf("������\n");
//	else if (day == 6)
//		printf("������\n");
//	else if (day == 7)
//		printf("������\n");*/
//
//	//switchֻ�ܰ�������
//	switch(day)
//	{
//		//case������ڣ�break��ֹ
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
// default:
//		printf("ѡ�����\n");
//		break;
//	}
//
//	//�н϶��ظ�����ʱ���Լ򻯣�break���Ǳ�Ҫ�ģ����Կ����ʡ�ԣ���Ҫ���ɼ���break�ĺ�ϰ��
//	switch(day)
//	{
//		//case������ڣ�break��ֹ
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("ѡ�����\n");
//		break;
//	}
//
//	return 0;
//}
				//
				// 
				// 
//int main()
//{
//	int n = 1;
//	int m = 2;
//
//	switch (n)
//	{
//	case 1:n++;
//	case 2:m++;
//	case 3:
//		//switch����Ƕ��
//		switch (n)
//		{
//		case 1:n++ ;
//		case 2:m++; n++;
//			break;
//		case 3:m--;
//			break;
//		}
//	case 4:m++;
//	case 5:n++;
//		break;
//	default:
//		printf("ѡ�����\n");
//		break;
//			}
//
//	printf("n=%d m=%d\n",n,m);
//
//	return 0;
//}

//ѭ�����

//forѭ��
//whileѭ��
//do whileѭ��

//whileѭ��

//int main()
//{
//	int i = 1;
//	//whileӦ�������ʽ������������ѭ��
//	while (i <= 10)
//	{
//		////����break��;����ѭ��
//		//if (i == 5)
//		//	break;
//
//		//ִ��continue��ֱ������continue��������
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 1;
//	//whileӦ�������ʽ������������ѭ��
//	while (i <= 10)
//	{
//		i++;
//
//		//continue��ֱ����������ѭ������Ĵ��룬ֱ��ȥ�жϲ��֣�������һ���ж�
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);
//	}
//	return 0;
//}

//getchar������putchar����

//int main()
//{
////	//�Ӽ����ϻ�ȡ�ַ�
//// getchar�ķ���ֵ�Ƕ�Ӧ��ĸ��ASCIIֵ����������������������򷵻�EOF(end of file),������int���ܷ���ֵ
////	int ch = getchar();
////	//���ִ�ӡ��ʽ
////	printf("%c\n",ch);
////	putchar(ch);
////	
//	//
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF)
//	//{
//	//	//����a�����»س���ʵ��getchar���ȡ�����ַ�����һ��Ϊa���ڶ���Ϊ\n
//	//	//getchar�����뻺������ȡ�ַ����������ڼ����������ֵҲ��������뻺����
//	//	//����a���������뻺���� -> ���»س���ͬʱ�Զ������뻺��������\n -> getchar��ȡa��putchar��ӡa -> getchar��ȡ\n��putchar��ӡ\n
//	//	putchar(ch);
////
//	//}
//
//	char password[20] = { 0 };
//	printf("���������룺>");
//	//����abcdef�������»س��������\n,��scanfֻ�������abcdef
//	//scanf�����ո��ֹͣ��ȡ
//	scanf("%s", password);
//
//	//���getchar������\n����Ҳֻ������һ���ַ�
//	//getchar();
//
//	//ʵ����whileѭ���������ַ�
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//
//	printf("��ȷ������(Y/N):>");
//	//û�������getchar�Ļ��������getchar��ֱ�Ӷ�ȡʣ�µ�\n
//	int ret = getchar();
//
//	if (ret == 'Y')
//		printf("YES\n");
//	else
//		printf("NO\n");
//
//	return 0;
//}

//ֻ��ӡ���������������ַ������š�С���㶼���ַ�

//int main()
//{
//	char ch = '0';
//	while ((ch = getchar()) != EOF)
//	{
//		//�����'0'��'9'���ַ���ָASCII���е�ʮ��������
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//
//	return 0;
//}

//ת��ASCII��Ϊ��Ӧ�ַ������

//int main()
//{
//		'a';//97
//	//��ӡa
//	/*printf("%c\n", 'a');
//	printf("%c\n", 97);*/
//	
//	
//	int arr[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33 };
//	//�����ȷ֪������������ASCII��ֵ��char�ܹ����²����ȥ��û�����⣬Ҳ������char
//	//char arr[] = { 73, 32, 99, 97, 110, 32, 100, 111, 105, 116, 33 };
//	
//	int i = 0;
//	//����Ԫ�ظ���
//	//sizeof(arr)���������ܴ�С����λ���ֽ�
//	//sizeof(arr[0])��������Ԫ�صĴ�С����λ���ֽ�
//	//�ܴ�С���Ե���Ԫ�صĴ�С��ΪԪ�ظ���
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	while (i < sz)
//	{
//		//�������ж��ֱ�����ʽʱ����ӡ�ľ�����ֵ��ת��˵������
//		printf("%c ", arr[i]);
//		i++;
//	}
//
//	for (i=0; i<sz; i++)
//	{
//		//�������ж��ֱ�����ʽʱ����ӡ�ľ�����ֵ��ת��˵������
//		printf("%d ", arr[i]);
//	}
//	
//	return 0;
// }

//��ӡprintf�ķ���ֵ

//int main()
//{
//	//��Ҫ���д�ӡ�Ļ�������"hello world��"�����\n���������ɷ���ֵ�仯
//	int n = printf("hello world!");
// //��printf�������������ǰ���\n
//	printf("\n%d\n",n);
//
//	return 0;
//}

//static����ϰ

//int sum(int a)
//{
//    int c = 0;
//    //static�������ξֲ�����ʱ�����ӳ��������������������������ʱ
//    //����δ�����b��̳���һ�ε�ֵ
//    static int b = 3;
//    c += 1;
//    b += 2;
//    return (a + b + c);
//}
//int main()
//{
//    int i;
//    int a = 2;
//    for (i = 0; i < 5; i++)
//    {
//		//�������洴���ĺ���
//        printf("%d,", sum(a));
//    }
//}

//forѭ��
//whileѭ���ṹ��ɢ���ڴ���Ƚϳ�ʱ�����޸�
//for(���ʽ1;���ʽ2;���ʽ3)
// ѭ�����;

//���ʽ1Ϊ��ʼ�����֣����ڳ�ʼ��ѭ������
//���ʽ2Ϊ�����жϲ��֣������ж�ѭ����ʱ��ֹ
//���ʽ3Ϊ�������֣����ڵ���ѭ������

//int main()
//{
//	//forѭ����ӡ1-10
//	int i = 0;
// 	for (i = 1; i <= 10; i++)
//  for (int i = 1; i <= 10; i++)//��C������c99�﷨��֧������д����c++Ҳ֧������д�� 
//	{
//		//����5
//		if (i == 5)
//			continue;  
//
//		printf("%d ", i);
//	}
//	return 0;
//}

//forѭ����Ҫ����ʡ�Գ�ʼ��

//int main()
//{
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("hello\n");
//		}
//	}//���Ϊ9��hello
//
//	//ȱ�ٶ�i�ĳ�ʼ���������ѭ������ʱi��ֵΪ3��������ѭ��������������ִ�г���
//	for (; i < 3; i++)
//	{
//		//ȱ�ٶ�j�ĳ�ʼ��������j��һ��ѭ���������ֵ���3�����������ѭ��������
//		for (; j < 3; j++)
//		{
//			printf("hello\n");
//		}
//	}//���Ϊ3��hello
//
//
//	return 0;
//}

//���������forѭ��

//int main()
//{
//	int x = 0;
//	int y = 0;
//
//	for (x = 0, y = 0; x < 3 && y < 6; ++x, y++)
//	{
//		printf("hello\n");//3
//		printf("%d\n", x+y);
//		
//	}
//
//	return 0;
//}

//�����ж�Ϊ���򲻻����ѭ��,�����ж�Ϊ��ֵ�Ҳ�Ϊ��ʱ����ѭ��

//int main()
//{
//	int i = 1;
//
//	��ѭ��,�����ж�i��2��ֵ
//	for (i = 0; i = 2; i++)
//	{
//		printf("hello\n");
//	}
//
//	�������ѭ���������ж�0��ʾ��
//	for (i = 0; i = 0; i++)
//	{
//		printf("hello\n");
//	}
//
	//ִ��һ��
//	for (i = 0; i == 0; i++)
//	{
//		printf("hello\n");
//	}
//	//����
//	for (i = 0; i == 1; i++)
//	{
//		printf("hello\n");
//	}
//
//	printf("%d\n", i);
//
//	return 0;
//}

//do wilieѭ��
//do 
//{
//	���;
//} 
//while (����);

//int main()
//{
//	int i = 1;
//
//	do
//	{
//		//break����ѭ��
//		//����������continue����ʱ�������5��������ʱ����ѭ��
//		//if (i == 5)
//			//break;
//			//continue;
//		printf("%d ", i);
//		i++;
//	}
//	while (i <= 10);
//
//	return 0;
//}

//do whileѭ������ϰ

//n�Ľ׳�
//int main()
//{
//	//��������
//	int n = 0;
//	int i = 1;
//	int ret = 1;
//	scanf("%d", &n);
//
//	//����
//	do
//	{
//		i++;
//		ret = ret * i;
//	} 
//	while (i <  n);
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//1!+2!+...+n!�ĺ�
//int main()
//{
//	//��������
//	int n = 0;
//	int i = 1;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &n);
//
//	while (i <= n)
//	{
//		//����׳�
//		ret *= i;
//		//����׳˵ĺ�
//		sum += ret;
//		i++;
//	}
//
//	printf("%d\n", s);
//
//	return 0;
//}

//���� ���� �����еľ���ĳ������n

//��������

//int main()
//{
//	char arr[] = { 1, 2, 3, 4, 5, 6, 7 };
//	int k = 5 ;
//	int i = 0;
//	//Ԫ�ظ��� ���� �����ܴ�С ���� ����Ԫ�صĴ�С
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("�ҵ��ˣ��±���%d\n", i);
//			break;
//		}
//		if (i == sz)
//		{
//			printf("�Ҳ���\n");
//		}
//	}
//
//	return 0;
//}
 
//���ֲ��� 
//����Ҫ��ȷ���±�

//int main()
//{
//	char arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int k = 5;
//	int i = 0;
//	//Ԫ�ظ��� ���� �����ܴ�С ���� ����Ԫ�صĴ�С
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//�ֳ�������������
//	int left = 0;
//	int right = sz;
//	
//	while (left <= right)
//	{
//		//ÿ�β����±����ֵ����һ����һ�������
//		//int mid = (left + right) / 2;		//Ԫ�ص��������������������ʱ�����
//		int mid = left + (right - left) / 2;		//Ԫ�ص��������������������ʱ�������
//
//
//		if (arr[mid] < k)
//		{
//
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±�Ϊ%d\n", mid);
//			break;
//		}
//		if (left > right)
//		{
//			printf("�Ҳ���\n");
//			break;
//		}
//	}
//
//	return 0;
//}

//��ʾ����ַ��������ƶ�,��z�м���
//��Ҫ��ȷ���±�

//˼·
//weicome to here!!
//ÿһ�α任������β˳���滻�ַ�
//##############
//w############!
//we##########!!
//......
//weicome to here!!

#include<windows.h>
#include<stdlib.h>

//int main()
//{
//	//��������
//	char arr1[] = "welcome to here!";//16���ַ�
//	char arr2[] = "################";
//	
//	int left = 0;
//	//�±���Ҫ��Ӧ��������sizeof�󵽵�arr1����Ϊ17���� ! ���±�Ϊ15������-2
//	//int right =  sizeof(arr1) / arr(arr1[0]) -2;		//���\0���ȥ
//	//���ú���strlen��������ĳ��ȣ������\0���ȥ��������-1�����±�
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		//�滻�ַ�
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//
//		printf("%s\n", arr2);
//		Sleep(1000);//��λΪ����,������ӡ�ٶȣ���Ҫ����windows��ͷ�ļ�
//		//�����Ļ����������ɱ��ֳ��ַ����м俿£��Ч��
//		system("cls");//system��һ���⺯������ִ��ϵͳ�����Ҫ����stdlib��ͷ�ļ�
//		left += 1;
//		right -= 1;
//	}
//	//��Ļ��������µĽ���������system("cls")�������Ļ
//	printf("%s\n", arr1);
//
//	return 0;
//}


//ģ���û���¼�龰������ֻ�ܵ�¼���Ρ�

int main()
{
	int i = 0;
	//����������abc
	char password[20] = { 0 };
	

	//for (i = 1; i <= 3; i++ )
	//{
	//	printf("����������:>");
	//	scanf("%s", password);//�������������ǵ�ַ������Ҫ��&
	//
	//	//�ж������ַ����Ƿ���ȣ�����ʹ��==��Ӧ���ÿ⺯��: strcmp,��Ҫ����ͷ�ļ�string
	//	if (strcmp(password, "abc") == 0)//	strcmp(arr1, arr2) == 0	��ʾ�ַ������
	//	{
	//		printf("��¼�ɹ�\n");
	//		break;
	//	}
	//	else
	//	{
	//		printf("�������\n");
	//	}
	//}
	//
	//if (i == 4)
	//{
	//	printf("�����������������������\n");
	//}


	while (i < 3)
	{
		printf("����������:>");
		scanf("%s", password);//�������������ǵ�ַ������Ҫ��&

		//�ж������ַ����Ƿ���ȣ�����ʹ��==��Ӧ���ÿ⺯��: strcmp,��Ҫ����ͷ�ļ�string
		if (strcmp(password, "abc") == 0)//	strcmp(arr1, arr2) == 0	��ʾ�ַ������
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}

		i++;
	}
	if (i == 3)
	{
		printf("�����������������������\n");
	}

	return 0;
}

