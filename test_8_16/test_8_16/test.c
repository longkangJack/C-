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
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else if (ret == 'q')
	{
		printf("ƽ��\n");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������,����������\n");
		}
	} while (input);
}
int main()
{
	test();//����
	return 0;
}