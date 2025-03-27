#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

//菜单
void menu()
{
	printf("*****************************\n");
	printf("*****	1. play		*****\n");
	printf("*****	2. rule		*****\n");
	printf("*****	0. exit		*****\n");
	printf("*****************************\n");
}


//规则
void Rule()
{
		printf("输入三个数，每个数之间用一个空格隔开\n");
		printf("第一个数选 1 或 0 \n");
		printf("选 1 会进入标记：用来标记你判断为地雷的格子\n");
		printf("选 0 进行排雷\n");
		printf("后两个数为横、纵坐标，用来选择方格\n");
}


//存放布置好的雷的信息
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
 		for (j = 0; j < cols; j++)
		{
			//根据需要进行初始化
			board[i][j] = set;
		}
	}
}


//玩家看到的棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("\n-----扫雷游戏------\n");//分隔
	printf("0 ");//对齐行序号和列序号
	//打印列序号
	for (j = 1; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");

	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);//打印列序号

		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-----扫雷游戏------\n\n");//分隔
}


//设置地雷
void SetMine(char board[ROWS][COLS],int row, int col)
{
	int count = EASY_COUNT;//count = 10
	
	while (count)//count减到0就退出循坏，刚好十次
	{
		int x = rand() % row + 1;//1-9
		int y = rand() % col + 1;//1-9

		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}


//坐标周围8格的地雷数量
int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	int i = 0;
	int j = 0;
	int count = 0;

	//return (mine[x - 1][y] +
	//	mine[x - 1][y - 1] +
	//	mine[x - 1][y + 1] +
	//	mine[x][y - 1] +
	//	mine[x][y + 1] +
	//	mine[x + 1][y - 1] +
	//	mine[x + 1][y] +
	//	mine[x + 1][y + 1] - 8 * '0');//转换类型 char -> int

	for (i = -1; i <= 1; i++)
	{
		for (j = -1; j <= 1; j++)
		{
			if (mine[x + i][y + j] == '1')//检测到雷就加1
				count++;
		}
	}

	return count;
}


//展开
//1.该坐标不是地雷
//2.周围地雷数为0时展开周围8格
//3.继续第二步
//4.周围地雷数不为0的则停止
void expand(char mine[ROWS][COLS], char show[ROWS][COLS], int ret, int x, int y)
{
	int i = 0;
	int j = 0;

	if (ret == 0 && x >= 1 && y >= 1)//防止访问越界
	{	
		show[x][y] = ' ';//将扩散中心的坐标变为空格
		//计算 周围8格中每个格子周围8格的地雷数
		for (i = -1; i <= 1; i++)
		{
			for (j = -1; j <= 1; j++)
			{
				int count = get_mine_count(mine, x + i, y + j);
				//为0则继续扩散，再计算周围8格
				if (count == 0 && show[x + i][y + j] != ' ')//i，j=0时为原坐标，防止重复
				{
					expand(mine, show, count, x + i, y + j);//传递已变化的坐标
					show[x + i][y + j] = ' ';
				}
				else if(count != 0)
					show[x + i][y + j] = count + '0';//转化类型 int -> char

			}
		}
	}
}


//排查地雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;//横坐标
	int y = 0;//纵坐标
	int win = 0;//找到非雷的个数

	while (win < row * col - EASY_COUNT)
	{
		int mark = 2;//切换排雷（0）和标记（1）
		
		printf("请输入要排查的坐标:>");
		scanf("%d %d %d", &mark, &x, &y);
		//坐标合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col && (mark == 1 || mark == 0))
		{
			if (show[x][y] != '*')//避免重复坐标
			{
				printf("该坐标已排查\n");
			}
			else
			{
				//如果踩到地雷
				if (mine[x][y] == '1')
				{
					printf("\n游戏结束\n\n");
					DisplayBoard(mine, ROW, COL);//让玩家看到地雷的位置
					break;
				}
				//未踩到
				else
				{
					while (1)
					{
						//选1标记
						if (mark == 1)
						{
							if (show[x][y] == '*')
							{
								show[x][y] = '#';//用#表示标记
								DisplayBoard(show, ROW, COL);
								break;
							}
							else
								printf("已排查方格不可标记\n");
						}
						//选0排雷
						else
						{
							int ret = get_mine_count(mine, x, y);//周围地雷数量
							show[x][y] = ret + '0';//转化类型 int -> char
							expand(mine, show, ret, x, y);//展开
							DisplayBoard(show, ROW, COL);
							break;
						}
					}
				}
			}
		}
		else
		{
			printf("坐标错误\n");
		}
	}

	if (win == row * col - EASY_COUNT)
	{
		printf("挑战成功\n");
		DisplayBoard(mine, ROW, COL);
	}
}
