#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int j=0,z[9],sx;
    char a,b,c,s[9],x;
    cin>>s[0]>>a>>s[1]>>s[2]>>s[3]>>b>>s[4]>>s[5]>>s[6]>>s[7]>>s[8]>>c>>x;

    for (int i = 0; i < 9; i++)
    {
        z[i]=s[i]-'0';
    }
    //cout<<s<<endl;
    //cout<<z;
    sx=x-'0';
    for (int i = 1; i <=9; i++)
    {
        j=j+i*z[i-1];
    }
    if ((j%11==10 && x=='X') || (j%11==sx))
    {
        cout<<"Right";
    }
    else
    {
        if(j%11==10)
        {
            cout<<s[0]<<'-'<<s[1]<<s[2]<<s[3]<<'-'<<s[4]<<s[5]<<s[6]<<s[7]<<s[8]<<'-'<<'X';
        }
        else
        {
        cout<<s[0]<<'-'<<s[1]<<s[2]<<s[3]<<'-'<<s[4]<<s[5]<<s[6]<<s[7]<<s[8]<<'-'<<j%11;
        }
    }
    return 0;
}
