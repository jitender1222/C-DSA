/*Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.*/


#include<bits/stdc++.h>

using namespace std;


// one way of doing this is by the use of division operator after traversing through an array multiply all the elements after that divide the element by the multiplication whihc we obtained earlier

// void product(vector<int>&nums){

//     int n=nums.size();
    
//     vector<int>temp=nums;

//     int ans=1;

//     for(int i=0;i<n;i++){

//         ans=ans*nums[i];
//     }

//     for(int i=0;i<temp.size();i++){
//         temp[i]=ans/temp[i];
//     }

//     for(int i=0;i<n;i++){
//         cout<<temp[i]<<" ";
//     }

// }


// Another way to solve this problem is by using making two arrays suffix and prefix

void product(vector<int>&nums){
    
    int n=nums.size();
    vector<int>ans(n);

    vector<int>prefix(n),suffix(n);

    // to find the prefix

    prefix[0]=nums[0];

    for(int i=1;i<n;i++){

        prefix[i]=nums[i]*prefix[i-1];
    }

    // to find the suffix

    suffix[n-1]=nums[n-1];

    for(int i=n-2;i>=0;i--){

        suffix[i]=nums[i]*suffix[i+1];
    }

    // calculate the ans

     ans[0]=suffix[1];
     ans[n-1]=prefix[n-2];

     for(int i=1;i<n-1;i++){

        ans[i]=prefix[i-1]*suffix[i+1];
     }

     for(int i=0;i<n;i++){

        cout<<ans[i]<<" ";
    }

}


int main(){

    vector<int>nums={1,2,3,4};

    product(nums);
}