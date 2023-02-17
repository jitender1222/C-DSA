#include<bits/stdc++.h>
using namespace std;


void factorial(vector<int> &ans,int n){

    int carry=0;
    
    for(int i=0;i<ans.size();i++){
        int val=(ans[i]*n)+carry;
        ans[i]=val%10;
        carry=val/10;
    }
    while(carry!=0){
        ans.push_back(carry%10);
        carry=carry/10;
    }
}
int main(){

    int n=10;
    vector<int>ans(1,1);

    for(int i=1;i<=n;i++){
        factorial(ans,i);
    }

    reverse(ans.begin(),ans.end());

    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
}
