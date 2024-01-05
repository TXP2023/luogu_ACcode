#include<bits/stdc++.h>
using namespace std;
int sx[4]{-1,0,0,+1},sy[4]{0,-1,+1,0};
vector<vector<char>> a;
int l;

void txk(vector<vector<char>> at,char m)
{
	int XX= a.size(),YY=a[0].size();
	for (int i = 0; i < XX; i++)
	{
		for (int j = 0; j<YY; j++)
		{
			a[i][j]=m;
		}
	}
	return;
}
void txf(int X,int Y)
{
	if(a[X][Y]=='0') return;//**********
	a[X][Y]='0';
	for (int i = 0; i < 4; i++)
	{
		txf(X+sx[i],Y+sy[i]);
	}
	return;
}
int x,y;
int main()
{
	scanf("%d%d",&x,&y);
	a.resize(x+2);
	for (int i = 0; i < x+2; i++)
	{
		a[i].resize(y+2);
	}
	int l=0;
	txk(a,'0');
	for (int i = 1; i < x+1; i++)
	{
		for (int j = 1; j < y+1; j++)
		{
			cin>>a[i][j];
		}
	}
	for (int i = 1; i < x+1; i++)
	{
		for (int j = 1; j < y+1; j++)
		{
			if(a[i][j]!='0')
			{
				l++;
				txf(i,j);
			}
		}
	}
	printf("%d",l);
	return 0;
}
