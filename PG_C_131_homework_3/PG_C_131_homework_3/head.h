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
