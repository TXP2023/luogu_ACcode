//数独
#include<bits/stdc++.h>
#define ll long long
#define st short

using namespace std;

short v[9][9];
bool vb[9][9][9],vc[9][9][9],vd[9][9][9];

void memstr(st math,st x,st y,bool b)
{
    for (int i = 0; i < 9; i++)
    {
        vc[x][i][math] = b;
        vb[i][y][math] = b;
    }
    for (int i = x-x%3; i < int(x/3+1)*3; i++)
    {
        for (int j = y-y%3; j < int(y/3+1)*3; j++)
        {
            vd[i][j][math] = b;
        }
    }
    return;
}

void memstl(st math,st x,st y,bool b)
{
    for (int i = 0; i < 9; i++)
    {
        vc[x][i][math] = b;
        vb[i][y][math] = b;
    }
    for (int i = x-x%3; i < int(x/3+1)*3; i++)
    {
        for (int j = y-y%3; j < int(y/3+1)*3; j++)
        {
            vd[i][j][math] = b;
        }
    }
    return;
}

bool memstp(st x,st y,st math)
{
    if(vc[x][y][math]==false && vb[x][y][math]==false && vd[x][y][math]==false)
    {
        return false;
    }
    return true;
}

void DFS(st x,st y)
{
       if(x == 9)
       {
            //printf("\n\n");
            for (int i = 0; i < 9; i++)
            {
                for (int j = 0; j < 9; j++)
                {
                    printf("%hd%c",v[i][j],' ');
                }
                printf("\n");
            }
            exit(0);
            return;
       }
       else
       {
            if(y == 9)
            {
                DFS(x+1,0);
            }
            else
            {
                if(v[x][y] == 0)
                {
                    for (int i = 0; i < 9; i++)
                    {
                        if(memstp(x,y,i)==false)
                        {
                            memstr(i,x,y,true);
                            v[x][y] = i+1;
                            DFS(x,y+1);
                            memstr(i,x,y,false);//ganrao
                            v[x][y] = 0;
                        }
                    }
                    return;
                }
                else
                {
                    DFS(x,y+1);
                }
            }
       }
}

int main()
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> v[i][j];
        }
    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if(v[i][j]!=0)
            {
                memstl(v[i][j]-1,i,j,true);
            }
        }
        
    }
    
    DFS(0,0);
}
