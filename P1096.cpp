#include<bits/stdc++.h>
using namespace std;
void f(int a[],int C[])
{   
    for (int i = 0; i < 65; i++)
    {
        C[i]=0;
    }
    
    for (int i = 0; i < 65; i++)
    {
        C[i]=a[i]*2;
    }
    C[0]=C[0]+2;
    for (int i = 0; i < 65; i++)
    {
        C[i+1]=C[i]/10+C[i+1];
        C[i]=C[i]%10;
    }
    
}

struct math
{
    int a[65];
};


int main()
{
    int n;
    cin>>n;
    math math[n];
    for(int i=0;i<n;i++)
    {
        for (int j = 0; j < 65; j++)
        {
            math[i].a[j]=0;
        }
    }
    //memset(math->a[i],0,sizeof(math->a[i]));
    math[0].a[0]=2;
    math[1].a[0]=6;
    for (int i = 2; i < n; i++)
    {
        f(math[i-1].a,math[i].a);
    }
    int i=0;
    while (math[n-1].a[64-i]==0)
    {
        i++;
    }
    for ( int k =64-i ; k>=0; k--)
    {
        cout<<math[n-1].a[k];
    }
    return 0;
}
