/*

Given an array A[ ] of positive integers of size N, where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates. There are M students, the task is to distribute chocolate packets among M students such that :

1. Each student gets exactly one packet.

2. The difference between maximum number of chocolates given to a student and minimum number of chocolates given to a student is minimum.

*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>nums={3,4,1,9,56,7,9,12};

    int n=nums.size();

    int students=5;

    sort(nums.begin(),nums.end());

    // nums={1,3,4,7,9,9,12,56};

    int i=0,j=students-1;
    int mini=INT_MAX;

    while(j<n){

        if(nums[j]-nums[i]<mini){
            mini=nums[j]-nums[i];
        }
        i++;
        j++;
    }

    cout<<"ans is->"<<mini;
}