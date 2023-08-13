#include<bits/stdc++.h>
using namespace std;


void ngr(vector<int>arr ,vector<int>& temp2){

    int n=arr.size();
} 
int main(){
    int mod=1e+9;

    vector<int>arr={1,4,3,4};

    vector<int>temp1(-1);
    vector<int>temp2(-1);

    int n=arr.size();
    stack<int>st1;

    for(int i=0;i<n;i++){

        while(!st1.empty() && arr[st1.top()] <=arr[i]){
            st1.pop();
        }

        if(st1.empty()){
            temp1[i]=-1;
        }
        else{
            temp1[i]=st1.top();
        }

        st1.push(i);
    }   

    stack<int>st2;

    for(int i=n-1;i>=0;i--){

        while(!st2.empty() && arr[st2.top()] <=arr[i]){
            st2.pop();
        }

        if(st2.empty()){
            temp2[i]=-1;
        }
        else{
            temp2[i]=st2.top();
        }

        st2.push(i);
    }

   
    long long int ans=0;

    for(int i=0;i<arr.size();i++){

        if(temp1[i]== -1 || temp2[i]== -1){
            continue;
        }
        ans=max(ans,temp1[i]*1ll*temp2[i]);
    }

    return ans%mod;
}