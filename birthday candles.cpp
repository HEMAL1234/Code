#include<bits/stdc++.h>
using namespace std;
/*
    *
    * NAHIDUL HASAN HIMEL
    * COMILLA UNIVERSITY,CoU
    *
*/

int main(){

    int a,n,height = -1,cnt = 0;
    vector<int> ar;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(a >= height)ar.push_back(height = a);
    }

    for(int i = 0; i < ar.size(); i++){
        if(ar[i] == height)cnt++;
    }
    cout << cnt << endl;
}
