#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <iostream>
using namespace std;

void BoardP(char *ptr[],int n,int m)
{
    for (int i = 0 ; i < n; i++) 
	{
        for (int j = 0; j < m; j++) 
		{
        	if(i == 0){
        		ptr[i][j] = ' ';
			}
            if (i == 1) {
                ptr[i][j] = 'P';
            }
            if (i == 2) {
                ptr[i][j] = ' ';
            }
            if (i == 3) {
                ptr[i][j] = ' ';
            }
            if (i == 4) {
                ptr[i][j] = ' ';
            }
            if (i == 5) {
                ptr[i][j] = ' ';
            }
            if (i == 6) {
                ptr[i][j] = 'p';
            }
            if(i == 7){
				ptr[i][j] = ' ';
			}
        }
    }
    ptr[5][0] = 'p';
    ptr[5][3] = 'R';
}

void BoardN(char *ptr[],int n,int m)
{
    for (int i = 0 ; i < n; i++) 
	{
        for (int j = 0; j < m; j++) 
		{
        	if(i == 0){
        		ptr[i][j] = ' ';
			}
            if (i == 1) {
                ptr[i][j] = ' ';
            }
            if (i == 2) {
                ptr[i][j] = ' ';
            }
            if (i == 3) {
                ptr[i][j] = ' ';
            }
            if (i == 4) {
                ptr[i][j] = ' ';
            }
            if (i == 5) {
                ptr[i][j] = ' ';
            }
            if (i == 6) {
                ptr[i][j] = ' ';
            }
            if(i == 7){
				ptr[i][j] = ' ';
			}
        }
    }
    ptr[7][4] = 'n';
    ptr[4][4] = 'n';
    ptr[7][1] = 'n';
    ptr[6][3] = 'R';
}

void BoardK(char *ptr[],int n,int m)
{
    for (int i = 0 ; i < n; i++) 
	{
        for (int j = 0; j < m; j++) 
		{
        	if(i == 0){
        		ptr[i][j] = ' ';
			}
            if (i == 1) {
                ptr[i][j] = ' ';
            }
            if (i == 2) {
                ptr[i][j] = ' ';
            }
            if (i == 3) {
                ptr[i][j] = ' ';
            }
            if (i == 4) {
                ptr[i][j] = ' ';
            }
            if (i == 5) {
                ptr[i][j] = ' ';
            }
            if (i == 6) {
                ptr[i][j] = ' ';
            }
            if(i == 7){
				ptr[i][j] = ' ';
			}
        }
    }
    ptr[4][2] = 'k';
    ptr[4][3] = 'R';
}

void BoardQ(char *ptr[],int n,int m)
{
    for (int i = 0 ; i < n; i++) 
	{
        for (int j = 0; j < m; j++) 
		{
        	if(i == 0){
        		ptr[i][j] = ' ';
			}
            if (i == 1) {
                ptr[i][j] = ' ';
            }
            if (i == 2) {
                ptr[i][j] = ' ';
            }
            if (i == 3) {
                ptr[i][j] = ' ';
            }
            if (i == 4) {
                ptr[i][j] = ' ';
            }
            if (i == 5) {
                ptr[i][j] = ' ';
            }
            if (i == 6) {
                ptr[i][j] = ' ';
            }
            if(i == 7){
				ptr[i][j] = ' ';
			}
        }
    }
    ptr[4][2] = 'q';
    ptr[4][3] = 'R';
}

void BoardB(char *ptr[],int n,int m)
{
    for (int i = 0 ; i < n; i++) 
	{
        for (int j = 0; j < m; j++) 
		{
        	if(i == 0){
        		ptr[i][j] = ' ';
			}
            if (i == 1) {
                ptr[i][j] = ' ';
            }
            if (i == 2) {
                ptr[i][j] = ' ';
            }
            if (i == 3) {
                ptr[i][j] = ' ';
            }
            if (i == 4) {
                ptr[i][j] = ' ';
            }
            if (i == 5) {
                ptr[i][j] = ' ';
            }
            if (i == 6) {
                ptr[i][j] = ' ';
            }
            if(i == 7){
				ptr[i][j] = ' ';
			}
        }
    }
    ptr[4][2] = 'b';
    ptr[2][4] = 'R';
}

void BoardR(char *ptr[],int n,int m)
{
    for (int i = 0 ; i < n; i++) 
	{
        for (int j = 0; j < m; j++) 
		{
        	if(i == 0){
        		ptr[i][j] = ' ';
			}
            if (i == 1) {
                ptr[i][j] = ' ';
            }
            if (i == 2) {
                ptr[i][j] = ' ';
            }
            if (i == 3) {
                ptr[i][j] = ' ';
            }
            if (i == 4) {
                ptr[i][j] = ' ';
            }
            if (i == 5) {
                ptr[i][j] = ' ';
            }
            if (i == 6) {
                ptr[i][j] = ' ';
            }
            if(i == 7){
				ptr[i][j] = ' ';
			}
        }
    }
    ptr[4][2] = 'r';
    ptr[4][4] = 'R';
}

