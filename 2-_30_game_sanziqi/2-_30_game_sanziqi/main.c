#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

char ret;


void menu() {+
	printf("***************\n");
	printf("*****1.play****\n");
	printf("*****0.exit****\n");
	printf("***************\n");
}

void game() {
	char board[ROW][COL];
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);

	//下棋
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
	}
	if (ret == '*') {
		printf("玩家赢\n");
	}else if (ret == '#') {
		printf("电脑赢\n");
	}else {
		printf("平局\n");
	}
}

int main() {
	srand((unsigned int)time(NULL));
	int input;
	do
	{
		menu();
		printf("请选择->");
		scanf("%d", &input);
		switch (input)
		{
		case 1 :
			game();
			break;
		case 0 :
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误重新输入\n");
			break;
		}
	} while (input);
	return 0;
}