#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("SHU_RU.in","r",stdin);
    char n[100],f[10000],F[10000],DM[26];
    bool ts=false;
    long i;
    cin>>n;  //密文
    char a[strlen(n)+1];
    for (int i = 0; i < strlen(n); i++)
    {
        a[i]=n[i];
    }
    i=0;
    char b[strlen(a)];
    //strcpy(a,n);
    cin>>b;//原文和需要翻译 _______________________
    cin>>f;

    
    for (int i = 0; i < 26; i++)
    {
        DM[i]=' ';
    }
    for (int i = 0; i < strlen(n); i++)
    {
        if(DM[a[i]-'A']==' ')
        {
        DM[a[i]-'A']=b[i];    //密文对应原文首次赋值
        }
        else
        {
            if(DM[a[i]-'A']!=b[i])
            {
                ts=true;  //密文对应原文重复后，不予原来原文对应
                break;
            }
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if(DM[i]==' ')
        {
            ts=true;//原文有缺失，
            break;
        }
        for (int ti = i; ti < 26; ti++)
        {
            if(DM[ti]==DM[i] && ti!=i)
            {
                ts=true;   
                break;
            }
        }
        if(ts==true)
        {
            break;
        }
    }
    if(ts==true)
    {
        cout<<"Failed";
    }
    else
    {
        for ( i = 0; i < strlen(f); i++)
        {
            F[i]=DM[f[i]-'A'];
        }
        for(i=0;i<strlen(f);i++)
        cout<<F[i];
    }
    return 0;
}
