#include "game.h"


void menu()
{
	printf("***************\n");
	printf("******ɨ��*****\n");
	printf("*1.play 0.exit*\n");
}

void game()
{
	//�׵���Ϣ�洢
	//1.���úõ��׵���Ϣ
	char mine[rows][cols] = { 0 };//11*11
	//2.�Ų�����׵���Ϣ
	char show[rows][cols] = { 0 };
	//��ʼ��
	a(mine,'0');
	a(show,'*');
	//��ӡ����
	//b(mine, row, col);
	b(show, row, col);
	//������
	SetMine(mine, row, col);
	//b(mine, row, col);//�׵ķֲ�ͼ
	//ɨ��
	FinfMine(mine, show, row, col);
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����������\n");
			break;
		}
	} while (input);
}
		
int main()
{
	test();
	return 0;
}