int pawn(char *ptr[],int n,int m,char a[],int p,int hod)
{
	int top1=a[2]-48,top2=a[5]-48,top3=a[1]-97,top4=a[4]-97;
	cout << endl ;
	top1=n-top1;top2=m-top2;
	switch(ptr[top1][top3])
	{
		case 'p':
		{
			if(a[3] != 'x')
			{
				if(ptr[top1-1][top3]!=' ')
				{
					return 5;
				}
				if(a[1] != a[4])
				{
					return 5;
				}
				if(a[2]-48 == 2)
				{
					if(ptr[top1-2][top3]!=' ')
					{
						return 5;
					}
					if(top1-top2 > 2 || top1-top2 <= 0)
					{
						return 5;
					}
					else {
						return 4;
					}
				}
				else{
					if(top1-top2 >1 || top1-top2 <=0)
					{
						return 5;
					}
					else{
						return 4;
					}
				}
			}
			if(a[3]=='x')
			{
				if(ptr[top2][top4]==' ')
				{
					return 5;
				}
				if(ptr[top2][top4] == ' ')
				{
					return 5;
				}
				if(top1-top2 > 1 || top1-top2 <= 0)
				{
					return 5;
				}
				if(top4-top3 > 1 || top4-top3 < -1 || top4-top3 == 0)
				{
					return 5;
				}
				else
				{
					if(ptr[top2][top4] == 'q' || ptr[top2][top4] == 'r' || ptr[top2][top4] == 'k' || ptr[top2][top4] == 'n' || ptr[top2][top4] == 'p' || ptr[top2][top4] == 'b')
					{
						return 5;
					}
					return 4;
				}
			}
		}
	}
	return 5;
}

int kNight(char *ptr[],int n,int m,char a[],int p,int hod)
{
	int top1=a[2]-48,top2=a[5]-48,top3=a[1]-97,top4=a[4]-97,tmp1,tmp2;
	cout << endl ;
	top1=n-top1;top2=m-top2;
	tmp1=top1-top2;
	tmp2=top3-top4;
	if(ptr[top1][top3] == 'n' || ptr[top1][top3] == 'N')
	{
		if(a[3] == '-')
		{
			if(ptr[top2][top4] != ' ')
			{
				return 5;
			}
			if(tmp1 == 2 || tmp1 == -2)
			{
				if(tmp2 == 1 || tmp2 == -1)
				{
					return 4;
				}
				else 
				{
					return 5;
				}
			}			
			if(tmp1 == 1 || tmp1 == -1)
			{
				if(tmp2 == 2 || tmp2 == -2)
				{
					return 4;
				}
				else
				{
					return 5;
				}
			}
			else
			{
				return 5;
			}
		}
		if(a[3] == 'x')
		{
			if(hod%2!=0)
			{
				if(ptr[top2][top4] == 'Q' || ptr[top2][top4] == 'R' || ptr[top2][top4] == 'K' || ptr[top2][top4] == 'N' || ptr[top2][top4] == 'P' || ptr[top2][top4] == 'B')
				{
					return 5;
				}
			}
			else
			{
				if(ptr[top2][top4] == 'q' || ptr[top2][top4] == 'r' || ptr[top2][top4] == 'k' || ptr[top2][top4] == 'n' || ptr[top2][top4] == 'p' || ptr[top2][top4] == 'b')
				{
					return 5;
				}
			}
			if(tmp1 == 2 || tmp1 == -2)
			{
				if(tmp2 == 1 || tmp2 == -1)
				{
					return 4;
				}
				else 
				{
					return 5;
				}
			}			
			if(tmp1 == 1 || tmp1 == -1)
			{
				if(tmp2 == 2 || tmp2 == -2)
				{
					return 4;
				}
				else
				{
					return 5;
				}
			}
			else
			{
				return 5;
			}	
		}
	}
	else
	{
		return 5;	
	}
	return 0;
}

int king(char *ptr[],int n,int m,char a[],int p,int hod)
{
	
	int top1=a[2]-48,top2=a[5]-48,top3=a[1]-97,top4=a[4]-97;
	cout << endl ;
	top1=n-top1;top2=m-top2;
	if(top1-top2 > 1 || top1-top2 < -1)
	{
		return 5;
	}
	if(top3-top4 > 1 || top3-top4 < -1)
	{
		return 5;
	}
	if(ptr[top1][top3]=='k' || ptr[top1][top3]=='K')
	{
		if(a[3]=='-')
		{
			if(ptr[top2][top4] != ' ')
			{
				return 5;
			}
			return 4;
		}
		if(a[3]=='x')
		{
			if(ptr[top2][top4]==' ')
			{
				return 5;
			}
			if(hod%2!=0)
			{
				if(ptr[top2][top4] == 'Q' || ptr[top2][top4] == 'R' || ptr[top2][top4] == 'K' || ptr[top2][top4] == 'N' || ptr[top2][top4] == 'P' || ptr[top2][top4] == 'B')
				{
					return 5;
				}
			}
			else
			{
				if(ptr[top2][top4] == 'q' || ptr[top2][top4] == 'r' || ptr[top2][top4] == 'k' || ptr[top2][top4] == 'n' || ptr[top2][top4] == 'p' || ptr[top2][top4] == 'b')
				{
					return 5;
				}
			}
			return 4;
		}
	}
	else
	{
		return 5;
	}
	return 0;
}

