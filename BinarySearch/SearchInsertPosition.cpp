#include<bits/stdc++.h>

using namespace std;

bool searchPos(vector<int>&nums,int target){

     int start=0,end=nums.size()-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return start;
}

int main(){

    int n,target;
    cout<<"enter your size and target";
    cin>>n>>target;

    vector<int>v(n);
    for(int i=0;i<n;i++){
        cout<<"Enter element"<<endl;
        cin>>v[i];
    }

    int pos=searchPos(v,target);
    cout<<"Position is :"<<" "<<pos;
}