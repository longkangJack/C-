#define _CRT_SECURE_NO_WARNINGS 1



#include "game.h"





//����ɨ����Ϸ

void menu()

{

	printf("************************\n");

	printf("*   1.play      0.exit *\n");

	printf("************************\n");

}



void game()

{

	//9*9

	//�洢���ú��׵���Ϣ

	char mine[ROWS][COLS] = { 0 };//'0'

	//����Ų�������׵���Ϣ

	char show[ROWS][COLS] = { 0 };//'*'

	InitBoard(mine, ROWS, COLS, '0');

	InitBoard(show, ROWS, COLS, '*');



	DisplayBoard(show, ROW, COL);

	//������

	SetMine(mine, ROW, COL);

	DisplayBoard(mine, ROW, COL);

	//�Ų���

	FindMine(mine, show, ROW, COL);

}



void test()

{

	int input = 0;

	srand((unsigned int)time(NULL));



	do

	{

		menu();

		printf("��ѡ��>:");

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

			printf("ѡ�����\n");

			break;

		}

	} while (input);



}



int main()

{

	test();

	return 0;

}