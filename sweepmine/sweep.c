#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void game()
{
	srand((unsigned int)time(NULL));
	char board[ROWS][COLS] = { '0' };
	char mine[ROWS][COLS] = { '0' };
	// ��ʼ������
	init_board(board, ROW, COL, '0');
	init_board(mine, ROW, COL, '*');
	// �������λ�õ���
	create_mine(board, ROW, COL);
	show_board(board, ROW, COL);
	// ��ӡ����
	show_board(mine, ROW, COL);
	// �������
	get_player(board, mine, ROW, COL);

}


void menu()
{
	printf("     1.play     \n");
	printf("     0.exit     \n");
}

void test()
{
	int a;
	do
	{
		menu();
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("������\n");
			break;
		}
	} while (a);
}

int main()
{
	test();

	return 0;
}