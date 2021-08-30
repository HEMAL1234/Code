#include <bits/stdc++.h>

using namespace std;


int rodCut(int price[], int n)
{

	if (n == 0)
		return 0;                                   // MD;NAHIDUL HASAN HIMEL
		                                            // DEPT OF C.S.E,CoU


	int maxValue = -10000;


	for (int i = 1; i <= n; i++)
	{

		int cost = price[i - 1] + rodCut(price, n - i);

		if (cost > maxValue)
			maxValue = cost;
	}

	return maxValue;
}


int main()
{
	int length[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int price [] = { 1, 5, 8, 9, 10, 17, 17, 20 };
    int n;

	scanf("%d",&n);
	int d=n;

	cout << "Profit is " << rodCut(price, d);

	return 0;
}
