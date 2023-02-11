// Given an integer array A.
// Find the count of elements whose value is greater than all of its previous elements.

// Note: Since there are no elements before first element so it should be considered in our answer.


#include<bits/stdC++.h>

using namespace std;

void count(vector<int>&v,int n){

    int count=1;

    for(int i=1;i<n;i++){

        if(v[i]>v[i-1]){
            count++;
        }
    }
    cout<<"Count"<<" "<<count;
}

int main(){

vector<int>v={1,1,2,2};

int n=v.size();

count(v,n);

}