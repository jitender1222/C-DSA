#include <bits/stdc++.h> 
int sumOfMaxMin(int arr[], int n){
	int maxi = INT_MIN;
	int mini = INT_MAX;

	for( int i = 0; i < n; i++ ) {
		// maxi = max( arr[i], maxi );
		// mini = min( arr[i], mini );
		if( maxi < arr[i])
			maxi = arr[i];
		if( mini > arr[i] )
			mini = arr[i];
	}
	int sum = maxi + mini;

	return sum;

}