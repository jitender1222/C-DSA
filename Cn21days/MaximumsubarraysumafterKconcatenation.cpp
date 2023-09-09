#include <bits/stdc++.h>

long long kadane(vector<int> arr, int n)
{
	if (n == 0)
		return 0;

	long long sum = 0, maxi = arr[0];

	for (int i = 0; i < n; i++)
	{
		sum = sum + arr[i];
		if (sum < 0)
			sum = 0;
		maxi = max(maxi, sum);
	}

	return maxi;
}

long long maxSubSumKConcat(vector<int> &arr, int n, int k)
{
	if (k == 1)
	{
		return kadane(arr, n);
	}

	int maxElement = INT_MIN;
	vector<int> arr2(n * 2);
	for (int i = 0; i < n; i++)
	{
		arr2[i] = arr[i];
		arr2[i + n] = arr[i];
		maxElement = max(maxElement, arr[i]);
	}

	if (maxElement < 0)
	{
		return maxElement;
	}

	if (k == 2)
	{
		return kadane(arr2, n * 2);
	}

	long long sum = 0;
	for (int i : arr)
	{
		sum += i;
	}

	if (sum > 0)
	{
		return (kadane(arr2, n * 2) + (sum * (k - 2)));
	}
	else
	{
		return kadane(arr2, n * 2);
	}
}