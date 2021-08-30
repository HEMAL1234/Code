#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt=0;
        int cnt1=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='P')
            {
                cnt1++;
            }
        }
        bool himo=false;
        for(int i=2;i<n-2;i++)
        {
            if(4*(cnt+cnt1)>=3*n)
                {
                    himo=true;
                    break;
                }
            if(s[i]=='A')
            {

                if((s[i-1]=='P' || s[i-2]=='P') && (s[i+1]=='P' || s[i+2]=='P'))
                {
                    cnt++;
                }
            }
        }
         if(4*(cnt+cnt1)>=3*n)
                {
                    himo=true;
                }
        if(himo==true)
        {
            cout<<cnt<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }

    }
    return 0;
}
