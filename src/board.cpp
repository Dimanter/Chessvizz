#include "board.h"
int Pawn(char *ptr[],int n,int m,char a[],int p)
{
	char place;
	int top1=a[2]-48,top2=a[5]-48,top3=a[1]-97,top4=a[4]-97;
	cout << endl ;
	top1=n-top1;top2=m-top2;
	if(ptr[top1][top3]==' ')
	{
		cout << " Neverniy hod!!! " << endl;
		return 5;
	}
	if(a[3] != 'x')
	{
		if(ptr[top1+1][top3]!=' ')
		{
			cout << " Neverniy hod!!! " << endl;
			return 5;
		}
		if(a[1] != a[4])
		{
			cout << " Neverniy hod!!! " << endl;
			return 5;
		}
		if(a[2]-48 == 7)
		{
			if(ptr[top1+2][top3]!=' ')
			{
				cout << " Neverniy hod!!! " << endl;
				return 5;
			}
			if(top2-top1 > 2 || top2-top1 <= 0)
			{
				cout << " Neverniy hod!!! " << endl;
				return 5;
			}
			else{
				place=ptr[top1][top3];
				ptr[top1][top3]=ptr[top2][top3];
				ptr[top2][top3]=place;
				return 4;
			}
		}
		else{
			if(top2-top1 > 1 || top2-top1 <= 0)
			{
				cout << " Neverniy hod!!! " << endl;
				return 5;
			}
			else{
				place=ptr[top1][top3];
				ptr[top1][top3]=ptr[top2][top3];
				ptr[top2][top3]=place;
				return 4;
			}
		}
	}
	if(a[3]=='x')
	{
		if(ptr[top2][top4] == ' ')
		{
			cout << " Neverniy hod!!! " << endl;
			return 5;
		}
		if(top2-top1 > 1 || top2-top1 <= 0)
		{
			cout << " Neverniy hod!!! " << endl;
			return 5;
		}
		if(top4-top3 > 1 || top4-top3 < -1 || top4-top3 == 0)
		{
			cout << " Neverniy hod!!! " << endl;
			return 5;
		}
		else
		{
			if(ptr[top2][top4] == 'Q' || ptr[top2][top4] == 'R' || ptr[top2][top4] == 'K' || ptr[top2][top4] == 'N' || ptr[top2][top4] == 'P' || ptr[top2][top4] == 'B')
			{
				cout << " Neverniy hod!!! " << endl;
				return 5;
			}
			place=ptr[top1][top3];
			ptr[top1][top3]=ptr[top2][top4];
			ptr[top2][top4]=place;
			ptr[top1][top3]=' ';
			return 4;
		}
	}
	return 0;
}
int pawn(char *ptr[],int n,int m,char a[],int p)
{
	char place;
	int top1=a[2]-48,top2=a[5]-48,top3=a[1]-97,top4=a[4]-97;
	cout << endl ;
	top1=n-top1;top2=m-top2;
	if(ptr[top1][top3]==' ')
	{
		cout << " Neverniy hod!!! " << endl;
		return 5;
	}
	if(a[3] != 'x')
	{
		if(ptr[top1-1][top3]!=' ')
		{
			cout << " Neverniy hod!!! " << endl;
			return 5;
		}
		if(a[1] != a[4])
		{
			cout << " Neverniy hod!!! " << endl;
				return 5;
		}
		if(a[2]-48 == 2)
		{
			if(ptr[top1-2][top3]!=' ')
			{
				cout << " Neverniy hod!!! " << endl;
				return 5;
			}
			if(top1-top2 > 2 || top1-top2 <= 0)
			{
				cout << " Neverniy hod!!! " << endl;
				return 5;
			}
			else {
				place=ptr[top2][top3];
				ptr[top2][top3]=ptr[top1][top3];
				ptr[top1][top3]=place;
				return 4;
			}
		}
		else{
			if(top1-top2 >1 || top1-top2 <=0)
			{
				cout << " Neverniy hod!!! " << endl;
				return 5;
			}
			else{
				place=ptr[top2][top3];
				ptr[top2][top3]=ptr[top1][top3];
				ptr[top1][top3]=place;
				return 4;
			}
		}
	}
	if(a[3]=='x')
	{
		if(ptr[top2][top4] == ' ')
		{
			cout << " Neverniy hod!!! " << endl;
			return 5;
		}
		if(top1-top2 > 1 || top1-top2 <= 0)
		{
			cout << " Neverniy hod!!! " << endl;
			return 5;
		}
		if(top4-top3 > 1 || top4-top3 < -1 || top4-top3 == 0)
		{
			cout << " Neverniy hod!!! " << endl;
			return 5;
		}
		else
		{
			if(ptr[top2][top4] == 'q' || ptr[top2][top4] == 'r' || ptr[top2][top4] == 'k' || ptr[top2][top4] == 'n' || ptr[top2][top4] == 'p' || ptr[top2][top4] == 'b')
			{
				cout << " Neverniy hod!!! " << endl;
				return 5;
			}
			place=ptr[top1][top3];
			ptr[top1][top3]=ptr[top2][top4];
			ptr[top2][top4]=place;
			ptr[top1][top3]=' ';
			return 4;
		}
	}
	return 0;
}

