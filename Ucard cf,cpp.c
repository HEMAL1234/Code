#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int n,zero=0,one=0;
    cin >> n;
    string str;
    cin >> str;
    for(int i=0;i<n;i++){
        if(str[i]=='r')
        zero++;

        if(str[i]=='n')
            one++;

    }
    for(int i=0;i<one;i++){
        cout << 1 << " ";
    }
    for(int i=0;i<zero;i++){
        cout << 0 << " ";
    }

    return 0;
}
