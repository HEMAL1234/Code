#include <iostream>
#include <string>
using namespace std;
/*
    *
    * PROBLEM NAME:STRING
    *
    *

*/
int main() {

    string str1,str2,str3,temp_str;
    int a,b;

    cin >> str1;
    cin >> str2;

    a = str1.size();
    b = str2.size();

    temp_str = str3 = str1+str2;

    char temp_a,temp_b;

    temp_a = str3[0];
    temp_b = str3[a];

    str3[0] = temp_b;
    str3[a] = temp_a;

    cout << a << " " << b << endl;

    cout << temp_str << endl;

    for(int i = 0; i < a;i++)cout << str3[i];
    cout << " ";
    for(int i = a; i < str3.size(); i++)cout << str3[i];
    cout << endl;
    return 0;
}
