#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

char hengpai(char board[ROW][COL], int row, int col) {
	int j;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			for (int z = j+1; z < col; z++)
			{
				if (board[i][j] != board[i][z]) {
					goto next;
				}
			}
			if (j == col-1) {
				return board[i][0];
			}
		}
	next:
		;
	}
	return 0;
}

char shupai(char board[ROW][COL], int row, int col) {
	int j;
	for (int j = 0; j < row; j++)
	{
		for (int i = 0; i < col; i++)
		{
			for (int z = i + 1; z < col; z++)
			{
				if (board[j][z] != board[j][z]) {
					goto next;
				}
			}
			if (i == row-1) {
				return board[i][0];
			}
		}
	next:
		;
	}
	return 0;
}

char xiepai(char board[ROW][COL], int row, int col) {
	int j;
	for (int i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][i] != board[j][j]) {
				goto next;
			}
		}
		if (j == col-1) {
			return board[i][i];
		}
	next:
		;
	}
	return 0;
}

static int IfFull(char board[ROW][COL], int row, int col) {
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < row; j++)
		{
			if (board[i][j] == ' ') {
				return 0;
			}
		}
	}
	return 1;
}

void InitBoard(char board[ROW][COL], int row, int col) {
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col) {
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			 printf(" %c ", board[i][j]);
			 if (j < col - 1) { printf("|"); }
		}  
		printf("\n");
		if (i < col - 1) {
			for (int j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1) { printf("|"); }
			}
			printf("\n");
		}
	}
}

void PlayerMove(char board[ROW][COL], int row, int col) {
	printf("玩家下棋\n");
	int x;
	int y;
	while (1)
	{
		printf("请输入下棋的坐标>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL) {
			if (board[x - 1][y - 1] == ' ') {
				board[x - 1][y - 1] = '*';
				break;
			}
			else {
				printf("该坐标被占用 请重新输入\n");
			}
		}
		else {
			printf("输入坐标超限 请重新输入\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col) {
	printf("电脑下棋\n");
	int x;
	int y;
	while (1)
	{
		x = rand() % row;
		y = rand() % row;
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL) {
			if (board[x][y] == ' ') {
				board[x][y] = '#';
				break;
			}
		}
	}
}

char IsWin(char board[ROW][COL], int row, int col) {
 //玩家赢 *
//电脑赢 #
//平局 Q
//游戏继续 C
	if (hengpai(board, ROW, COL) == '*' || hengpai(board, ROW, COL) == '#')
	{
		return hengpai(board, ROW, COL);
	}
	else if (shupai(board, ROW, COL) == '*' || shupai(board, ROW, COL) == '#') {
		return shupai(board, ROW, COL);
	}
	else if (xiepai(board, ROW, COL) == '*' || xiepai(board, ROW, COL) == '#') {
		return xiepai(board, ROW, COL);
	}
	else if (IfFull(board, ROW, COL)) {
		return 'Q';
	}
	else
	{
		return 'C';
	}
}