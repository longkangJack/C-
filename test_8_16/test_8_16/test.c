#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	DisPlayBoard(board, ROW, COL);
	while (1)
	{
		PlayerMove(board,ROW,COL);
		DisPlayBoard(board, ROW, COL);
		ret = checkWin(board,ROW,COL);
		if (ret != 'c')
		{
			break;
		}
		ComputerMove(board,ROW,COL);
		DisPlayBoard(board, ROW, COL);
		ret = checkWin(board,ROW,COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else if (ret == 'q')
	{
		printf("平局\n");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误,请重新输入\n");
		}
	} while (input);
}
int main()
{
	test();//测试
	return 0;
}