#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> v;
typedef pair<int,int> p;
#define F first
#define S second
#define PB push_back
#define MP make_pair

 main() {


	long long int n,i,j,T,max;
	int arr[1000001];
	long long int s,sum;
	cin >> T;
	while(T>0){
	 cin >> n >> s;
	 sum = 0;
	 for(i=0;i<n;i++){
	 	cin >> arr[i];
	 	sum=sum+ arr[i];
	 }
	 if(sum <= s){
	 	cout << "0" << endl;
	 	return 0;
	 }
	 sum = 0;
	 max = 0;
	 i = 0;
	 	while(sum < s){
	 		sum+= arr[i];
	 		if(arr[i] > max){
	 			max = arr[i];
	 			j = i;
	 		}
	 		i=i+1;
	 	}

	 cout << j+1 << endl;

	 T--;
	}

	return 0;
}
