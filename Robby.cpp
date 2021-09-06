#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, m, d;
	scanf("%d%d", &n, &m);
	int cnt = 1, k1 = 1;
	for(int k = 7 ; k < n ; k *= 7) cnt++;
	for(int k = 7 ; k < m ; k *= 7) k1++;	
	d = cnt + k1;
	if(d > 7) {
		printf("0\n");
		return 0;
	}
	int r = 0;
	for(int i=0 ; i<n ; i++) {
		for(int j=0 ; j<m ; j++) {
			int arr[7] = {0};
			int a = i, b = j;
			for(int k=0 ; k<cnt ; k++) {
				arr[a%7]++;
				a /= 7;
			}
			for(int k=0 ; k<k1 ; k++) {
				arr[b%7]++;
				b /= 7;
			}
			r++;
			for(int k=0 ; k<7 ; k++) {
				if(arr[k] > 1) {
					r--;
					break;
				}
			}
		}
	}
	printf("%d\n", r);
	return 0;
}