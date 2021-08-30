#include<bits/stdc++.h>

using namespace std;

int main()
{
    int result;
	char str[202];
	cin>>str;
	int str1=strlen(str);
	int i;
	for(i=1;str[i]!='\0';i++)
		if(str[i]=='1')
			break;


	if(str[i]=='\0')
	{
		result=ceil((float)(str1-1)/2.0);
	}
	else
	{
		result=ceil((float)(str1)/2.0);

	}

	cout<<result;




}
