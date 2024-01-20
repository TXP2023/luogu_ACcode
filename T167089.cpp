#include<bits/stdc++.h>

#define ll long long

using namespace std;

vector<bool> b5,b10;
vector<ll> v;
vector< vector<ll> > V;
ll n,t10,t5,t,l=0;

void mempent(ll k)
{
    if(k==2*n+1)
    {
        l++;
        V.resize(V.size()+1);
        V[V.size()-1].resize(2*n);
        for (int i = 0; i < 2*n; i++)
        {
            V[l-1][i]=v[i];
        }
    }
    else
    {
        bool b=false;
        if(t5>0)
        {
            v[k-1]=0;
            t5--;
            t=t+5;
            b=true;
            mempent(k+1);
            t5++;
            t=t-5;
        }
        if(t10>0)
        {
            if(t>=5)
            {
                v[k-1]=1;
                t10--;
                t=t-5;
                b=true;
                mempent(k+1);
                t10++;
                t=t+5;
            }
        }
        if(b==false)
        {
            switch (v[k-2])
            {
            case 0:
                t5++;
                return;
                break;
            
            default:
                t10++;
                return;
                break;
            }
        }
    }
}


int main()
{
    scanf("%lld",&n);
    b5.resize(n,false);
    b10.resize(n,0);
    v.resize(2*n,0);
    t10=n;
    t5=n;
    mempent(1);
    printf("%lld%c",l,'\n');
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < 2*n; j++)
        {
            printf("%lld%c",V[i][j],' ');
        }
        printf("%c",'\n');
    }
    return 0;
}
