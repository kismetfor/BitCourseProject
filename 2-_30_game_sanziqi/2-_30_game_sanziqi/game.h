#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3

//初始化数组
void InitBoard(char board[ROW][COL], int row, int col);

//打印数组
void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);

//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);


//判断输赢
char IsWin(char board[ROW][COL], int row, int col);

char hengpai(char board[ROW][COL], int row, int col);
char shupai(char board[ROW][COL], int row, int col);
char xiepai(char board[ROW][COL], int row, int col);
