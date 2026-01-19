#include "game.h"
void menu()
{
	printf("***********************\n");
	printf("******  1. play  ******\n");
	printf("******  0. exit  ******\n");
	printf("***********************\n");
}

void InitBoard(char board[ROW][COL], int row, int col)
{
	//for (int i = 0; i < row; i++)
	//	for (int j = 0; j < col; j++)
	//		board[i][j] = ' '; //初始化为空格

	//或者用内存设置函数初始化
	memset(&board[0][0], ' ', row * col * sizeof(board[0][0]));
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	printf("\n");
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (board[i][j] == '*')
				printf(COLOR_BLUE " * " COLOR_RESET);
			else
				printf(" %c ", board[i][j]);

			if (j < col - 1)
				printf("|");
		}
		printf("\n");

		if (i < row - 1)
		{
			for (int j = 0; j < col; j++)
			{
				printf("---");
				
				if (j < col - 1)
					printf("|");
			}
		}
		printf("\n");
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	printf(COLOR_BLUE "玩家下棋\n" COLOR_RESET);
	
	while (1)
	{
		printf(COLOR_BLUE "请输入下棋坐标：" COLOR_RESET);
		scanf("%d %d", &x, &y);

		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//用户不知道下标从0开始
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*'; //玩家下棋用"*"
				break;
			}
			else
				printf("坐标被占用，请重新输入\n");
		}
		else
			printf("坐标不合法，请重新输入\n");
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋\n");
	while (1)
	{
		int x = rand() % row, y = rand() % col; //电脑随机下棋
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

int IsFull(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			if (board[i][j] == ' ')
				return 0; //未满返回0

	return 1; //满了返回1
}

//玩家赢返回"*"，电脑赢返回"#"，平局返回"q"，继续返回"c"
char IsWin(char board[ROW][COL], int row, int col)
{
	//判断三行
	for (int i = 0; i < row; i++)
		if (board[i][0] == board[i][1] &&
			board[i][1] == board[i][2] &&
			board[i][0] != ' ')
			return board[i][0];

	//判断三列
	for (int i = 0; i < col; i++)
		if (board[0][i] == board[1][i] &&
			board[1][i] == board[2][i] &&
			board[0][i] != ' ')
			return board[0][i];

	//判断对角线
	if (board[0][0] == board[1][1] &&
		board[1][1] == board[2][2] &&
		board[1][1] != ' ')
		return board[1][1];

	//判断对角线
	if (board[0][2] == board[1][1] &&
		board[1][1] == board[2][0] &&
		board[1][1] != ' ')
		return board[1][1];

	//判断平局
	if (IsFull(board, row, col)) //IsFull()函数判断棋盘是否满了
		return 'q'; //棋盘满了，并且没有输赢，即为平局

	return 'c'; //棋盘没满没输赢，继续下棋
}

void game()
{
	char board[3][3] = { 0 };//存放数据需要一个3×3的二维数组
	InitBoard(board, ROW, COL); //初始化棋盘
	DisplayBoard(board, ROW, COL); //显示棋盘

	char ret = 0;
	while (1)
	{
		PlayerMove(board, ROW, COL); //玩家下棋
		DisplayBoard(board, ROW, COL); //显示棋盘
		ret = IsWin(board, ROW, COL); //判断输赢
		if (ret != 'c')
			break;

		ComputerMove(board, ROW, COL); //电脑下棋
		DisplayBoard(board, ROW, COL); //显示棋盘
		ret = IsWin(board, ROW, COL); //判断输赢
		if (ret != 'c')
			break;
	}

	if (ret == '*')
		printf("玩家赢！\n");
	else if (ret == '#')
		printf("电脑赢！\n");
	else if (ret == 'q')
		printf("平局！\n");
}