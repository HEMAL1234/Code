#include <bits/stdc++.h>
using namespace std;

void hemal(){
	int n;
	cin>>n;
	int m;
	vector <int> vec;
	for(int i = 0; i < n; i++){
		cin>>m;
		vec.push_back(m);
	}
	sort(vec.begin(), vec.end());
	int ans = 0;
	for(int i = n-1; i>=0; i--){
		ans = max(ans, min(n-i, vec[i]));
	}
	cout << ans << endl;
}

 main() {
	int t;
	cin>>t;
	while(t--) hemal();
	return 0;
}
