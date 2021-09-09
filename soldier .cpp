#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define ssf sscanf
#define spf sprintf
#define fsf fscanf
#define fpf fprintf
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define scase sf ("%d",&tc)
#define sn sf ("%d",&n)
#define whilecase while (tc--)
#define eof while (cin >> n)
#define forloop for (pos=1; pos<=tc; pos++)
#define arrayloop (i=0; i<n; i++)
#define cinstr cin >> str
#define getstr getline (cin,str)
#define pcase pf ("Case %d: ",pos)
#define pii pair <int,int>
#define pb push_back
#define in insert
#define llu unsigned long long
#define lld long long
#define U unsigned int
#define endl "\n"

const int MOD = 1000000007;
const int MAX = 5000001;

U arr[MAX],arr1[MAX];

void sieve ()
{
    U i,j,t,k;

    arr[0] = arr[1] = 0;

    for (i=2; i<MAX; i++)
        arr[i] = i;

    for (i=4; i<MAX; i+=2)
        arr[i] = 2;

    for (i=3; i*i<=MAX; i+=2)
        if (arr[i] == i)
            for (j=i*i; j<MAX; j+=2*i)
                if (arr[j] == j)
                    arr[j] = i;

    for (i=2; i<5000001; i++)
    	arr1[i] = arr1[i/arr[i]]+1;

    for (i=2; i<5000001; i++)
    	arr1[i] += arr1[i-1];
}

int main (void)
{
    

    sieve ();

    U test,i,a,b;

    sf ("%u",&test);

    for (i=1; i<=test; i++)
    {
        sf ("%u %u",&a,&b);
        pf ("%u\n",arr1[a]-arr1[b]);
    }

    return 0;
}