#include <bits/stdc++.h>


using namespace std;
int main() {


int T;
cin>>T;
while(T--)
{
     unsigned long long int a,b,c;
    cin>>a>>b>>c;
   unsigned long long int ans=a+b+c;
    if(ans%2==0)
        cout<<ans/2<<endl;
    else
    {
        ans=ans-1;
        cout<<ans/2<<endl;
    }
}
}
