#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/*
    *
    * problem name:Arrays introduction
    * Comilla university,COMILLA
    *
*/
int main() {
    int a,arr[10003];
    cin >> a;
    for(int i = 0; i < a; i++)cin >> arr[i];
    for(int i = a-1; i >=0; i--)cout << arr[i] << " ";
    cout << endl;
    return 0;
}
