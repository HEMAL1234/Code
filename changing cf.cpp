#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int tc,a,b,f,t,o,r;
	cin>>tc;
	while(tc--)
	{
		f=0;
		t=0;
		o=0;
		cin>>a>>b;
		r=abs(a-b);
		f=r/5;
		r=r%5;
		t=r/3;
		r=r%3;
		o=r/1;
		cout<<f+t+o<<endl;
	}
	return 0;
}
