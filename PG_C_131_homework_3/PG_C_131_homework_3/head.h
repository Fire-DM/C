#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>

//���Ͼ���
struct Point
{
	int x;
	int y;
};


//�ַ������������ַ���������
void Left_handed(char* str, int n, size_t len);
//�ַ�������������
void Left_handed_strrev(char* str, int n, size_t len);

//�����ַ���
void my_strrev(char* str, size_t len);

//���Ͼ���
struct Point find_num(int** arr, int row, int col, int num);
//�ڶ��ַ���
int find_num_2(int arr[][3], int* px, int* py, int num);


//дһ���������ж�һ���ַ����Ƿ�Ϊ��һ���ַ�����ת֮����ַ���
int is_left_handed(char s1[], const char s2[]);
//�⺯��д��
//��Ҫ���ַ�����󳤶�����Ϊ�������ַ������ȵ�����
int is_left_handed_2(char s1[], const char s2[]);

