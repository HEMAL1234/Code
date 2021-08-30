#include <bits/stdc++.h>

using namespace std;

int main() {
	unsigned long long n, k;
	cin >> n >> k;
	int a = 0, c = 0;
	cin >> a;
	n--;
	while(n--) {
		int k1;
		cin >> k1;
		if( k1 > a ) {
			a= k1;
			c = 1;
		}
		else c++;
		if(c == k)
			break;
	}
	cout << a << endl;
}
