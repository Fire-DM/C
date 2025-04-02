#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//传递数组
void print1(int arr[3][2], int r, int c);

//传递指针，用数组指针来接收
void print2(int(*parr)[3], int r, int c);


//传参实验
void text(int** p);


int Add(int x,int y);


