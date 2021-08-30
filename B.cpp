#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define hemo(i, a, b) for (ll i = a; i < b; ++i)
#define hemo1(i, a, b) for (ll i = a; i > b; --i)





int main()
{
    ll t;
    cin >> t;
    hemo(i, 0, t)
    {
        ll m, n;
        cin >> m >> n;
        if (m % 2 != 0 && n > m)
        {
            cout << "NO" << endl;
            continue;
        }
        if (m == n)
        {
            cout << "YES" << endl;
            continue;
        }
        if (m == 1 && n != -1)
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
    }
}
