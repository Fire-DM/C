#pragma once
#define _CRT_SECURE_NO_WARNINGS
//��.c�ļ������ͷ�ļ�ȫ��������.h�ļ���
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <time.h>

//���ڸ�������������
#define ROW 9
#define COL 9
//�ƻ���9*9��֣���Ҫ���Ǽ���ʱ��Խ�����
#define ROWS ROW+2
#define COLS COL+2

//���Ѷ�
#define EASY_COUNT 10

//�˵�
void menu();

//����
void Rule();

//��ʼ��,���������жϵ�����
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);

//��ҿ���������
void DisplayBoard(char board[ROWS][COLS], int row, int col);

//���õ���
void SetMine(char board[ROWS][COLS], int row, int col);

//�Ų����
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);

//������Χ8��ĵ�������
int get_mine_count(char mine[ROWS][COLS], int x, int y);

//չ��
void expand(char mine[ROWS][COLS], char show[ROWS][COLS], int ret, int x, int y);
