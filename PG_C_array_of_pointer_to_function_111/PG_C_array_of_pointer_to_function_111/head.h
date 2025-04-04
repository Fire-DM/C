#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//²âÊÔÓÃº¯Êı
int text();

//¼ÆËãÆ÷
void clac(int (*)(int, int));

//¼Ó¼õ³Ë³ı
int Add(int x, int y);
int Subtract(int x, int y);
int Multiply(int x, int y);
int Divide(int x, int y);

//¼ÆËãÆ÷²Ëµ¥
void menu(void);

//Ã°ÅİÅÅĞò
void bubble_sort(int*, int);
