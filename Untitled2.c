#include<bits/stdc++.h>

int main()
{

    int n,i,a;
    while(scanf("%d",&n)==1)
    {
        i=1;
        a=1;
        while(a%n!=0)
        {
            a=(a*10)+1;
            a=a%n;
            i=i+1;
        }
        printf("%d\n",i);
    }
    return 0;
}
