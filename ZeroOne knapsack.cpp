// Name:Nahidul Hasan
//id:11808001


#include<bits/stdc++.h>
using namespace std;

int max(int a, int b) { return (a > b)? a : b; }

int knapSack(int W, int wt[], int arr1[], int n)
{
   int i, w;                                                 // zero/one knapsack
   int arr[n+1][W+1];

   for (i = 0; i <= n; i++)
   {
       for (w = 0; w <= W; w++)
       {
           if (i==0 || w==0)
               arr[i][w] = 0;
           else if (wt[i-1] <= w)
                 arr[i][w] = max(arr1[i-1] + arr[i-1][w-wt[i-1]],  arr[i-1][w]);
           else
                 arr[i][w] = arr[i-1][w];
       }
   }

   return arr[n][W];
}

int main()
{
    int i, n, arr1[100], wt[100], W;

    printf("Enter number of items:");
    scanf("%d", &n);

    printf("Enter value and weight of items:\n");
    for(i = 0;i < n; ++i){
    	scanf("%d%d", &arr1[i], &wt[i]);
    }

    printf("Enter size of knapsack:");
    scanf("%d", &W);

    printf("%d", knapSack(W, wt, arr1, n));
    return 0;
}
