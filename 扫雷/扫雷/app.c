#include "game.h"


void menu()
{
	printf("***************\n");
	printf("******扫雷*****\n");
	printf("*1.play 0.exit*\n");
}

void game()
{
	//雷的信息存储
	//1.布置好的雷的信息
	char mine[rows][cols] = { 0 };//11*11
	//2.排查出的雷的信息
	char show[rows][cols] = { 0 };
	//初始化
	a(mine,'0');
	a(show,'*');
	//打印棋盘
	//b(mine, row, col);
	b(show, row, col);
	//布置雷
	SetMine(mine, row, col);
	//b(mine, row, col);//雷的分布图
	//扫雷
	FinfMine(mine, show, row, col);
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：\n");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("请重新输入\n");
			break;
		}
	} while (input);
}
		
int main()
{
	test();
	return 0;
}