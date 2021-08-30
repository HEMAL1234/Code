#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);

    int maxm = -1, maxmcnt[n], mxm = a[0], maxmpos = 0;
    maxmcnt[0] = 1;
    for(int i=1; i<n; i++){                // 6,2 5 ,7//
        if(a[i]>a[i-1])
            maxmcnt[i] = 1;
         // printf("%d", mxcnt);
        else
            maxmcnt[i] = 1+maxmcnt[i-1];

        if(a[i]>=mxm){
            mxm = a[i];
        }
    }

    int mxcnt = 0;
    for(int i=0; i<n; i++){
        if(a[i] == mxm)
            mxcnt = max(mxcnt, maxmcnt[i]);
    }

    printf("%d", mxcnt);

    return 0;
}
