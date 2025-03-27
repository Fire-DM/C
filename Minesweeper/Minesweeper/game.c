#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void Minesweeper()
{
	//��Ų��úõ��׵���Ϣ
	char mine[ROWS][COLS] = { 0 };
	//����Ų�õ��׵���Ϣ
	char show[ROWS][COLS] = { 0 };

	//��ʼ�����������Ϊָ��������
	//mine ������û�в��õ��׵�ʱ�򣬶���'0'
	InitBoard(mine, ROWS, COLS, '0');
	//show ������û���Ų���׵�ʱ�򣬶���'*'
	InitBoard(show, ROWS, COLS, '*');

	//���õ���
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);//���ײ���
	
	//��ҿ���������
	DisplayBoard(show, ROW, COL);

	//�Ų����
	FindMine(mine, show, ROW, COL);

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();//�˵�
		printf("��ѡ��:>");
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
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);//Ϊ0ʱ��ִ��ѭ��

	return 0;
}
