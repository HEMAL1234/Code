#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
                                /* problem name:sets-stl */
    set <int> s;
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a= 0, x = 0;
        cin >> a;
        cin >> x;
        if (a == 1)
            s.insert(x);
        else if (a == 2)
            s.erase(x);
        else
        {
            set<int>::iterator itr=s.find(x);
            if (itr == s.end())
                cout<<"No"<<endl;
            else
                cout<<"Yes"<<endl;
        }
    }
    return 0;
}
