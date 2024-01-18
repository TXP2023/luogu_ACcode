#include<bits/stdc++.h>
#define ll long long 
using namespace std;
vector<int> vch;

void f(ll n)
{
    for (int i = n-1; i >= 0; i--)
    {
        vch.push_back(i+1);
    }
    return;
}
void k(){
    if(vch.size()<1)
    {
        return;
    }
    else
    {
        int hou=vch[vch.size()-2];
        printf("%lld%c",vch[vch.size()-1],' ');
        vch.resize(vch.size()-1);
        for (ll i = vch.size()-1; i > 0; i--)
        {
            vch[i]=vch[i-1];
        }
        vch[0]=hou;
        k();
    }
}
int main()
{
    ll n;
    scanf("%lld",&n);
    f(n);
    k();
    return 0;
}
