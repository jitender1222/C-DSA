/*
Give a N*N square matrix, return an array of its anti-diagonals. Look at the example for more details.
*/

#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<vector<int>>matrix{{1,2,3} ,{4,5,6}, {7,8,9}};

    int n=matrix.size();
    
    vector<vector<int>> res(2*n-1);
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        { 
            res[i+j].push_back(matrix[i][j]); 
            }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<res[i][j]<<" ";
            }
    }
}