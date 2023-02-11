/* Given an unsorted array arr[] of size N having both negative and positive integers. 
The task is place all negative element at the end of array without changing the 
order of positive element and negative element.*/


#include<bits/stdc++.h>

using namespace std;

void MoveElement(vector<int>&v1,vector<int>v2){

    int n=v1.size();

    for(int i=0;i<n;i++){
        if(v1[i]>=0){
            v2.push_back(v1[i]);
        }
    }

    int k=v2.size();

    for(int i=0;i<n;i++){

        if(v1[i]<0){

            v2[k]=v1[i];
            k++;
        }
    }

    for(int i=0;i<n;i++){

        v1[i]=v2[i];
    }
}

int main(){

    vector<int>v1={1, -1, 3, 2, -7, -5, 11, 6 };
    vector<int>v2;

    MoveElement(v1,v2);


    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
}