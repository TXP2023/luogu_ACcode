#include<bits/stdc++.h>
#define ll long long
using namespace std;
struct stu{
    char name[100];
    ll time=0,in;
};
ll year,moth,day;
/*
bool  cmp(stu x,stu y)
{
	return x.time<y.time;//从大到小排>，若要从小到大排则<
}
*/
bool cmp(stu a,stu b)
{
	if(a.time<b.time)
	{
		return true;
	}
	else
		if(a.time==b.time)
		{
			if(a.in>b.in)
			{
				return true ;
			}
		}
	return false ;
}
int main()
{
    //freopen("D:\\code\\C++\\SHU_RU.in", "r", stdin);
    ll n;
    cin>>n;
    stu stu[n];
    for (int i = 0; i < n; i++)
    {
        //cin>>stu[i].name;
        //scanf("%lld%lld%lld",&stu[i].year,&stu[i].moth,&stu[i].day);
        scanf("%s%lld%lld%lld",&stu[i].name,&year,&moth,&day);
        stu[i].time=year*365+moth*30+day;
        stu[i].in=i;
    }
    sort(stu,stu+n,cmp);
    for (int i = 0; i< n ; i++)
    {
        cout<<stu[i].name<<endl;
    }
    return 0;
}
