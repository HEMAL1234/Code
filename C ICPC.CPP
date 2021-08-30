#include <bits/stdc++.h>
#define sz 10000000+8
#define ll long long
using namespace std;
ll ARR[s1];
ll sPhi[s1];
void computeTotient()
{
    for (int i=1; i<=s1; i++)
        ARR[i] = i;
    for (int p=2; p<=s1; p++)
    {
        if (ARR[p] == p)
        {
            ARR[p] = p-1;
            for (int i = 2*p; i<=s1; i += p)
            {
               ARR[i] = (ARR[i]/p) * (p-1);
            }
        }
    }

    sPhi[0] = 0;
    for(int i=1; i<=s1; i++)
        sPhi[i] = sPhi[i-1] + ARR[i];


}


ll countGCD(ll L, ll R, ll g)
{
    L = (L + g - 1) / g;
    R = R/ g;
    ll ans = 0;


    return sPhi[R];
}


int main()
{
    computeTotient();
    ll t,n,p,co = 0, maxgcd = 0, m = 1;
    cin>>t;
    while(t--) {
        cin>>n>>p;
        maxgcd = 0;
        for(int i=1; i<=n; i++) {

            co = sPhi[n/i];

            if(co<p)
                break;
            maxgcd = i;
        }
        if(maxgcd == 0)
            cout<<"Case "<<m++<<": "<<-1<<endl;
        else
            cout<<"Case "<<m++<<": "<<maxgcd<<endl;
    }
    return 0;
}