int queen(char *ptr[],int n,int m,char a[],int p,int hod)
{
	int top1=a[2]-48,top2=a[5]-48,top3=a[1]-97,top4=a[4]-97,s=0;
	cout << endl ;
	top1=n-top1;top2=m-top2;
	if(hod%2 != 0)
	{
		if(ptr[top1][top3] == 'q')
		{
			return 5;
		}
	}
	else
	{
		if(ptr[top1][top3] == 'Q')
		{
			return 5;
		}
	}
	if(top1==top2 || top3 == top4)
	{
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
						return 5;
					}
				}
				return 4;
			}
			else
			{
				for(int i = top4 ;i < top3; i++)
				{
					if(ptr[top1][i] != ' ')
					{
						return 5;
					}
				}
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
						return 5;
					}
				}
				return 4;
			}
			else
			{
				for(int i=top2;i<top1;i++)
				{
					if(ptr[i][top3] != ' ')
					{
						return 5;
					}
				}
				return 4;
			}
		}
	}
	if(a[3] == 'x')
	{
		if(ptr[top2][top4]==' ')
		{
			return 5;
		}
		if(top3-top4 == 0)
		{
			if(top2 > top1)
			{
				for(int i=top1+1;i < top2;i++)
				{
					if(ptr[i][top3] != ' ')
					{
						return 5;
					}
				}
				if(hod%2!=0)
				{
					if(ptr[top2][top4] == 'Q' || ptr[top2][top4] == 'R' || ptr[top2][top4] == 'K' || ptr[top2][top4] == 'N' || ptr[top2][top4] == 'P' || ptr[top2][top4] == 'B')
					{
						return 5;
					}
				}
				else
				{
					if(ptr[top2][top4] == 'q' || ptr[top2][top4] == 'r' || ptr[top2][top4] == 'k' || ptr[top2][top4] == 'n' || ptr[top2][top4] == 'p' || ptr[top2][top4] == 'b')
					{
						return 5;
					}
				}
				return 4;
			}
			else
			{
				for(int i=top2+1;i < top1;i++)
				{
					if(ptr[i][top3] != ' ')
					{
						return 5;
					}
				}
				if(hod%2!=0)
				{
					if(ptr[top2][top4] == 'Q' || ptr[top2][top4] == 'R' || ptr[top2][top4] == 'K' || ptr[top2][top4] == 'N' || ptr[top2][top4] == 'P' || ptr[top2][top4] == 'B')
					{
						return 5;
					}
				}
				else
				{
					if(ptr[top2][top4] == 'q' || ptr[top2][top4] == 'r' || ptr[top2][top4] == 'k' || ptr[top2][top4] == 'n' || ptr[top2][top4] == 'p' || ptr[top2][top4] == 'b')
					{
						return 5;
					}
				}
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
						return 5;
					}
				}
				if(hod%2!=0)
				{
					if(ptr[top2][top4] == 'Q' || ptr[top2][top4] == 'R' || ptr[top2][top4] == 'K' || ptr[top2][top4] == 'N' || ptr[top2][top4] == 'P' || ptr[top2][top4] == 'B')
					{
						return 5;
					}
				}
				else
				{
					if(ptr[top2][top4] == 'q' || ptr[top2][top4] == 'r' || ptr[top2][top4] == 'k' || ptr[top2][top4] == 'n' || ptr[top2][top4] == 'p' || ptr[top2][top4] == 'b')
					{
						return 5;
					}
				}
				return 4;
			}
			else
			{
				for(int i=top3+1;i < top4;i++)
				{
					if(ptr[top1][i] != ' ')
					{
						return 5;
					}
				}
				if(hod%2!=0)
				{
					if(ptr[top2][top4] == 'Q' || ptr[top2][top4] == 'R' || ptr[top2][top4] == 'K' || ptr[top2][top4] == 'N' || ptr[top2][top4] == 'P' || ptr[top2][top4] == 'B')
					{
						return 5;
					}
				}
				else
				{
					if(ptr[top2][top4] == 'q' || ptr[top2][top4] == 'r' || ptr[top2][top4] == 'k' || ptr[top2][top4] == 'n' || ptr[top2][top4] == 'p' || ptr[top2][top4] == 'b')
					{
						return 5;
					}
				}
				return 4;
			}
		}
	}
	}
	if(top1 > top2)
	{
		if(top3 > top4)
		{
			for(int i=top1,j=top3;i>=top2;i--,j--)
			{
					if( i == top2 && j == top4)
					{
						s++;
					}
					else
					{
						s=0;
					}
			}
		}
		else
		{
			for(int i=top1,j=top3;i>=top2;i--,j++)
			{
					if( i == top2 && j == top4)
					{
						s++;
					}
					else
					{
						s=0;
					}
			}
		}
	}
	else
	{
		if(top3 >top4)
		{
			for(int i=top1,j=top3;i<=top2;i++,j--)
			{
					if( i == top2 && j == top4)
					{
						s++;
					}
					else
					{
						s=0;
					}
			}
		}
		else
		{
			for(int i=top1,j=top3;i<=top2;i++,j++)
			{
					if( i == top2 && j == top4)
					{
						s++;
					}
					else
					{
						s=0;
					}
			}
		}
	}
	if( s == 0)
	{
		return 5;
	}
	if(ptr[top1][top3] == 'q' || ptr[top1][top3] == 'Q')
	{
		if(a[3] == '-')
		{
			if(top1 > top2)
			{
				if(top3 > top4)
				{
					for(int i=top1-1,j=top3-1;j>=top4;j--,i--)
					{
						if(ptr[i][j] != ' ')
						{
							return 5;
						}
					}
					return 4;
				}
				if(top4 > top3)
				{
					for(int i=top1-1,j=top3+1;j<=top4;i--,j++)
					{
						if(ptr[i][j] != ' ')
						{
							return 5;
						}
					}
					return 4;
				}
			}
			if(top2 > top1 )
			{
				if(top3 > top4)
				{
					for(int i=top1+1,j=top3-1;i<=top2;i++,j--)
					{
							if(ptr[i][j] != ' ')
						{ 
							return 5;
						}
					}
					return 4;
				}
				if(top4 > top3)
				{
						for(int i=top1+1,j=top3+1;j<=top4;i++,j++)
						{
							if(ptr[i][j] != ' ')
							{
								return 5;
							}
						}
						return 4;
				}
			}
		}
		if(a[3] == 'x')
		{
			if(hod%2!=0)
			{
				if(ptr[top2][top4] == 'Q' || ptr[top2][top4] == 'R' || ptr[top2][top4] == 'K' || ptr[top2][top4] == 'N' || ptr[top2][top4] == 'P' || ptr[top2][top4] == 'B')
				{
					return 5;
				}
			}
			else
			{
				if(ptr[top2][top4] == 'q' || ptr[top2][top4] == 'r' || ptr[top2][top4] == 'k' || ptr[top2][top4] == 'n' || ptr[top2][top4] == 'p' || ptr[top2][top4] == 'b')
				{
					return 5;
				}
			}
			if(ptr[top2][top4] == ' ')
			{
				return 5;
			}
			if(top1 > top2)
			{
				if(top3 > top4)
				{
					if(top3 - top4 == 1 || top4-top3 == 1)
					{
						return 4;
					}
					else
					{
					for(int i=top1+1,j=top3+1;j>top4;j--,i--)
					{
						if(ptr[i][j] != ' ')
						{
							return 5;
						}
					}
					return 4;
					}
				}
				if(top4 > top3)
				{
					if(top3 - top4 == 1 || top4-top3 == 1)
					{
						return 4;
					}
					else
					{
					for(int i=top1,j=top3;j<top4;i--,j++)
					{
						if(ptr[i][j] != ' ')
						{
							return 5;
						}
					}
					return 4;
					}
				}
			}
			if(top2 > top1 )
			{
				if(top3 > top4)
				{
					if(top3 - top4 == 1 || top4-top3 == 1)
					{
						return 4;
					}
					else
					{
					for(int i=top1,j=top3;i<top2;i++,j--)
					{
							if(ptr[i][j] != ' ')
						{
							return 5;
						}
					}
					return 4;
					}
				}
				if(top4 > top3)
				{
					if(top3 - top4 == 1 || top4-top3 == 1)
					{
						return 4;
					}
					else
					{
					for(int i=top1,j=top3;j<top4;i++,j++)
					{
						if(ptr[i][j] != ' ')
						{
							return 5;
						}
					}
					return 4;
					}
				}
			}
		}
	}
	else 
	{
		return 5;
	}
	return 5;
}

