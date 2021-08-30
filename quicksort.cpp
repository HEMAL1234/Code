#include <bits/stdc++.h>
using namespace std;

int main() {

	long long int t,b,c,arr[100002],sum,a,i,h;
	cin >> t;
	while(t--){
		sum=0;
		cin >> b >> c;
		for(i=0;i<b;i++){
			cin >> arr[i];
		}
		sort(arr,arr+b);
		if(c<b){
			cout <<"-1" << endl;
		}else{
			for(i=1;i<b;i++){
				sum+=(arr[i]+arr[i-1]);
			}
			sum+=(arr[0]+arr[b-1]);
			h=c-(b);
			sum+=h*(arr[0]+arr[1]);
			cout << sum << endl;
			a=1;
			for(i=0;i<b;i++){
				cout <<a <<" "<< a+1<< endl;
				a+=1;

			}
			cout <<"1" <<" "<< b << endl;
			for(i=0;i<(c-b);i++){
				cout <<"1" <<" "<<"2" << endl;
			}

		}
	}
	return 0;
}
