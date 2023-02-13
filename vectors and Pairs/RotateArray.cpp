/* 
Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
*/


#include<bits/stdc++.h>
using namespace std;

// void rotate(vector<int>&nums,int k){

//     int n=nums.size();                              // one way for doing this

//     k=k%n;

//     reverse(nums.begin(),nums.end());
//     reverse(nums.begin(),nums.begin()+k);
//     reverse(nums.begin()+k,nums.end());
// }



 // another way for doing this we can traverse through an array and find the index what is the exact postion of our element after k times and put that element in that position

// void rotate(vector<int>&nums,int k){

//     vector<int>temp=nums;

//     int n=nums.size();                     
//     for(int i=0;i<nums.size();i++){

//         nums[(i+k)%n]=temp[i];
//     }
// }


int main(){


    vector<int>nums={1,2,3,4,5,6,7};
    int k=8;

    rotate(nums,k);

    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}