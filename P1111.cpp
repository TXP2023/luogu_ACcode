#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll N,M,timec=0;

struct node
{
    ll A,B,time_c;
};


vector < ll > vch;
vector < node > v;
ll stl_find(ll V)
{
    if(vch[V]==V)
    {
        return V;
    }
    else
    {
        return vch[V]=stl_find(vch[V]);
    }
}

bool cmp(node A,node B)
{
    return A.time_c<B.time_c;
}

void stl_rode(ll d)
{
    ll m=stl_find(0);
    for(ll i=1;i<vch.size();i++)
    {   
        if(stl_find(i)!=m)
        {
            return;
        }
    }
    printf("%lld\n",d);
    exit(0);
}

int main()
{
    //freopen("D:\\code\\C++\\SHU_RU.in", "r", stdin);
    scanf("%lld%lld",&N,&M);
    for (int i = 0; i < N; i++)
    {
        vch.push_back(i);
    }
    v.resize(M);
    for (int i = 0; i < M; i++)
    {
        ll A,B,t;
        scanf("%lld%lld%lld",&v[i].A,&v[i].B,&v[i].time_c);

        //vch[stl_find(A-1)]=stl_find(B-1);
        //stl_rode(timec);
    }
    sort(v.begin(),v.end(),cmp);
    for (int i = 0; i < M; i++)
    {
        vch[stl_find(v[i].A-1)]=stl_find(v[i].B-1);
        timec=timec+v[i].time_c;
        stl_rode(v[i].time_c);
    }
    printf("-1\n");
    return 0;
}
