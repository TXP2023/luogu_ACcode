#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int64_t> a;
    int64_t r=1,fraction=0;
    while (r!=0)
    {
        cin>>r;
        if(r!=0)
        {
            a.push_back(r);
            fraction=fraction+a.size()*r;
        }
    }
    cout<<fraction<<endl;
    for (int i = a.size()-1; i >=0; i--)
    {
        cout<<a[i]<<' ';
        
    }
    return 0;
}
