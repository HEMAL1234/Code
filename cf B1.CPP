#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int n, m;
	    cin>>n>>m;
	    vector<int> v;
	    for(int i=0; i<n; i++){
	        int x;
	        cin>>x;
	        if(x%2==1){
	            v.push_back(i+1);
	        }
	    }
	    if(v.size()<m){
	    	cout<<"NO"<<endl;
	    }
	    else{
	    	cout<<"YES"<<endl;
	    }
	    for(int i=v.size()-m; i<v.size(); i++){
	        cout<<v[i]<<" ";
	    }

	    cout<<endl;
	}
	return 0;
}
