#include<bits/stdc++.h>

using namespace std;


int ClosestElement(vector<int>&v,int x){

    int l=-1,r=v.size();

    while(r>l+1){
        int mid=(l+r)/2;

        if(v[mid]<=x) l=mid;

        else r=mid;
    }

    return l+1;
}

int main(){

    int n,k;
    cout<<"Enter size and k"<<endl;
    cin>>n>>k;
    
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    while(k--){
        int x;cin>>x;
        cout<<ClosestElement(v,x)<<endl;  
    }

}