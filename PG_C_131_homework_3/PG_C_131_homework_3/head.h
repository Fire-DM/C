#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>

//ÑîÊÏ¾ØÕó
struct Point
{
	int x;
	int y;
};


//×Ö·û´®×óĞı£¨µ¥×Ö·û×óĞı·¨£©
void Left_handed(char* str, int n, size_t len);
//×Ö·û´®×óĞı£¨ÄæĞò£©
void Left_handed_strrev(char* str, int n, size_t len);

//ÄæĞò×Ö·û´®
void my_strrev(char* str, size_t len);

//ÑîÊÏ¾ØÕó
struct Point find_num(int** arr, int row, int col, int num);