int bishop(char *ptr[],int n,int m,char a[],int p,int hod)
{
	int top1=a[2]-48,top2=a[5]-48,top3=a[1]-97,top4=a[4]-97,s=0;
	cout << endl ;
	top1=n-top1;top2=m-top2;
	if(hod%2 != 0)
	{
		if(ptr[top1][top3] == 'b')
		{
			return 5;
		}
	}
	else
	{
		if(ptr[top1][top3] == 'B')
		{
			return 5;
		}
	}
	if(top1==top2 || top3 == top4)
	{
		return 5;
	}
	if(top1 > top2)
	{
		if(top3 > top4)
		{
			for(int i=top1,j=top3;i>=top2;i--,j--)
			{
					if( i == top2 && j == top4)
					{
						s++;
					}
					else
					{
						s=0;
					}
			}
		}
		else
		{
			for(int i=top1,j=top3;i>=top2;i--,j++)
			{
					if( i == top2 && j == top4)
					{
						s++;
					}
					else
					{
						s=0;
					}
			}
		}
	}
	else
	{
		if(top3 >top4)
		{
			for(int i=top1,j=top3;i<=top2;i++,j--)
			{
					if( i == top2 && j == top4)
					{
						s++;
					}
					else
					{
						s=0;
					}
			}
		}
		else
		{
			for(int i=top1,j=top3;i<=top2;i++,j++)
			{
					if( i == top2 && j == top4)
					{
						s++;
					}
					else
					{
						s=0;
					}
			}
		}
	}
	if( s == 0)
	{
		return 5;
	}
	if(ptr[top1][top3] == 'b' || ptr[top1][top3] == 'B')
	{
		if(a[3] == '-')
		{
			if(top1 > top2)
			{
				if(top3 > top4)
				{
					for(int i=top1-1,j=top3-1;j>=top4;j--,i--)
					{
						if(ptr[i][j] != ' ')
						{
							return 5;
						}
					}
					return 4;
				}
				if(top4 > top3)
				{
					for(int i=top1-1,j=top3+1;j<=top4;i--,j++)
					{
						if(ptr[i][j] != ' ')
						{
							return 5;
						}
					}
					return 4;
				}
			}
			if(top2 > top1 )
			{
				if(top3 > top4)
				{
					for(int i=top1+1,j=top3-1;i<=top2;i++,j--)
					{
							if(ptr[i][j] != ' ')
						{
							return 5;
						}
					}
					return 4;
				}
				if(top4 > top3)
				{
						for(int i=top1+1,j=top3+1;j<=top4;i++,j++)
						{
							if(ptr[i][j] != ' ')
							{
								return 5;
							}
						}
						return 4;
				}
			}
		}
		if(a[3] == 'x')
		{
			if(hod%2!=0)
			{
				if(ptr[top2][top4] == 'Q' || ptr[top2][top4] == 'R' || ptr[top2][top4] == 'K' || ptr[top2][top4] == 'N' || ptr[top2][top4] == 'P' || ptr[top2][top4] == 'B')
				{
					return 5;
				}
			}
			else
			{
				if(ptr[top2][top4] == 'q' || ptr[top2][top4] == 'r' || ptr[top2][top4] == 'k' || ptr[top2][top4] == 'n' || ptr[top2][top4] == 'p' || ptr[top2][top4] == 'b')
				{
					return 5;
				}
			}
			if(ptr[top2][top4] == ' ')
			{
				return 5;
			}
			if(top1 > top2)
			{
				if(top3 > top4)
				{
					for(int i=top1+1,j=top3+1;j>top4;j--,i--)
					{
						if(ptr[i][j] != ' ')
						{
							return 5;
						}
					}
					return 4;
				}
				if(top4 > top3)
				{
					for(int i=top1-1,j=top3+1;j<top4;i--,j++)
					{
						if(ptr[i][j] != ' ')
						{
							return 5;
						}
					}
					return 4;
				}
			}
			if(top2 > top1 )
			{
				if(top3 > top4)
				{
					for(int i=top1,j=top3;i<top2;i++,j--)
					{
							if(ptr[i][j] != ' ')
						{
							return 5;
						}
					}
					return 4;
				}
				if(top4 > top3)
				{
					for(int i=top1,j=top3;j<top4;i++,j++)
					{
						if(ptr[i][j] != ' ')
						{
							return 5;
						}
					}
					return 4;
				}
			}
		}
	}
	else 
	{
		return 5;
	}
	return 5;
}

