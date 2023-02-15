/*
You are given an array A, of N elements. Find minimum index based distance between two elements of the array, x and y such that (x!=y).
*/

#include<bits/stdc++.h>
using namespace std;


int main(){

    vector<int>nums={1,2,3,2};
    int x=12,y=48;
    int n=nums.size();

    int ind1=-1,ind2=-1,ans=INT_MAX;

    for(int i=0;i<n;i++){

        if(nums[i]==x) ind1=i;

        if(nums[i]==y) ind2=i;

        if(ind1!=-1 && ind2!=-1){

            ans=min(ans,abs(ind1-ind2));
        }
    }
     
     if(ans==INT_MAX){
        cout<<-1;
     }
     else{
        cout<<"ans is" <<" " << ans;
     }
}