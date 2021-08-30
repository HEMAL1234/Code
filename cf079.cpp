#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long T;
    cin>>T;
    while(T--)
    {
        long long a,c,b;
        cin>>a>>c>>b;
        long long n=a+c+b;
        if(n%2!=0)
        n=n+1;
        if(a>n/2 || c>n/2 || b>n/2)
        cout<<"No"<<endl;
        else
        cout<<"Yes"<<endl;
    }
}
