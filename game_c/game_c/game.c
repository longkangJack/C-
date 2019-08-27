#define _CRT_SECURE_NO_WARNINGS 1



#include "game.h"



void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)

{

	// 	int i = 0;

	// 	int j = 0;

	// 	for(i=0; i<rows; i++)

	// 	{

	// 		for(j=0; j<cols; j++)

	// 		{

	// 			board[i][j] = set;

	// 		}

	// 	}

	memset(&board[0][0], set, rows*cols*sizeof(board[0][0]));

}



void DisplayBoard(char board[ROWS][COLS], int row, int col)

{

	int i = 0;

	int j = 0;

	printf("-----------------------\n");

	for (i = 0; i <= col; i++)

	{

		printf("%d ", i);

	}

	printf("\n");

	for (i = 1; i <= row; i++)

	{

		printf("%d ", i);

		for (j = 1; j <= col; j++)

		{

			printf("%c ", board[i][j]);

		}

		printf("\n");

	}

	printf("-----------------------\n");



}





void SetMine(char board[ROWS][COLS], int row, int col)

{

	int count = EASY_COUNT;

	while (count)

	{

		int x = rand() % row + 1;

		int y = rand() % col + 1;

		if (board[x][y] == '0')

		{

			board[x][y] = '1';

			count--;

		}

	}

}



int GetMineCount(char mine[ROWS][COLS], int x, int y)

{

	return mine[x - 1][y] +

		mine[x - 1][y - 1] +

		mine[x][y - 1] +

		mine[x + 1][y - 1] +

		mine[x + 1][y] +

		mine[x + 1][y + 1] +

		mine[x][y + 1] +

		mine[x - 1][y + 1] - 8 * '0';

}



void Spread(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)

{

	int offset_x = 0;

	int offset_y = 0;

	int count = 0;

	//����Ϸ�

	if (x >= 1 && x <= 9 && y >= 1 && y <= 9)

	{

		//������Χ����

		for (offset_x = -1; offset_x <= 1; offset_x++)

		{

			for (offset_y = -1; offset_y <= 1; offset_y++)

			{

				//���������겻����

				if (mine[x + offset_x][y + offset_y] == '0')

				{

					//ͳ����Χ�׵ĸ���

					count = GetMineCount(mine, x + offset_x, y + offset_y);

					if (count == 0)

					{

						if (show[x + offset_x][y + offset_y] == '*')

						{

							show[x + offset_x][y + offset_y] = ' ';

							Spread(mine, show, x + offset_x, y + offset_y);

						}

					}

					else

					{

						show[x + offset_x][y + offset_y] = count + '0';

					}

				}

			}

		}

	}

}



//�ж��Ƿ����׳ɹ�

int IsWin(char show[ROWS][COLS], int row, int col)

{

	int i = 0;

	int j = 0;

	int count = 0;

	for (i = 1; i <= row; i++)

	{

		for (j = 1; j <= col; j++)

		{

			if (show[i][j] == '*')

			{

				count++;

			}

		}

	}

	return count == EASY_COUNT;

}



void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)

{

	int x = 0;

	int y = 0;

	static int win = 0;



	while (IsWin(show, row, col) == 0)

	{

		printf("�������Ų������:>");

		scanf("%d%d", &x, &y);

		if (x >= 1 && x <= row && y >= 1 && y <= col)

		{

			if (mine[x][y] == '1')

			{

				printf("���ź����㱻ը����\n");

				DisplayBoard(mine, ROW, COL);

				break;

			}

			else

			{

				//ͳ��x,y������Χ�м�����

				int count = GetMineCount(mine, x, y);

				if (count == 0)

				{

					show[x][y] = ' ';

					Spread(mine, show, x, y);

					DisplayBoard(show, ROW, COL);

				}

				else

				{

					show[x][y] = count + '0';

					DisplayBoard(show, ROW, COL);

				}

			}

		}

		else

		{

			printf("����Ƿ������������룡\n");

		}

	}

	if (IsWin(show, row, col))

	{

		printf("��ϲ�㣬 ���׳ɹ�\n");

		DisplayBoard(mine, ROW, COL);

	}

}