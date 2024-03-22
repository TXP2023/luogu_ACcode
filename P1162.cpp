#include<bits/stdc++.h>
#define ll long long

using namespace std;

vector< vector< char > > a;
ll lx[4]{-1,0,0,+1},ly[4]{0,-1,+1,0};
ll n;

void f(ll x,ll y)
{
    for (ll i = 0; i < 4; i++)
    {
        if((x+lx[i])>=0 && (x+lx[i])<n && (y+ly[i])<n && (y+ly[i])>=0)
        {
            if(a[x+lx[i]][y+ly[i]]=='0')
            {
                a[x+lx[i]][y+ly[i]]='3';
                f(x+lx[i],y+ly[i]);
            }
        }
    }
}

int main()
{
    //freopen("D:\\code\\C++\\SHU_RU.in", "r",stdin);
    scanf("%lld", &n);
    a.resize(n);
    for (ll i = 0; i < n; i++)
    {
        a[i].resize(n);
        for (ll j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
    }
    /**/
    for (ll i = 0 ; i < n ; i++)
    {
        if(a[0][i]=='0')
        {
            f(0,i);
        }
    }
    for (ll i = 0 ; i < n ; i++)
    {
        if(a[n-1][i]=='0')
        {
            f(n-1,i);
        }
    }
    for (ll i = 0 ; i < n ; i++)
    {
        if(a[i][0]=='0')
        {
            f(i,0);
        }
    }
    for (ll i = 0 ; i < n ; i++)
    {
        if(a[i][n-1] == '0')
        {
            f(i,n-1);
        }
    }
    //cout<<"\n\n";
    for (ll i = 0 ; i < n; i++)
    {
        for (ll j = 0 ; j < n; j++)
        {
            switch (a[i][j])
            {
            case '3':
                printf("%s","0 ");
                break;
            case '1':
                printf("%s","1 ");
                break;
            case '0':
                printf("%s","2 ");
                break;
            }
        }
        printf("%c",'\n');
    }
    return 0;
}