int rook(char *ptr[],int n,int m,char a[],int p,int hod)
{
	int top1=a[2]-48,top2=a[5]-48,top3=a[1]-97,top4=a[4]-97;
	cout << endl ;
	top1=n-top1;top2=m-top2;
	if(ptr[top1][top3] == 'r')
	{
		if(top1-top2 != 0 && top3-top4 != 0)
		{
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
							return 5;
						}
					}
					return 4;
				}
				else
				{
					for(int i = top4 ;i < top3; i++)
					{
						if(ptr[top1][i] != ' ')
						{
							return 5;
						}
					}
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
							return 5;
						}
					}
					return 4;
				}
				else
				{
					for(int i=top2;i<top1;i++)
					{
						if(ptr[i][top3] != ' ')
						{
							return 5;
						}
					}
					return 4;
				}
			}
		}
		if(a[3] == 'x')
		{
			if(ptr[top2][top4]==' ')
			{
				return 5;
			}
			if(top3-top4 == 0)
			{
				if(top2 > top1)
				{
					for(int i=top1+1;i < top2;i++)
					{
						if(ptr[i][top3] != ' ')
						{
							return 5;
						}
					}
					if(hod%2!=0)
					{
						if(ptr[top2][top4] == 'Q' || ptr[top2][top4] == 'R' || ptr[top2][top4] == 'K' || ptr[top2][top4] == 'N' || ptr[top2][top4] == 'P' || ptr[top2][top4] == 'B')
						{
							return 5;
						}
					}
					else
					{
						if(ptr[top2][top4] == 'q' || ptr[top2][top4] == 'r' || ptr[top2][top4] == 'k' || ptr[top2][top4] == 'n' || ptr[top2][top4] == 'p' || ptr[top2][top4] == 'b')
						{
							return 5;
						}
					}
					return 4;
				}
				else
				{
					for(int i=top2+1;i < top1;i++)
					{
						if(ptr[i][top3] != ' ')
						{
							return 5;
						}
					}
					if(hod%2!=0)
					{
						if(ptr[top2][top4] == 'Q' || ptr[top2][top4] == 'R' || ptr[top2][top4] == 'K' || ptr[top2][top4] == 'N' || ptr[top2][top4] == 'P' || ptr[top2][top4] == 'B')
						{
							return 5;
						}
					}
					else
					{
						if(ptr[top2][top4] == 'q' || ptr[top2][top4] == 'r' || ptr[top2][top4] == 'k' || ptr[top2][top4] == 'n' || ptr[top2][top4] == 'p' || ptr[top2][top4] == 'b')
						{
							return 5;
						}
					}
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
							return 5;
						}
					}
					if(hod%2!=0)
					{
						if(ptr[top2][top4] == 'Q' || ptr[top2][top4] == 'R' || ptr[top2][top4] == 'K' || ptr[top2][top4] == 'N' || ptr[top2][top4] == 'P' || ptr[top2][top4] == 'B')
						{
							return 5;
						}
					}
					else
					{
						if(ptr[top2][top4] == 'q' || ptr[top2][top4] == 'r' || ptr[top2][top4] == 'k' || ptr[top2][top4] == 'n' || ptr[top2][top4] == 'p' || ptr[top2][top4] == 'b')
						{
							return 5;
						}
					}
					return 4;
				}
				else
				{
					for(int i=top3+1;i < top4;i++)
					{
						if(ptr[top1][i] != ' ')
						{
							return 5;
						}
					}
					if(hod%2!=0)
					{
						if(ptr[top2][top4] == 'Q' || ptr[top2][top4] == 'R' || ptr[top2][top4] == 'K' || ptr[top2][top4] == 'N' || ptr[top2][top4] == 'P' || ptr[top2][top4] == 'B')
						{
							return 5;
						}
					}
					else
					{
						if(ptr[top2][top4] == 'q' || ptr[top2][top4] == 'r' || ptr[top2][top4] == 'k' || ptr[top2][top4] == 'n' || ptr[top2][top4] == 'p' || ptr[top2][top4] == 'b')
						{
							return 5;
						}
					}
					return 4;
				}
			}
		}
	}
	else
	{
		return 4;
	}
		return 0;
}

