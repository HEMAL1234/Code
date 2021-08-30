#include<bits/stdc++.h>
using namespace std;
int main()
{
	int sum,k,s1,ans;
	char ch,chh;
	string s;
	cin>>s;
	k=0;sum=0;
	for(auto it=s.begin();it!=s.end();it++)
	{
		if(k==0)
		{
			ch=*it;k=1;
		}
		else
		{
			chh=*it;
			if(chh==ch&&ch=='v')
			{
				sum++;
			}
			ch=chh;
		}
	}
	k=0;
	s1=0;ans=0;
	for(auto it=s.begin();it!=s.end();it++)
	{
		if(k==0)
		{
			ch=*it;k=1;
		}
		else
		{
			chh=*it;
			if(chh==ch&&ch=='v')
			{
				s1++;
			}
			ch=chh;
		}
		if(*it=='o')
		{
			ans+=(sum-s1)*s1;
		}
	}
	cout<<ans<<endl;
	return 0;
}
