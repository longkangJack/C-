#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3
void menu();
void InitBoard(char board[ROW][COL], int row, int col);
void DisPlayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char checkWin(char board[ROW][COL], int row, int col);
int is_full(char board[ROW][COL], int row, int col);

