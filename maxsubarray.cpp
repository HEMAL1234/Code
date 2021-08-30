#include <bits/stdc++.h>
using namespace std;



int max(int a, int b) { return (a > b)? a : b; }


int max(int a, int b, int c) { return max(max(a, b), c); }


int max_Crossing_Sum(int arr[], int l, int m, int h)
{

    int sum = 0;
    int left_sum = -9876543;
    for (int i = m; i >= l; i--)
    {
        sum = sum + arr[i];
        if (sum > left_sum)
          left_sum = sum;
    }


    sum = 0;
    int right_sum = -8796549;
    for (int i = m+1; i <= h; i++)
    {
        sum = sum + arr[i];
        if (sum > right_sum)
          right_sum = sum;
    }


    return left_sum + right_sum;
}


int max_SubArray_Sum(int arr[], int l, int h)
{

   if (l == h)
     return arr[l];


   int m = (l + h)/2;


   return max(max_SubArray_Sum(arr, l, m),
              max_SubArray_Sum(arr, m+1, h),
              max_Crossing_Sum(arr, l, m, h));
}


int main()
{
   int arr[] = {2, 3, 4, 5, 7};
   int n = sizeof(arr)/sizeof(arr[0]);
   int max_sum = max_SubArray_Sum(arr, 0, n-1);
   printf("Maximum contiguous sum is %d\n", max_sum);
   getchar();
   return 0;
}
