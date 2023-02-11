// Given an array A of size N. You need to find the sum of Maximum and Minimum element in the given array.

// NOTE: You should make minimum number of comparisons.

#include<bits/stdc++.h>

using namespace std;

void MaxMin(vector<int>&v){

    int maxi=INT_MIN,mini=INT_MAX;
    int n=v.size();

    for(int i=0;i<n;i++){

        maxi=max(maxi,v[i]);
        mini=min(mini,v[i]);
    }
    cout<<"Maximum Element"<<maxi<<" "<<"Minimum Element"<<mini<<endl;
}

int main(){

    vector<int>v(5);

    cout<<"Eneter the size of the vector";

    int n=v.size();
    
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    MaxMin(v);
}