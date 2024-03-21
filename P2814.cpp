#include<bits/stdc++.h>
#define ll long long

using namespace std;

map<string,string> vch;
vector<string> v;

string find(string str)
{
    if(vch[str]==str)
    {
        return str;
    }
    else
    {
        return vch[str]=find(vch[str]);
    }
}

bool f(string s)
{
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i]==s)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    //freopen("D:\\SHU_RU.in", "r", stdin);
    string in,father;
    char IN;
    while(cin >> IN)
    {
        cin >> in;
        //vch[in] = in;
        switch (IN)
        {
        case '#':
            if(f(in) == true)
            {
                father = find(in);
            }
            else
            {
                vch[in] = in;
                v.push_back(in);
                father = in;
            }
            
            break;
        case '+':
            vch[in] = find(father);
            if(f(in) == false)
                v.push_back(in);
            break;
        case '?':
            cout<<in<<' '<<find(in)<<'\n';
            break;
        case '$':
            exit(0);
            break;
        }
    }
    return 0;
}
