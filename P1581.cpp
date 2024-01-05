#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    char r[20],r1[20],r2[20];
   int sj[6];
    sj[0]=2;
    sj[1]=3;
    sj[2]=5;
    sj[3]=7;
    sj[4]=11;
    sj[5]=13;
    int n,n1,n2;
    int i,j=0;
    int a[7],b[7],a1[7],b1[7],ans[7],ans1[7];
    for(i=0;i<7;i++)
   { a[i]=0;a1[i]=0;b[i]=0;b1[i]=0;ans1[i]=0;ans[i]=0;}
    cin>>r;
    n=strlen(r);
    int p=0;
    for(i=0;i<n;i++)
    {
		if(r[i]!='+')
		{r1[i]=r[i];p++;}
		else
		{break;	}	
	}
     for(i=p+1;i<n;i++)
	    {
			r2[i-p-1]=r[i];
			
		}
	//	cout<<r1<<endl;
	//	cout<<r2<<endl;
n1=p;
n2=n-p-1;
for(i=0;i<n1;i++)
  {
    if(r1[i]!=',')
    {
		a[j]=r1[i]-'0'+a[j]*10;}
	    else
	{	j++;}//TODO
	}
int len1=0,len2=0;
  len1=j+1;
   j=0;
 for(i=0;i<n2;i++)
   {
     if(r2[i]!=',')
    {b[j]=r2[i]-'0'+b[j]*10;}
 	     else
 	{j++;}//TODO
 	}
   len2=j+1;  
    for(i=0;i<len1;i++)
	{
	a1[i]=a[len1-i-1]	;//TODO
	}
    for(i=0;i<len2;i++)
    {
		b1[i]=b[len2-i-1]	;//TODO
	}
	if(len2>len1)	
	len1=len2;
	for(i=0;i<len1+1;i++)
    {	ans1[i+1]=(a1[i]+b1[i]+ans1[i])/sj[i];
	ans1[i]=(a1[i]+b1[i]+ans1[i])%sj[i];
	}
	bool out=false;
	for(i=6;i>=0;i--)
    {
		if(ans1[i]>0)
		out=true;
		if(out&&i>0)
		cout<<ans1[i]<<",";
		else
		if(out&&i==0)
		cout<<ans1[0];
	}
}
