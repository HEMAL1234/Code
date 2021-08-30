#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
    cin >> t;

    while(t--)
    {
       int a, b;
       cin >> a >> b;

	   if (a==1)
	   		cout << (b == 1 ? "YES" : "NO") << '\n';
	   else if (a<=3)
			cout << (b <= 3 ? "YES" : "NO") << '\n';
	   else
			cout<<"YES\n";
    }
    return 0;
}
