/* Given an array arr[] of positive integers of size N. Reverse every sub-array group of size K.

Note: If at any instance, there are no more subarrays of size greater than or equal to K, then reverse the last subarray (irrespective of its size). You shouldn't return any array, modify the given array in-place.*/


#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<int>v= {1,2,3,4,5};

    int n=v.size();
    int k=3;
    
    for(int i=0;i+k<n;i=i+k){

        reverse(v.begin()+i,v.begin()+i+k);
    }
    int c=n%k;

    reverse(v.end()-c,v.end());


    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