TEST_CASE( "Testing for Chess Pawn ", "[Chess]" ) 
{
	int hod=2;
	char board[8][8];
	char a[6];
	char *b[8];
	for(int i=0;i<8;i++)
	b[i]=board[i];
	BoardP(b,8,8);
	a[0] = 'p';
	a[1] = 'b';
	a[2] = '2';
	a[3] = '-';
	a[4] = 'b';
	a[5] = '4';
	cout << " Testing Pawn" << endl;
	cout << "Test 1   -   Okey" << endl;
	REQUIRE( pawn(b,8,8,a,6,hod) == 4);//hod na 2 kletki iz nachala
	a[1] = 'b';
	a[2] = '2';
	a[3] = '-';
	a[4] = 'b';
	a[5] = '3';
	cout << "Test 2   -   Okey" << endl;
	REQUIRE( pawn(b,8,8,a,6,hod) == 4);//hod na 1 kletku
	a[1] = 'b';
	a[2] = '2';
	a[3] = '-';
	a[4] = 'a';
	a[5] = '3';
	cout << "Test 3   -   Okey" << endl;
	REQUIRE( pawn(b,8,8,a,6,hod) == 5);//proverka hoda po diagonali
	a[1] = 'b';
	a[2] = '2';
	a[3] = '-';
	a[4] = 'a';
	a[5] = '3';
	cout << "Test 4   -   Okey" << endl;
	REQUIRE( pawn(b,8,8,a,6,hod) == 5);//proverka hoda po diagonali
	a[1] = 'b';
	a[2] = '2';
	a[3] = '-';
	a[4] = 'b';
	a[5] = '5';
	cout << "Test 5   -   Okey" << endl;
	REQUIRE( pawn(b,8,8,a,6,hod) == 5);//proverka hoda na 3 kletki
	a[1] = 'a';
	a[2] = '2';
	a[3] = '-';
	a[4] = 'a';
	a[5] = '4';
	cout << "Test 6   -   Okey" << endl;
	REQUIRE( pawn(b,8,8,a,6,hod) == 5);//proverka hoda esli vperedi figura
	a[1] = 'a';
	a[2] = '2';
	a[3] = '-';
	a[4] = 'a';
	a[5] = '1';
	cout << "Test 7   -   Okey" << endl;
	REQUIRE( pawn(b,8,8,a,6,hod) == 5);//proverka hoda nazad
	a[1] = 'c';
	a[2] = '2';
	a[3] = 'x';
	a[4] = 'd';
	a[5] = '3';
	cout << "Test 8   -   Okey" << endl;
	REQUIRE( pawn(b,8,8,a,6,hod) == 4);//proverka s'edaniya figuri
	a[1] = 'e';
	a[2] = '2';
	a[3] = 'x';
	a[4] = 'd';
	a[5] = '3';
	cout << "Test 9   -   Okey" << endl;
	REQUIRE( pawn(b,8,8,a,6,hod) == 4);//proverka s'edaniya figuri
	a[1] = 'd';
	a[2] = '2';
	a[3] = 'x';
	a[4] = 'd';
	a[5] = '3';
	cout << "Test 10  -   Okey" << endl;
	REQUIRE( pawn(b,8,8,a,6,hod) == 5);//proverka s'edaniya figuri
}

