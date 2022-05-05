#include "game.h"
void a(char a[rows][cols],char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			a[i][j] = set;
		}
	}
}


void b(char b[rows][cols], int q, int e)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= q; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= q; i++)
	{
		printf("%d ",i);
		for (j = 1; j <= e; j++)
		{
			printf("%c ", b[i][j]);
		}
		printf("\n");
	}
}


void SetMine(char board[rows][cols], int q, int e)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}


int gei_main_count(char m[rows][cols], int x, int y)
{
	return
		m[x - 1][y] +
		m[x - 1][y - 1] +
		m[x - 1][y + 1] +
		m[x][y - 1] +
		m[x][y + 1] +
		m[x + 1][y] +
		m[x + 1][y - 1] +
		m[x + 1][y + 1] - 8 * '0';
}

void FinfMine(char m[rows][cols], char s[rows][cols], int q, int e)
{
	int x = 0;
	int y = 0;
	int win = 0;
	printf("�������Ų��׵�����\n");
	while (win< row * col - EASY_COUNT)
	{
		scanf_s("%d%d", &x, &y);
		if (x >= 1 && x <= q && y >= 1 && y <= e)
		{
			if (m[x][y] == '1')
			{
				printf("���ź����㱻ը����\n");
				b(m, q,e);
				break;
			}
			else//������
			{
				//����x��y������Χ�м�����
				int count = gei_main_count(m, x, y);
				s[x][y] = count + '0';
				b(s, q, e);
				win++;
			}
		}
		else
		{
			printf("����Ƿ������������룡\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		b(m, q, e);
	}
}