#include <bits/stdc++.h>
using namespace std;


int main()
{
	long long a,b;
	cin>>a>>b;
	long double result=b*b-a*a;
	result=(result*1.0)/(2*a);
	cout<<fixed;
	cout<<setprecision(10)<<result;
	return 0;
}
