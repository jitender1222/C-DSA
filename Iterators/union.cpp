/* Given two arrays a[] and b[] of size n and m respectively. The task is to find the number of elements in the union between these two arrays.

Union of the two arrays can be defined as the set containing distinct elements from both the arrays. 
If there are repetitions, then only one occurrence of element should be printed in the union.

Note : Elements are not necessarily distinct.*/

#include<bits/stdc++.h>
using namespace std;

void unions(vector<int>a,vector<int>b){

    vector<int>v;

    int count=1;
    int n=a.size();
    int m=b.size();

    for(int i=0;i<n;i++){
        v.push_back(a[i]);
    }
    for(int j=0;j<m;j++){
        v.push_back(b[j]);
    }

    sort(v.begin(),v.end());

    for(int i=1;i<v.size();i++){

        if(v[i]!=v[i-1]){
            count++;
        }
    }

    cout<<count;

}

int main(){

vector<int>b={1 ,2 ,3};
vector<int>a={1 ,2 ,3 ,4 ,5};

 unions(a,b);

}