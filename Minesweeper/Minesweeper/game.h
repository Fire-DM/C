#pragma once
#define _CRT_SECURE_NO_WARNINGS
//将.c文件所需的头文件全部包含在.h文件中
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <time.h>

//便于更改行数和列数
#define ROW 9
#define COL 9
//计划是9*9棋局，但要考虑检索时的越界访问
#define ROWS ROW+2
#define COLS COL+2

//简单难度
#define EASY_COUNT 10

//菜单
void menu();

//规则
void Rule();

//初始化,生成用于判断的棋盘
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);

//玩家看到的棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col);

//设置地雷
void SetMine(char board[ROWS][COLS], int row, int col);

//排查地雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);

//坐标周围8格的地雷数量
int get_mine_count(char mine[ROWS][COLS], int x, int y);

//展开
void expand(char mine[ROWS][COLS], char show[ROWS][COLS], int ret, int x, int y);
