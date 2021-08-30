#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin>>n;
    if(n==1)
    cout<<1<<"\n";
    else if(n%2==0)
    cout<<2<<"\n";
    else {
    	long long ans=n;
    	long long k = (long long)sqrtl(n);
    	for(long long i=2;i<=k;i++) {
    		if(n%i==0) {
    			ans=i;
    			break;
    		}
    	}
    	cout<<ans<<"\n";
    }
}

