#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int comp(const void*p,const void*q)
{
        int x=*((int*)p);
        int y=*((int*)q);
        return x-y;
}
int main()
{
        int n,m,c=0;
        int f[107]={0};
        int fb[107]={0};
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
        scanf("%d",&m);
        int b[m];
        for(int i=0;i<m;i++)
        {
                scanf("%d",&b[i]);
        }
        qsort(a,n,sizeof(a[0]),comp);
        qsort(b,m,sizeof(b[0]),comp);
        for(int i=0;i<n;i++)
        {
                for(int j=0;j<m;j++)
                {
                        if(fabs(a[i]-b[j])<=1)
                        {
                                if((f[i]==0)&&(fb[j]==0))
                                {
                                c++;
                                f[i]++;
                                fb[j]++;
                                }
                        }
                }
        }
        printf("%d\n",c);
        return 0;
}
