/*
Given an array of integers A, sort the array into a wave-like array and return it. 
In other words, arrange the elements into a sequence such that

a1 >= a2 <= a3 >= a4 <= a5..... 
NOTE: If multiple answers are possible, return the lexicographically smallest one.
*/

#include<bits/stdc++.h>
using namespace std;

void sort(vector<int>&arr){

    sort(arr.begin(),arr.end());

    for(int i=0;i<arr.size()-1;i+=2){
        swap(arr[i],arr[i+1]);
    }
}

int main(){

    vector<int>arr={1,2,3,4};

    sort(arr);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}