#include <bits/stdc++.h>

using namespace std;

 main() {
	int T;
	cin >> T;
	while (T--) {
		int n, m, c, b;
		cin >> n >> m >> c >> b;
		cout << min(n - 1, abs(c - b) + m) << endl;
	}
	return 0;
}
