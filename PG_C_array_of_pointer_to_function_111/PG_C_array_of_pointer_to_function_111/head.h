#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//�����ú���
int text();

//������
void clac(int (*)(int, int));

//�Ӽ��˳�
int Add(int x, int y);
int Subtract(int x, int y);
int Multiply(int x, int y);
int Divide(int x, int y);

//�������˵�
void menu(void);

//ð������
void bubble_sort(int*, int);
