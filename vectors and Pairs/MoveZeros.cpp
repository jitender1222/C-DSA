/*

Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

*/

#include<bits/stdc++.h>

using namespace std;


int main(){

    vector<int>nums={0,1,0,3,12};

    int n=nums.size();

    int i=0,j=1;

    while(j<n){

    if(nums[i]==0 && nums[j]==0){
        j++;
    }

    else if(nums[i]==0 && nums[j]!=0){

        swap(nums[i],nums[j]);
        i++;
        j++;
    }
    else{
        i++;
        j++;
    }
    }

    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}