int rook(char *ptr[],int n,int m,char a[],int p)
{
	char place;
	int top1=a[2]-48,top2=a[5]-48,top3=a[1]-97,top4=a[4]-97;
	cout << endl ;
	top1=n-top1;top2=m-top2;
	if(ptr[top1][top3]==' ')
	{
		cout << " Neverniy hod!!! " << endl;
		return 5;
	}
	if(top1-top2 != 0 && top3-top4 != 0)
	{
		cout << " Neverniy hod!!! " << endl;
		return 5;
	}
	if(a[3] == '-')
	{
		if(top1-top2 == 0)
		{
			if(top4 > top3)
			{
				for(int i=top3+1;i<=top4;i++)
				{
					if(ptr[top1][i] != ' ')
					{
						cout << " Neverniy hod!!! " << endl;
						return 5;
					}
				}
				place = ptr[top1][top3];
				ptr[top1][top3]=ptr[top1][top4];
				ptr[top1][top4]=place;
				return 4;
			}
			else
			{
				for(int i = top4 ;i < top3; i++)
				{
					if(ptr[top1][i] != ' ')
					{
						cout << " Neverniy hod!!! " << endl;
						return 5;
					}
				}
				place = ptr[top1][top3];
				ptr[top1][top3]=ptr[top1][top4];
				ptr[top1][top4]=place;
				return 4;
			}
		}
		if(top3-top4 == 0)
		{
			if(top2 > top1)
			{
				for(int i=top1+1;i <= top2;i++)
				{
					if(ptr[i][top3] != ' ')
					{
						cout << " Neverniy hod!!! " << endl;
						return 5;
					}
				}
				place = ptr[top1][top3];
				ptr[top1][top3]=ptr[top2][top3];
				ptr[top2][top3]=place;
				return 4;
			}
			else
			{
				for(int i=top2;i<top1;i++)
				{
					if(ptr[i][top3] != ' ')
					{
						cout << " Neverniy hod!!! " << endl;
						return 5;
					}
				}
				place = ptr[top1][top3];
				ptr[top1][top3]=ptr[top2][top3];
				ptr[top2][top3]=place;
				return 4;
			}
		}
	}
	if(a[3] == 'x')
	{
		if(top3-top4 == 0)
		{
			if(top2 > top1)
			{
				for(int i=top1+1;i < top2;i++)
				{
					if(ptr[i][top3] != ' ')
					{
						cout << " Neverniy hod!!! " << endl;
						return 5;
					}
				}
				if(ptr[top2][top4] == 'q' || ptr[top2][top4] == 'r' || ptr[top2][top4] == 'k' || ptr[top2][top4] == 'n' || ptr[top2][top4] == 'p' || ptr[top2][top4] == 'b')
				{
					cout << " Neverniy hod!!! " << endl;
					return 5;
				}
				ptr[top2][top4]=ptr[top1][top3];
				ptr[top1][top3]=' ';
				return 4;
			}
			else
			{
				for(int i=top2+1;i < top1;i++)
				{
					if(ptr[i][top3] != ' ')
					{
						cout << " Neverniy hod!!! " << endl;
						return 5;
					}
				}
				if(ptr[top2][top4] == 'q' || ptr[top2][top4] == 'r' || ptr[top2][top4] == 'k' || ptr[top2][top4] == 'n' || ptr[top2][top4] == 'p' || ptr[top2][top4] == 'b')
				{
					cout << " Neverniy hod!!! " << endl;
					return 5;
				}
				ptr[top2][top4]=ptr[top1][top3];
				ptr[top1][top3]=' ';
				return 4;
			}
		}
		if(top1-top2 == 0)
		{
			if(top4 > top3)
			{
				for(int i=top3+1;i < top4;i++)
				{
					if(ptr[top1][i] != ' ')
					{
						cout << " Neverniy hod!!! " << endl;
						return 5;
					}
				}
				if(ptr[top2][top4] == 'q' || ptr[top2][top4] == 'r' || ptr[top2][top4] == 'k' || ptr[top2][top4] == 'n' || ptr[top2][top4] == 'p' || ptr[top2][top4] == 'b')
				{
					cout << " Neverniy hod!!! " << endl;
					return 5;
				}
				ptr[top2][top4]=ptr[top1][top3];
				ptr[top1][top3]=' ';
				return 4;
			}
			else
			{
				for(int i=top3+1;i < top4;i++)
				{
					if(ptr[top1][i] != ' ')
					{
						cout << " Neverniy hod!!! " << endl;
						return 5;
					}
				}
				if(ptr[top2][top4] == 'q' || ptr[top2][top4] == 'r' || ptr[top2][top4] == 'k' || ptr[top2][top4] == 'n' || ptr[top2][top4] == 'p' || ptr[top2][top4] == 'b')
				{
					cout << " Neverniy hod!!! " << endl;
					return 5;
				}
				ptr[top2][top4]=ptr[top1][top3];
				ptr[top1][top3]=' ';
				return 4;
			}
		}
	}
	return 0;
}

