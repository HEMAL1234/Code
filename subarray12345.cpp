

//problem name:MAXIMUM SUBARRAY
#include<iostream>

using namespace std;


int max(int a, int b)
{
	return (a > b)? a:b;
}


int MaxCrossingSum(int arr[], int low, int mid, int high)
{

	int sum = 0;
	int leftpartsum = -1;
	for (int i = mid; i >= low; i--)
	{
		sum = sum + arr[i];
		if (sum > leftpartsum)
			leftpartsum = sum;
	}


	sum = 0;
	int rightpartsum = -1;
	for (int i = mid+1; i <= high; i++)
	{
		sum = sum + arr[i];
		if (sum > rightpartsum)
			rightpartsum = sum;
    }


	return leftpartsum + rightpartsum;
}


int Max_SubArray_Sum(int arr[], int low, int high)
{
	int mid;

	if (low == high)
		return arr[low];

	//
	mid = (low + high)/2;


	return max(max(Max_SubArray_Sum(arr, low, mid), Max_SubArray_Sum(arr, mid+1, high)), MaxCrossingSum(arr, low, mid, high));
}

int main()
{
	int n, i;
	cout<<"Enter the number of data element in the array: ";
	cin>>n;

    int a[n];
	for(i = 0; i < n; i++)
	{
		cout<<"Enter element "<<i+1<<": ";
		cin>>a[i];
	}


	cout<<"\nMaximum sub-array sum is: "<<Max_SubArray_Sum(a, 0, n-1);

	return 0;
}
