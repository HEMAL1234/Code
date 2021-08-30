
// Author:NAHIDUL HASAN HIMEL
//DEPT.OF COMPUTER COMPUTER SCIENCE AND ENGINEERING,CoU


#include<bits/stdc++.h>
using namespace std;
int main()
{
int i,n,a,num,j,arr[10001],cnt;
while(scanf("%d%d",&n,&a)==2)
{
cnt=0;
arr[0]=1;
num=1;
while(num<=n)
    {
    i=2;
    while(i<=num)
        { if(num%i==0)
        break;
        i++; }
    if(i==num)
    {
    cnt++;
    arr[cnt]=num;
    }
    num++;
    }
if((a*2)>(cnt+1))
    {
    printf("%d %d:",n,a);
    for(j=0;j<=cnt;j++){
        printf(" %d",arr[j]);
    }
    }

else
    {
    printf("%d %d:",n,a);
    for(j=cnt/2+1-a;j<=cnt/2+a-1;j++){
        printf(" %d",arr[j]);
    }
    if(cnt%2==1)
    {
     int k=cnt/2+a;

    printf(" %d",arr[k]);
    }

    }
printf("\n\n");
}
}
