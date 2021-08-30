#include <bits/stdc++.h>

using namespace std;


#define MAX 20


int arr[MAX][MAX];


string LCS(string X, string Y, int m, int n)
{


    if (m == 0 || n == 0)
        return string("");
       //return 0;


    if (X[m - 1] == Y[n - 1])
    {


        return LCS(X, Y, m - 1, n - 1) + X[m - 1];
    }


    if (arr[m - 1][n] > arr[m][n - 1])
        return LCS(X, Y, m - 1, n);

    else



        return LCS(X, Y, m, n - 1);
}


void LCSLength(string X, string Y, int m, int n)
{




    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {

            if (X[i - 1] == Y[j - 1])
                arr[i][j] = arr[i - 1][j - 1] + 1;


            else
                arr[i][j] = max(arr[i - 1][j], arr[i][j - 1]);
        }
    }
}
int main()
{
    string X , Y ;
    cout<<"Enter first string   ";
    getline(cin, X);

    cout<<"Enter second string   ";
    getline(cin, Y);


    int m = X.length(), n = Y.length();


    LCSLength(X, Y, m, n);


    cout << LCS(X, Y, m, n);
    cout<<"Longest common subsequence is:"<<" ";

    return 0;
}
