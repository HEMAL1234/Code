#include <bits/stdc++.h>

using namespace std;

int a, b;

void solve() {
    if (b < a * 2) {
        cout << b - a << endl;
    }
    else {
        cout << (b - 1) / 2 << endl;
    }
}

int main() {
    int test;
    cin >> test;
    while (test--) {
        cin >> a>> b;
        solve();
    }
}