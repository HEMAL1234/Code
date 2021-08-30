#include<bits/stdc++.h>
using namespace std;
Merge(int a[],int p,int q,int r)
{
    int i,j,k,n1=q-p+1;
    int n2=r-q;
    int L[n1+1],R[n2+1];
    for(i=1;i<=n1;i++){
        L[i]=a[p+i-1];
    }
    for(j=1;j<=n2;j++){
        R[j]=a[q+j];
    }
    L[n1+1]=200000;
    R[n2+1]=200000;
    i=1;
    j=1;
    for(k=p;k<=r;k++){
        if(L[i]<=R[j]){
            a[k]=L[i];
            i++;
        }
        else {
                a[k]=R[j];
                j++;
        }
    }



}


merge_sort(int a[],int p,int r)
{
    int q;
    if (p<r)
    {
        q=(p+r)/2;
        merge_sort(a,p,q);
        merge_sort(a,q+1,r);
        Merge(a,p,q,r);
    }

}


int main()
{
   int n,i,j;
   cin>>n;
   int a[n];
   for(i=0;i<n;i++) a[i]=rand();
   for(i=0;i<n;i++) cout<<a[i]<<" "<<endl;
   merge_sort(a,0,n-1);

    for(i=0;i<n;i++) cout<<a[i]<<" ";


    return 0;
}
