#include<bits/stdc++.h>
using namespace std;
int reverse(int n)
{
    int hemal=0;
    while(n)
    {
        hemal=hemal*10+n%10;
        n=n/10;
    }
    return hemal;
}
int main()
{
int a,b,t,sum,ans;
cin>>t;
while(t--)
{
cin>>a>>b;
a=reverse(a);
b=reverse(b);
sum=a+b;
ans=reverse(sum);
cout<<ans<<endl;
}


return 0;

}


