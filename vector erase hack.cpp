#include <math.h>
#include <stdio.h>
#include <vector>
#include <iostream>
#include <algorithm>            // PROBLEM NAME:VECTOR ERASE
using namespace std;

int main() {

    int n,i,B,A,D,size;
    cin>>n;
    vector<int> a;
    for(i=0;i<n;i++)
        {
        int x;
        cin>>x;
        a.push_back(x);
        }
    cin>>B>>A>>D;
    a.erase(a.begin()+B-1);
    a.erase(a.begin()+A-1,a.begin()+D-1);

    size=a.size();

    cout<<size<<endl;
    for(i=0;i<size;i++)
        cout<<a[i]<<" ";
    return 0;
}
