#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,arr[1003],cnt=0,m;
	cin >> m;
	while(m--)
	{
		cnt=0;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	cnt=0;
	sort(arr,arr+n);
	for( int i=0;i<n-1;i++)
	{
		if((arr[i+1]-arr[i])==1)
		{
			cnt=1;
			break;
		}
	}
	if(cnt==0)
	cout << "1" << "\n";
	else
	cout << "2" << "\n";
	}
	return 0;
}
