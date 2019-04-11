#include "ctest.h"
#include "board.h"
#include "extern.h"

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
	ASSERT_EQUAL(verno,check1);//��� �� 2 ������ ���� ����� � ������
	a[1] = 'c';
	a[2] = '2';
	a[3] = '-';
	a[4] = 'c';
	a[5] = '5';
	int chek2 = pawn(b,8,8,a,6,1);
	ASSERT_EQUAL(neverno,check2);// ��� �� 3 ������
	a[1] = 'e';
	a[2] = '2';
	a[3] = '-';
	a[4] = 'd';
	a[5] = '3';
	int chek3 = pawn(b,8,8,a,6,1);
	ASSERT_EQUAL(neverno,check3);//��� �� ����� ���������
	a[4] = 'f';
	a[5] = '3';
	int chek4 = pawn(b,8,8,a,6,1);
	ASSERT_EQUAL(neverno,check4);//��� �� ������ ���������
	a[1] = 'c';
	a[2] = '2';
	a[3] = '-';
	a[4] = 'c';
	a[5] = '3';
	int chek5 = pawn(b,8,8,a,6,1);
	ASSERT_EQUAL(verno,check5);//��� �� 1 ������
	a[1] = 'c';
	a[2] = '3';
	a[3] = '-';
	a[4] = 'c';
	a[5] = '2';
	int chek6 = pawn(b,8,8,a,6,1);
	ASSERT_EQUAL(neverno,check6);//��� �����
	a[1] = 'c';
	a[2] = '3';
	a[3] = '-';
	a[4] = 'c';
	a[5] = '5';
	int chek7 = pawn(b,8,8,a,6,1);
	ASSERT_EQUAL(neverno,check7);//��� �� 2 ������ ���� ����� �� � ������
	
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
	ASSERT_EQUAL(verno,check1);//��� �� ���� �� ��������� �����
	a[1] = 'a';
	a[2] = '3';
	a[3] = '-';
	a[4] = 'd';
	a[5] = '6';
	int chek2 = rook(b,8,8,a,6,1);
	ASSERT_EQUAL(neverno,check2);//��� ����� ������
	a[1] = 'a';
	a[2] = '3';
	a[3] = '-';
	a[4] = 'b';
	a[5] = '2';
	int chek3 = rook(b,8,8,a,6,1);
	ASSERT_EQUAL(verno,check3);//��� �� ����� �� ��������� ����
	a[1] = 'b';
	a[2] = '2';
	a[3] = '-';
	a[4] = 'd';
	a[5] = '4';
	int chek4 = rook(b,8,8,a,6,1);
	ASSERT_EQUAL(verno,check4);//��� �� ����� �� ��������� �����
	a[1] = 'd';
	a[2] = '4';
	a[3] = '-';
	a[4] = 'c';
	a[5] = '3';
	int chek5 = rook(b,8,8,a,6,1);
	ASSERT_EQUAL(verno,check5);//��� �� ���� �� ��������� ����
	a[1] = 'c';
	a[2] = '3';
	a[3] = '-';
	a[4] = 'c';
	a[5] = '5';
	int chek6 = rook(b,8,8,a,6,1);
	ASSERT_EQUAL(neverno,check6);//��� �� ���������
	a[1] = 'c';
	a[2] = '3';
	a[3] = '-';
	a[4] = 'g';
	a[5] = '3';
	int chek7 = rook(b,8,8,a,6,1);
	ASSERT_EQUAL(neverno,check7);//��� �� �����������
}