int Rook(char *ptr[],int n,int m,char a[],int p)
{
	char place;
	int top1=a[2]-48,top2=a[5]-48,top3=a[1]-97,top4=a[4]-97;
	cout << endl ;
	top1=n-top1;top2=m-top2;
	if(ptr[top1][top3]==' ')
	{
		cout << " Neverniy hod!!! " << endl;
		return 5;
	}
	if(top1-top2 != 0 && top3-top4 != 0)
	{
		cout << " Neverniy hod!!! " << endl;
		return 5;
	}
	if(a[3] == '-')
	{
		if(top1-top2 == 0)
		{
			if(top4 > top3)
			{
				for(int i=top3+1;i<=top4;i++)
				{
					if(ptr[top1][i] != ' ')
					{
						cout << " Neverniy hod!!! " << endl;
						return 5;
					}
				}
				place = ptr[top1][top3];
				ptr[top1][top3]=ptr[top1][top4];
				ptr[top1][top4]=place;
				return 4;
			}
			else
			{
				for(int i = top4 ;i < top3; i++)
				{
					if(ptr[top1][i] != ' ')
					{
						cout << " Neverniy hod!!! " << endl;
						return 5;
					}
				}
				place = ptr[top1][top3];
				ptr[top1][top3]=ptr[top1][top4];
				ptr[top1][top4]=place;
				return 4;
			}
		}
		if(top3-top4 == 0)
		{
			if(top2 > top1)
			{
				for(int i=top1+1;i <= top2;i++)
				{
					if(ptr[i][top3] != ' ')
					{
						cout << " Neverniy hod!!! " << endl;
						return 5;
					}
				}
				place = ptr[top1][top3];
				ptr[top1][top3]=ptr[top2][top3];
				ptr[top2][top3]=place;
				return 4;
			}
			else
			{
				for(int i=top2;i<top1;i++)
				{
					if(ptr[i][top3] != ' ')
					{
						cout << " Neverniy hod!!! " << endl;
						return 5;
					}
				}
				place = ptr[top1][top3];
				ptr[top1][top3]=ptr[top2][top3];
				ptr[top2][top3]=place;
				return 4;
			}
		}
	}
	if(a[3] == 'x')
	{
		if(top3-top4 == 0)
		{
			if(top2 > top1)
			{
				for(int i=top1+1;i < top2;i++)
				{
					if(ptr[i][top3] != ' ')
					{
						cout << " Neverniy hod!!! " << endl;
						return 5;
					}
				}
				if(ptr[top2][top4] == 'Q' || ptr[top2][top4] == 'R' || ptr[top2][top4] == 'K' || ptr[top2][top4] == 'N' || ptr[top2][top4] == 'P' || ptr[top2][top4] == 'B')
				{
					cout << " Neverniy hod!!! " << endl;
					return 5;
				}
				ptr[top2][top4]=ptr[top1][top3];
				ptr[top1][top3]=' ';
				return 4;
			}
			else
			{
				for(int i=top2+1;i < top1;i++)
				{
					if(ptr[i][top3] != ' ')
					{
						cout << " Neverniy hod!!! " << endl;
						return 5;
					}
				}
				if(ptr[top2][top4] == 'Q' || ptr[top2][top4] == 'R' || ptr[top2][top4] == 'K' || ptr[top2][top4] == 'N' || ptr[top2][top4] == 'P' || ptr[top2][top4] == 'B')
				{
					cout << " Neverniy hod!!! " << endl;
					return 5;
				}
				ptr[top2][top4]=ptr[top1][top3];
				ptr[top1][top3]=' ';
				return 4;
			}
		}
		if(top1-top2 == 0)
		{
			if(top4 > top3)
			{
				for(int i=top3+1;i < top4;i++)
				{
					if(ptr[top1][i] != ' ')
					{
						cout << " Neverniy hod!!! " << endl;
						return 5;
					}
				}
				if(ptr[top2][top4] == 'Q' || ptr[top2][top4] == 'R' || ptr[top2][top4] == 'K' || ptr[top2][top4] == 'N' || ptr[top2][top4] == 'P' || ptr[top2][top4] == 'B')
				{
					cout << " Neverniy hod!!! " << endl;
					return 5;
				}
				ptr[top2][top4]=ptr[top1][top3];
				ptr[top1][top3]=' ';
				return 4;
			}
			else
			{
				for(int i=top3+1;i < top4;i++)
				{
					if(ptr[top1][i] != ' ')
					{
						cout << " Neverniy hod!!! " << endl;
						return 5;
					}
				}
				if(ptr[top2][top4] == 'Q' || ptr[top2][top4] == 'R' || ptr[top2][top4] == 'K' || ptr[top2][top4] == 'N' || ptr[top2][top4] == 'P' || ptr[top2][top4] == 'B')
				{
					cout << " Neverniy hod!!! " << endl;
					return 5;
				}
				ptr[top2][top4]=ptr[top1][top3];
				ptr[top1][top3]=' ';
				return 4;
			}
		}
	}
	return 0;
}
