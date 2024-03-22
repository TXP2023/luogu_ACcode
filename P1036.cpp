#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<bool> b;
vector<int> c,d;
int m=3;
int64_t l=0;
ll nm;

bool fot(ll n){
 bool yes=true;
 for(int i=2;i<n;i++){
  if(n%i==0){
   yes=false;
   break;
  }
 }
 return yes;
}
void f(int n,ll h,ll str)
{

    if(n==m)
    {
        if(fot(h)== true) l++; return;
    }
    else
    {
        for (int i = str; i < nm; i++)
        {
            f(n+1,h+d[i],i+1);
        }
    }
    return;
}
int main()
{
    cin>>nm>>m;
    c.resize(m);
    b.resize(nm);
    d.resize(nm);
    for (int i = 0; i < nm; i++)
    {
        cin>>d[i];
    }
    
    f(0,0,0);
    cout<<l;
    //end = clock();
    //cout<<"Number of programs:"<<l<<endl;
    //cout<<"time = "<<double(end-start)/CLOCKS_PER_SEC<<"s"<<endl;
    return 0;
}
