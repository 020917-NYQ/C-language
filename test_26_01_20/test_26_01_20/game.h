#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define ROW 9
#define COL 9
#define ROWS ROW + 2
#define COLS COL + 2
#define EASY_COUNT 10 //雷的个数（简单）
#define NORM_COUNT 15 //雷的个数（中等）
#define HARD_COUNT 20 //雷的个数（困难）
#define MIN_COUNT 1 //最少的雷的个数
#define MAX_COUNT 81 //最多的雷的个数
#define COLOR_BLUE "\033[34m" //蓝色
#define COLOR_RESET "\033[0m" //重置颜色

void menu(); //菜单
void game(); //游戏
int GameDifficulty(); //游戏难度
void GameHelp(); //游戏教学
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set); //初始化棋盘
void PrintBoard(char board[ROWS][COLS], int row, int col); //打印棋盘
int SetMineCount(int dif); //获取雷的个数
void SetMine(char mine[ROWS][COLS], int row, int col, int count); //布置雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int count); //排查雷
int GetMineCount(char mine[ROWS][COLS], int x, int y); //统计坐标周围雷的个数