#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3 //棋盘行
#define COL 3 //棋盘列
#define COLOR_BLUE "\033[34m" //蓝色
#define COLOR_RESET "\033[0m" //重置颜色

void menu(); //菜单
void game(); //游戏
void InitBoard(char board[ROW][COL], int row, int col); //初始化棋盘
void DisplayBoard(char board[ROW][COL], int row, int col); //显示棋盘
void PlayerMove(char board[ROW][COL], int row, int col); //玩家下棋
void ComputerMove(char board[ROW][COL], int row, int col); //电脑下棋
char IsWin(char board[ROW][COL], int row, int col); //判断输赢
int IsFull(char board[ROW][COL], int row, int col); //判断棋盘是否满了