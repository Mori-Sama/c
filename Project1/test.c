#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
void menu()
{
	printf("     1.play  0.exit     \n");

}
void game()
{
	char board[ROW][COL] = { 0 };
	// ��ʼ������
	init_board(board,ROW,COL);
	// ��ӡ����
	show_board(board, ROW, COL);
	while (1)
	{
		char flag;
		player_move(board, ROW, COL);
		show_board(board, ROW, COL);
		if (is_win(judge_outcome(board, ROW, COL)))
		{
			break;
		}
		player_move1(board, ROW, COL);
		show_board(board, ROW, COL);
		if (is_win(judge_outcome(board, ROW, COL)))
		{
			break;
		}
	}

}
int main()
{
	int a;
	do
	{
		printf("�������Ӧ��ſ�ʼ��Ϸ\n");
		menu();
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("�����������������룡");
			break;
		}
	} while (a);
	return 0;
}