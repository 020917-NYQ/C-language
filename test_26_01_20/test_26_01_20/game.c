#include "game.h"
void menu()
{
	printf("***********************\n");
	printf("******  1. Play  ******\n");
	printf("******  0. Exit  ******\n");
	printf("***********************\n");
}

//Easy（简单）、Norm（中等）、Hard（困难）、User（自定义）、Undo（返回上一步）、Help（游戏教学）
int GameDifficulty()
{
	int input = 0;
	printf("开始游戏！\n\n");
	printf("***********************\n");
	printf("** 1. Easy   2. Norm **\n");
	printf("** 3. Hard   4. User **\n");
	printf("** 5. Undo   0. Help **\n");
	printf("***********************\n");
	while (1)
	{
		printf("请选择游戏难度：");
		scanf("%d", &input);

		if (input < 0 || input > 5)
			printf("选择错误，请重新选择！\n");
		else
			return input;
	}
}

void GameHelp()
{
	printf("游戏教学！\n");
	printf("╔════════════════════════════════════════════════════════════════════════════════╗\n");
	printf("║ 《扫雷》中玩家的目标是在最短时间内识别出所有非雷区的格子，同时避免触碰到地雷。 ║\n");
	printf("║ 游戏区域由多个隐藏格子组成，每个格子可能隐藏着地雷或数字，数字表示周围八个格子 ║\n");
	printf("║ 中地雷的数量。玩家通过点击格子揭示内容，使用逻辑推理逐步排除雷区。游戏考验玩家 ║\n");
	printf("║ 的观察力和推理能力，任何一次误点地雷都会导致游戏失败。                         ║\n");
	printf("╚════════════════════════════════════════════════════════════════════════════════╝\n");
}

int SetMineCount(int dif)
{
	int count = 0;

	if (dif == 1)
		return EASY_COUNT;
	else if (dif == 2)
		return NORM_COUNT;
	else if (dif == 3)
		return HARD_COUNT;
	else if (dif == 4)
	{
		while (1)
		{
			printf("请输入自定义的雷的个数：");
			scanf("%d", &count);
			if (count < 1)
				printf("最少有1个雷，请重新输入！\n");
			else if (count > 81)
				printf("最多有81个雷，请重新输入！\n");
			else
				break;
		}
		return count;
	}
}

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	//mine数组全部初始化为'0'，show数组全部初始化为'*'
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			board[i][j] = set;
}

//传入的数组依然是11×11的，只不过想要打印9×9的，可以更改参数row和col
void PrintBoard(char board[ROWS][COLS], int row, int col)
{
	system("cls"); //清屏后重新打印棋盘
	printf("********  Minesweeper  ********\n   ");
	for (int i = 1; i <= col; i++)
		printf(" %d ", i);//打印列号
	printf("\n");
	printf("  ╔═══════════════════════════╗\n");

	for (int i = 1; i <= row; i++)
	{
		printf("%d ", i); //打印行号
		printf("║");

		for (int j = 1; j <= col; j++)
		{
			if (board[i][j] == '9')
				printf(COLOR_BLUE " %c "COLOR_RESET, board[i][j]);
			else
				printf(" %c ", board[i][j]);
		}
		printf("║");
		printf("\n");
	}
	printf("  ╚═══════════════════════════╝\n");
	printf("\n");
}

//所有雷都需要布置到9×9的棋盘中，所以用row和col接收
void SetMine(char mine[ROWS][COLS], int row, int col, int count)
{
	//随机布置雷
	while (count--)
	{
		int x = rand() % row + 1, y = rand() % col + 1;

		if (mine[x][y] == '0') //没有布置过雷
			mine[x][y] = '9';
	}
}

int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	return ((
		mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0') / 9);
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int count)
{
	int x = 0, y = 0, win = 0;
	while (win < row * col - count)
	{
		printf("请输入要排查的坐标：");
		scanf("%d %d", &x, &y);
		if (show[x][y] != '*')
		{
			printf("该作标被排查过，请重新输入！\n");
			continue;
		}

		if (x >= 1 && x <= row && y >= 1 && y <= col) //坐标合法
		{
			if (mine[x][y] == '9')
			{
				PrintBoard(mine, ROW, COL);
				printf("很遗憾，你被炸死了！\n\n");
				break;
			}
			else
			{
				int count = GetMineCount(mine, x, y); //统计该坐标周围有几个雷
				if (count == 0)
					show[x][y] = ' ';
				else
					show[x][y] = count + '0';

				PrintBoard(show, ROW, COL);
				win++;
			}
		}
		else
			printf("排查的坐标非法，请重新输入！\n");
	}

	//排雷成功
	if (win == row * col - count)
	{
		PrintBoard(mine, ROW, COL);
		printf("恭喜你排雷成功！\n\n");
	}
}

void game()
{
	int dif = GameDifficulty(); //游戏难度
	if (dif == 5)
	{
		printf("返回上一级！\n\n");
		return;
	}
	else if (dif == 0)
	{
		GameHelp(); //游戏教学
		printf("返回主菜单！\n\n");
		return;
	}

	int count = SetMineCount(dif); //获取雷的个数

	char mine[ROWS][COLS] = { 0 }; //布置雷的数组
	char show[ROWS][COLS] = { 0 }; //显示雷的数组

	InitBoard(mine, ROWS, COLS, '0'); //初始化布置雷的棋盘
	InitBoard(show, ROWS, COLS, '*'); //初始化显示雷的棋盘

	PrintBoard(show, ROW, COL); //打印显示雷的棋盘，只打印9×9的棋盘
	//PrintBoard(mine, ROW, COL); //打印布置雷的棋盘

	SetMine(mine, ROW, COL, count); //布置雷
	//PrintBoard(mine, ROW, COL); //打印布置雷的棋盘

	FindMine(mine, show, ROW, COL, count); //排查雷
}