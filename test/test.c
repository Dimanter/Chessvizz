#include "ctest.h"
#include "board.h"
extern void Board(char *ptr[],int n,int m);

CTEST(move,move_pown)//���� �����
{
	const int verno = 4;
	const int neverno = 5;
	char board[8][8];
	char a[6];
	char *b[8];
	for(int i=0;i<8;i++)
	b[i]=board[i];
	Board(b,8,8);
	a[0] = 'p';
	a[1] = 'b';
	a[2] = '2';
	a[3] = '-';
	a[4] = 'b';
	a[5] = '4';
	int chek1 = pawn(b,8,8,a,6,1);
	ASSERT_EQUAL(verno,chek1);//��� �� 2 ������ ���� ����� � ������
	a[1] = 'c';
	a[2] = '2';
	a[3] = '-';
	a[4] = 'c';
	a[5] = '5';
	int chek2 = pawn(b,8,8,a,6,1);
	ASSERT_EQUAL(neverno,chek2);// ��� �� 3 ������
	a[1] = 'e';
	a[2] = '2';
	a[3] = '-';
	a[4] = 'd';
	a[5] = '3';
	int chek3 = pawn(b,8,8,a,6,1);
	ASSERT_EQUAL(neverno,chek3);//��� �� ����� ���������
	a[4] = 'f';
	a[5] = '3';
	int chek4 = pawn(b,8,8,a,6,1);
	ASSERT_EQUAL(neverno,chek4);//��� �� ������ ���������
	a[1] = 'c';
	a[2] = '2';
	a[3] = '-';
	a[4] = 'c';
	a[5] = '3';
	int chek5 = pawn(b,8,8,a,6,1);
	ASSERT_EQUAL(verno,chek5);//��� �� 1 ������
	a[1] = 'c';
	a[2] = '3';
	a[3] = '-';
	a[4] = 'c';
	a[5] = '2';
	int chek6 = pawn(b,8,8,a,6,1);
	ASSERT_EQUAL(neverno,chek6);//��� �����
	a[1] = 'c';
	a[2] = '3';
	a[3] = '-';
	a[4] = 'c';
	a[5] = '5';
	int chek7 = pawn(b,8,8,a,6,1);
	ASSERT_EQUAL(neverno,chek7);//��� �� 2 ������ ���� ����� �� � ������
	
}

CTEST(move,move_rook)
{
	const int verno = 4;
	const int neverno = 5;
	char board[8][8];
	char a[6];
	char *b[8];
	for(int i=0;i<8;i++)
	b[i]=board[i];
	Board(b,8,8);
	a[0] = 'p';
	a[1] = 'b';
	a[2] = '2';
	a[3] = '-';
	a[4] = 'b';
	a[5] = '4';
	pawn(b,8,8,a,6,1);
	a[0] = 'b';
	a[1] = 'c';
	a[2] = '1';
	a[3] = '-';
	a[4] = 'a';
	a[5] = '3';
	int chek1 = rook(b,8,8,a,6,1);
	ASSERT_EQUAL(verno,chek1);//��� �� ���� �� ��������� �����
	a[1] = 'a';
	a[2] = '3';
	a[3] = '-';
	a[4] = 'd';
	a[5] = '6';
	int chek2 = rook(b,8,8,a,6,1);
	ASSERT_EQUAL(neverno,chek2);//��� ����� ������
	a[1] = 'a';
	a[2] = '3';
	a[3] = '-';
	a[4] = 'b';
	a[5] = '2';
	int chek3 = rook(b,8,8,a,6,1);
	ASSERT_EQUAL(verno,chek3);//��� �� ����� �� ��������� ����
	a[1] = 'b';
	a[2] = '2';
	a[3] = '-';
	a[4] = 'd';
	a[5] = '4';
	int chek4 = rook(b,8,8,a,6,1);
	ASSERT_EQUAL(verno,chek4);//��� �� ����� �� ��������� �����
	a[1] = 'd';
	a[2] = '4';
	a[3] = '-';
	a[4] = 'c';
	a[5] = '3';
	int chek5 = rook(b,8,8,a,6,1);
	ASSERT_EQUAL(verno,chek5);//��� �� ���� �� ��������� ����
	a[1] = 'c';
	a[2] = '3';
	a[3] = '-';
	a[4] = 'c';
	a[5] = '5';
	int chek6 = rook(b,8,8,a,6,1);
	ASSERT_EQUAL(neverno,chek6);//��� �� ���������
	a[1] = 'c';
	a[2] = '3';
	a[3] = '-';
	a[4] = 'g';
	a[5] = '3';
	int chek7 = rook(b,8,8,a,6,1);
	ASSERT_EQUAL(neverno,chek7);//��� �� �����������
}
