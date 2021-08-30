
// Name:Nahidul Hasan
//ID:11808001

# include<bits/stdc++.h>
using namespace std;

void knapsack(int n, float weight[], float profit[], float capacity) {
   float arr[20], temp = 0;
   int i, j, u;
   u = capacity;
                                                                    // factional knapsack using greedy method
   for (i = 0; i < n; i++)
      arr[i] = 0.0;

   for (i = 0; i < n; i++) {
      if (weight[i] > u)
         break;
      else {
         arr[i] = 1.0;
         temp = temp + profit[i];
         u = u - weight[i];
      }
   }

   if (i < n)
      arr[i] = u / weight[i];

   temp = temp + (arr[i] * profit[i]);

   printf("\nThe result vector is: ");
   for (i = 0; i < n; i++)
      printf("%f\t", arr[i]);

   printf("\nMaximum profit is: %f", temp);

}

int main() {
   float weight[20], profit[20], capacity;
   int num, i, j;
   float arr1[20], temp;

   printf("\nEnter the no. of objects: ");
   scanf("%d", &num);

   printf("\nEnter the wts and profits of each object: ");
   for (i = 0; i < num; i++) {
      scanf("%f %f", &weight[i], &profit[i]);
   }

   printf("\nEnter the capacityacity of knapsack: ");
   scanf("%f", &capacity);

   for (i = 0; i < num; i++) {
      arr1[i] = profit[i] / weight[i];
   }

   for (i = 0; i < num; i++) {
      for (j = i + 1; j < num; j++) {
         if (arr1[i] < arr1[j]) {
            temp = arr1[j];
            arr1[j] = arr1[i];
            arr1[i] = temp;

            temp = weight[j];
            weight[j] = weight[i];
            weight[i] = temp;

            temp = profit[j];
            profit[j] = profit[i];
            profit[i] = temp;
         }
      }
   }

   knapsack(num, weight, profit, capacity);
   return(0);
}