TEST_CASE( "Testing for Chess Knight ", "[Chess]" ) 
{
	int hod=2;
	char board[8][8];
	char a[6];
	char *b[8];
	for(int i=0;i<8;i++)
	b[i]=board[i];
	BoardN(b,8,8);
	a[0] = 'n';
	a[1] = 'b';
	a[2] = '1';
	a[3] = '-';
	a[4] = 'c';
	a[5] = '3';
	cout << "Testing kNight -" << endl;
	cout << "Test 1   -   Okey" << endl;
	REQUIRE( kNight(b,8,8,a,6,hod) == 4);//proverka hoda bukvoi Ã
	a[1] = 'b';
	a[2] = '1';
	a[3] = '-';
	a[4] = 'a';
	a[5] = '3';
	cout << "Test 2   -   Okey" << endl;
	REQUIRE( kNight(b,8,8,a,6,hod) == 4);//proverka hoda bukvoi Ã v levo
	a[1] = 'e';
	a[2] = '1';
	a[3] = '-';
	a[4] = 'c';
	a[5] = '2';
	cout << "Test 3   -   Okey" << endl;
	REQUIRE( kNight(b,8,8,a,6,hod) == 4);//proverka hoda bukvoi Ã v levo gorizontalno vverh
	a[1] = 'e';
	a[2] = '1';
	a[3] = '-';
	a[4] = 'g';
	a[5] = '2';
	cout << "Test 4   -   Okey" << endl;
	REQUIRE( kNight(b,8,8,a,6,hod) == 4);//proverka hoda bukvoi Ã v pravo gorizontalno vverh
	a[1] = 'e';
	a[2] = '4';
	a[3] = '-';
	a[4] = 'g';
	a[5] = '3';
	cout << "Test 5   -   Okey" << endl;
	REQUIRE( kNight(b,8,8,a,6,hod) == 4);//proverka hoda bukvoi Ã v pravo gorizontalno vniz
	a[1] = 'e';
	a[2] = '4';
	a[3] = '-';
	a[4] = 'c';
	a[5] = '3';
	cout << "Test 6   -   Okey" << endl;
	REQUIRE( kNight(b,8,8,a,6,hod) == 4);//proverka hoda bukvoi Ã v pravo gorizontalno vniz
	a[1] = 'e';
	a[2] = '4';
	a[3] = '-';
	a[4] = 'g';
	a[5] = '6';
	cout << "Test 7   -   Okey" << endl;
	REQUIRE( kNight(b,8,8,a,6,hod) == 5);//lozhniy hod po diagonaly
	a[1] = 'e';
	a[2] = '4';
	a[3] = '-';
	a[4] = 'h';
	a[5] = '4';
	cout << "Test 8   -   Okey" << endl;
	REQUIRE( kNight(b,8,8,a,6,hod) == 5);//lozhniy hod po gorizontaly
	a[1] = 'e';
	a[2] = '4';
	a[3] = '-';
	a[4] = 'e';
	a[5] = '7';
	cout << "Test 9   -   Okey" << endl;
	REQUIRE( kNight(b,8,8,a,6,hod) == 5);//lozhniy hod po vetikaly
}

TEST_CASE( "Testing for Chess King ", "[Chess]" )
{
	int hod=2;
	char board[8][8];
	char a[6];
	char *b[8];
	for(int i=0;i<8;i++)
	b[i]=board[i];
	BoardK(b,8,8);
	a[0] = 'k';
	a[1] = 'c';
	a[2] = '4';
	a[3] = '-';
	a[4] = 'c';
	a[5] = '3';
	cout << "Testing king -" << endl;
	cout << "Test 1   -   Okey" << endl;
	REQUIRE( king(b,8,8,a,6,hod) == 4);//proverka hoda vniz
	a[1] = 'c';
	a[2] = '4';
	a[3] = '-';
	a[4] = 'c';
	a[5] = '5';
	cout << "Test 2   -   Okey" << endl;
	REQUIRE( king(b,8,8,a,6,hod) == 4);//proverka hoda vverh
	a[1] = 'c';
	a[2] = '4';
	a[3] = '-';
	a[4] = 'c';
	a[5] = '3';
	cout << "Test 3   -   Okey" << endl;
	REQUIRE( king(b,8,8,a,6,hod) == 4);//proverka hoda po vertikaly
	a[1] = 'c';
	a[2] = '4';
	a[3] = '-';
	a[4] = 'd';
	a[5] = '3';
	cout << "Test 4   -   Okey" << endl;
	REQUIRE( king(b,8,8,a,6,hod) == 4);//proverka hoda po diagonaly
	a[1] = 'c';
	a[2] = '4';
	a[3] = '-';
	a[4] = 'c';
	a[5] = '2';
	cout << "Test 5   -   Okey" << endl;
	REQUIRE( king(b,8,8,a,6,hod) == 5);//proverka lozhnogo hoda
	a[1] = 'c';
	a[2] = '4';
	a[3] = 'x';
	a[4] = 'd';
	a[5] = '4';
	cout << "Test 6   -   Okey" << endl;
	REQUIRE( king(b,8,8,a,6,hod) == 4);//proverka s'edaniya
	
}

