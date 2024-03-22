#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("SHU_RU.in","r",stdin);
    int n,l,j;
    bool b=false;
    cin>>n;
    l=n;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(a[i]==a[j])
            {
                a[j]=0;
                l--;
            }
        }   
    }
    for (int i = 0; i < n; i++)   //#############################
    {
        for (int ti = 0; ti < n-i-1; ti++)
        {
            if(a[ti]>a[ti+1])
            {
                j=a[ti];
                a[ti]=a[ti+1];
                a[ti+1]=j;
            }
        }
    }
    l=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]>0)
        {
            l++;
        }
    }
    cout<<l<<endl;
    for (int i = 0; i < n; i++)
    {
        if(a[i]>0)
        {
            cout<<a[i]<<' ';
        }
    }
    return 0;
}
