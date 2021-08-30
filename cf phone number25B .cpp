/* MD.NAHIDUL HASAN HIMEL
 DEPT.OF.COMPUTER SCIENCE AND ENGINEERING
 COMILLA UNIVERSITY,COMILLA
 EMAIL:nahidulhemal123@gmail.com
*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    //cin.ignore();
    string s;
    cin>>s;
    if(n%2 ==0)
    {
        for(int i=0; i<n-2; i+=2)
        {
            cout<<s[i]<<s[i+1]<<"-";
        }
        cout<<s[n-2]<<s[n-1]<<endl;
    }
    else
    {
        for(int i=0; i<n-3; i+=2)
        {
            cout<<s[i]<<s[i+1]<<"-";
        }
        cout<<s[n-3]<<s[n-2]<<s[n-1]<<endl;
    }
   return 0;
}