TEST_CASE( "Testing for Chess Queen ", "[Chess]" )
{
	int hod=2;
	char board[8][8];
	char a[6];
	char *b[8];
	for(int i=0;i<8;i++)
	b[i]=board[i];
	cout << "Testing Queen -" << endl;
	cout << "Test 1   -   Okey" << endl << endl;
	BoardQ(b,8,8);
	a[0] = 'q';
	a[1] = 'c';
	a[2] = '4';
	a[3] = '-';
	a[4] = 'c';
	a[5] = '1';
	cout << "Test 2   -   Okey" << endl;
	REQUIRE( queen(b,8,8,a,6,hod) == 4);//proverka hoda po vetikali
	a[1] = 'c';
	a[2] = '4';
	a[3] = '-';
	a[4] = 'a';
	a[5] = '4';
	cout << "Test 3   -   Okey" << endl;
	REQUIRE( queen(b,8,8,a,6,hod) == 4);//proverka hoda po gorizontali
	a[1] = 'c';
	a[2] = '4';
	a[3] = '-';
	a[4] = 'g';
	a[5] = '4';
	cout << "Test 4   -   Okey" << endl;
	REQUIRE( queen(b,8,8,a,6,hod) == 5);//proverka hoda cherez figuru
	a[1] = 'c';
	a[2] = '4';
	a[3] = '-';
	a[4] = 'f';
	a[5] = '7';
	cout << "Test 5   -   Okey" << endl;
	REQUIRE( queen(b,8,8,a,6,hod) == 4);//proverka hoda po diagonali
	a[1] = 'c';
	a[2] = '4';
	a[3] = '-';
	a[4] = 'd';
	a[5] = '1';
	cout << "Test 6   -   Okey" << endl;
	REQUIRE( queen(b,8,8,a,6,hod) == 5);//proverka lozhnogo hoda
	a[1] = 'c';
	a[2] = '4';
	a[3] = 'x';
	a[4] = 'd';
	a[5] = '4';
	cout << "Test 7   -   Okey" << endl;
	REQUIRE( queen(b,8,8,a,6,hod) == 4);//proverka s'edaniya
}

TEST_CASE( "Testing for Chess Bishop ", "[Chess]" )
{
	int hod=2;
	char board[8][8];
	char a[6];
	char *b[8];
	for(int i=0;i<8;i++)
	b[i]=board[i];
	BoardB(b,8,8);
	a[0] = 'b';
	a[1] = 'c';
	a[2] = '4';
	a[3] = '-';
	a[4] = 'f';
	a[5] = '7';
	cout << "Testing Bishop" << endl;
	cout << "Test 1   -   Okey" << endl;
	REQUIRE( bishop(b,8,8,a,6,hod) == 5);//proverka hoda  cherez figuru
	a[1] = 'c';
	a[2] = '4';
	a[3] = '-';
	a[4] = 'a';
	a[5] = '6';
	cout << "Test 2   -   Okey" << endl;
	REQUIRE( bishop(b,8,8,a,6,hod) == 4);//proverka hoda po diagonali
	a[1] = 'c';
	a[2] = '4';
	a[3] = '-';
	a[4] = 'c';
	a[5] = '1';
	cout << "Test 3   -   Okey" << endl;
	REQUIRE( bishop(b,8,8,a,6,hod) == 5);//proverka hoda po vertikali
	a[1] = 'c';
	a[2] = '4';
	a[3] = '-';
	a[4] = 'a';
	a[5] = '4';
	cout << "Test 4   -   Okey" << endl;
	REQUIRE( bishop(b,8,8,a,6,hod) == 5);//proverka hoda po gorizontali
	a[1] = 'c';
	a[2] = '4';
	a[3] = 'x';
	a[4] = 'e';
	a[5] = '6';
	cout << "Test 5   -   Okey" << endl;
	REQUIRE( bishop(b,8,8,a,6,hod) == 4);//proverka s'edaniya
}

TEST_CASE( "Testing for Chess Rook ", "[Chess]" )
{
	int hod=2;
	char board[8][8];
	char a[6];
	char *b[8];
	for(int i=0;i<8;i++)
	b[i]=board[i];
	BoardR(b,8,8);
	a[0] = 'r';
	a[1] = 'c';
	a[2] = '4';
	a[3] = '-';
	a[4] = 'c';
	a[5] = '1';
	cout << "Testing Rook" << endl;
	cout << "Test 1   -   Okey" << endl;
	REQUIRE( rook(b,8,8,a,6,hod) == 4);//proverka hoda po vertikali
	a[1] = 'c';
	a[2] = '4';
	a[3] = '-';
	a[4] = 'a';
	a[5] = '4';
	cout << "Test 2   -   Okey" << endl;
	REQUIRE( rook(b,8,8,a,6,hod) == 4);//proverka hoda po gorizontali
	a[1] = 'c';
	a[2] = '4';
	a[3] = '-';
	a[4] = 'g';
	a[5] = '4';
	cout << "Test 3   -   Okey" << endl;
	REQUIRE( rook(b,8,8,a,6,hod) == 5);//proverka hoda cherez figuru
	a[1] = 'c';
	a[2] = '4';
	a[3] = '-';
	a[4] = 'f';
	a[5] = '7';
	cout << "Test 4   -   Okey" << endl;
	REQUIRE( rook(b,8,8,a,6,hod) == 5);//proverka hoda po diagonali
	a[1] = 'c';
	a[2] = '4';
	a[3] = 'x';
	a[4] = 'e';
	a[5] = '4';
	cout << "Test 5   -   Okey" << endl;
	REQUIRE( rook(b,8,8,a,6,hod) == 4);//proverka s'edaniya
}

