#include <bits/stdc++.h>
#define ll long long

using namespace std;

map<ll,ll> m,w;


ll findm(ll n)
{
    if(m[n]==n)
    {
        return n;
    }
    else
    {
        return m[n]=findm(m[n]);
    }
}

ll findw(ll n)
{
    if(w[n]==n)
    {
        return n;
    }
    else
    {
        return w[n]=findw(w[n]);
    }
}

int main()
{
    //freopen("D:\\code\\C++\\SHU_RU.in", "r", stdin);
    ll N,M,P,Q;
    cin>>N>>M>>P>>Q;
    for(ll i=1;i<=N;i++)
    {
        m[i]=i;
    }
    for (ll i = -1; i >= -M ; i--)
    {
        w[i]=i;
    }
    for (ll i = 0; i < P; i++)
    {
        ll a,b;
        cin>>a>>b;
        m[findm(a)]=findm(b);
    }
    for (ll i = 0; i < Q; i++)
    {
        ll a,b;
        cin>>a>>b;
        w[findw(a)]=findw(b);
    }
    ll wans=0,mans=0;
    for (ll i = 1; i <= N; i++)
    {
        if(findm(m[i])==findm(m[1]))
        {
            mans++;
        }
    }
    for (ll i = -1; i >= -M; i--)
    {
        if(findw(w[i])==findw(w[-1]))
        {
            wans++;
        }
    }
    if(wans>mans)
    {
        cout<<mans;
    }
    else
    {
        cout<<wans;
    }
    return 0;
}
