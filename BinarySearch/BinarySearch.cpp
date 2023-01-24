#include<bits/stdc++.h>
using namespace std;

bool isPresent(vector<long long>&v,long long target){

    long long n=v.size(),l=0,r=n-1;

    while(l<=r){

        long long mid=(l+r)/2;

        if(v[mid]==target) return true;

        else if(v[mid]>target) r=mid-1;

        else l=mid+1;
    }
    return false;
}


int main(){
    long long n,k,q;
    cout<<"Enter your value";
    cin>>n>>k;

    vector<long long> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    for(int i=0;i<k;i++){
        cout<<"Enter your target"<<endl;
        cin>>q;
        if(isPresent(v,q)) cout<<"yes";
        else cout<<"NO";
    }
}