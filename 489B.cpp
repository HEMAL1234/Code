#include<stdio.h>
#include<math.h>

void merging(long int a[],long int low,long int mid,long int high) {
   long int l1, l2, i;
        long int b[high];
   for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++) {
      if(a[l1] <= a[l2])
         b[i] = a[l1++];
      else
         b[i] = a[l2++];
   }

   while(l1 <= mid)
      b[i++] = a[l1++];

   while(l2 <= high)
      b[i++] = a[l2++];

   for(i = low; i <= high; i++)
      a[i] = b[i];
}
void sort(long int a[],long int low,long int high) {
  long int mid;

   if(low < high) {
      mid = (low + high) / 2;
      sort(a,low, mid);
      sort(a,mid+1, high);
      merging(a,low, mid, high);
   } else {
      return;
   }
}

int main()
{
        long int n,m,a[100],b[100];

        scanf("%ld",&n);

        int i;
        for(i=0;i<n;i++)
                scanf("%ld",a+i);
scanf("%ld",&m);
        for(i=0;i<m;i++)
                scanf("%ld",b+i);
        sort(a,0,n-1);
        sort(b,0,m-1);

        int j=0;
        i=0;
        int count=0;
        while(i<n&&j<m)
        {
                if(fabs(a[i]-b[j])<=1)
                {
                        count++;
                        i++;
                        j++;
                }
                else if(a[i]>b[j])
                        j++;
                else i++;
        }
        printf("%d\n",count);
    return 0;
}

