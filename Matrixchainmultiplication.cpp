#include<bits/stdc++.h>


using namespace std;



int Matrix_Chain_Multiplication(int p[], int n)
{
    int arr1[n][n];
    int i, j, k, l, q;

    for (i=1; i<n; i++)
        arr1[i][i] = 0;


    for (l=2; l<n; l++)
    {
        for (i=1; i<n-l+1; i++)
        {
            j = i+l-1;
            arr1[i][j] = 85684567;

            for (k=i; k<=j-1; k++)
            {
                q = arr1[i][k] + arr1[k+1][j] + p[i-1]*p[k]*p[j];
                if (q < arr1[i][j])
                {
                    arr1[i][j] = q;
                }
            }
        }
    }

    return arr1[1][n-1];

}

int main()
{
    int n,i;
    cout<<"Enter number of matrices:\n";
    cin>>n;

    n++;

    int arr[n];

    cout<<"Enter dimensions: \n";

    for(i=0;i<n;i++)
    {
        cout<<"Enter d"<<i<<" :: ";
        cin>>arr[i];
    }

    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<"Minimum number of multiplications is "<<Matrix_Chain_Multiplication(arr, size);

    return 0;
}
