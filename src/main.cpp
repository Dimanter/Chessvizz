#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int n=8,m=8;

using namespace std;

extern int Pawn(char *ptr[],int n,int m,char a[],int p);
extern int pawn(char *ptr[],int n,int m,char a[],int p);

extern int Rook(char *ptr[],int n,int m,char a[],int p);
extern int rook(char *ptr[],int n,int m,char a[],int p);

void king()
{
	
}

void queen()
{
	
}

void bishop()
{
	
}

void kNight()
{
	
}

extern void pBoard(char *ptr[],int n,int m);
extern void Board(char *ptr[],int n,int m);

int main()
{
	int hod=1;
	char board[8][8];
	char a[6];
	char *b[8];
	int x;
	for(int i=0;i<8;i++)
	b[i]=board[i];
	Board(b,8,8);
	next:system("clear");
	pBoard(b,8,8);
	if(hod%2 != 0){
		cout << endl << " Time Of White " << endl;
		hod++;
	}
	else {
		cout << endl << " Time Of Black " << endl;
		hod++;
	}
	
	
    povtr:
    	for(int i=0;i<6;i++)
    	cin >> a[i];
    switch (a[0])
    {
    	case 'p':
		{
			if(hod%2 != 0)
			{
				cout << " Neverniy hod" << endl;
				x=5;
				break;
			}
			else
			{
				x=pawn(b,8,8,a,6);break;
			}
		}
    	case 'r':
    	{
    		if(hod%2 != 0)
			{
				cout << " Neverniy hod" << endl;
				x=5;
				break;
			}
			else
			{
				x=rook(b,8,8,a,6);break;
			}
		}
    	//case 'b': bishop();break;
    	//case 'k': king();break;
    	//case 'n': kNight();break;
    	//case 'q': queen();break;
    	case 'P':
		{
			if(hod%2 == 0)
			{
				cout << " Neverniy hod" << endl;
				x=5;
				break;
			}
			else
			{
				x=Pawn(b,8,8,a,6);break;
			}
		}
    	case 'R':
    	{
    		if(hod%2 == 0)
			{
				cout << " Neverniy hod" << endl;
				x=5;
				break;
			}
			else
			{
				x=Rook(b,8,8,a,6);break;
			}
		}
    	//case 'B': Bishop();break;
    	//case 'K': King();break;
    	//case 'N': KNight();break;
    	//case 'Q': Queen();
    }
    if(x == 5)
    goto povtr;
    if(x == 4)
    goto next;
    
    cout << endl;
    return 0;
}
