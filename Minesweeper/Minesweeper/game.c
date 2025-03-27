#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void Minesweeper()
{
	//存放布置好的雷的信息
	char mine[ROWS][COLS] = { 0 };
	//存放排查好的雷的信息
	char show[ROWS][COLS] = { 0 };

	//初始化数组的内容为指定的内容
	//mine 数组在没有布置地雷的时候，都是'0'
	InitBoard(mine, ROWS, COLS, '0');
	//show 数组在没有排查地雷的时候，都是'*'
	InitBoard(show, ROWS, COLS, '*');

	//设置地雷
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);//埋雷测试
	
	//玩家看到的棋盘
	DisplayBoard(show, ROW, COL);

	//排查地雷
	FindMine(mine, show, ROW, COL);

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();//菜单
		printf("请选择:>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			Minesweeper();
			break;
		case 2:
			Rule();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);//为0时不执行循坏

	return 0;
}
