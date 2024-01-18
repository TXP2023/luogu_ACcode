#include<bits/stdc++.h>
#define sht int64_t
using namespace std;
sht n,m,pc=0;
vector<sht> v;
void memkey()
{
    for(int i=0;i<n;i++)
    {
        v[i] =i+1;
    }
    return ;
}
void k(sht l)
{
    if(v.size()>0)
    {
        sht sc=(l+m-1)%v.size();
        cout<<v[sc]<<" ";
        for (int i = sc; i < v.size()-1; i++)
        {
            v[i]=v[i+1];
        }
        v.resize(v.size()-1);
        k(sc);
        return;
    }
    else
    {
        return;
    }
}
int main()
{
    scanf("%d%d",&n,&m);
    v.resize(n);
    memkey();
    k(0);
    return 0;
}
