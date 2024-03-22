#include<iostream>
using namespace std;
int main()
{
    long long i,n,ti,j;
    cin>>n;
    long long z[n];
    bool h;
    for ( i = 0; i < n; i++)
    {
        cin>>z[i];
    }
    long long v=0;
    for ( i = 0; i < n; i++)   //#############################
    {
        h=false;
        for ( ti = 0; ti < n-i-1; ti++)
        {
            if(z[ti]>z[ti+1])
            {
                j=z[ti];
                z[ti]=z[ti+1];
                z[ti+1]=j;
                h=true;
                v++;
            }
        }
        if (h==false)
        {
            break;
        }
        
    }
    cout<<v;
    return 0;
}
