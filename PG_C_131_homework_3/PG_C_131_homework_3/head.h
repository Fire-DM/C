#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>

//杨氏矩阵
struct Point
{
	int x;
	int y;
};


//字符串左旋（单字符左旋法）
void Left_handed(char* str, int n, size_t len);
//字符串左旋（逆序）
void Left_handed_strrev(char* str, int n, size_t len);

//逆序字符串
void my_strrev(char* str, size_t len);

//杨氏矩阵
struct Point find_num(int** arr, int row, int col, int num);
//第二种方法
int find_num_2(int arr[][3], int* px, int* py, int num);


//写一个函数，判断一个字符串是否为另一个字符串旋转之后的字符串
int is_left_handed(char s1[], const char s2[]);
//库函数写法
//但要求字符串最大长度至少为它现有字符串长度的两倍
int is_left_handed_2(char s1[], const char s2[]);

