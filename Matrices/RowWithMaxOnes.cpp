#include<bits/stdc++.h>

using namespace std;



int main(){

vector<vector<int>>nums{{0,1,1,1}, {0, 0, 1, 1},{1, 1, 1, 1},{0, 0, 0, 0}};

int row=nums.size();
int col=nums[0].size();

int maxOne=0;
int ones=0;
int noOne=-1;

for(int i=0;i<row;i++){
    int count=0;

    for(int j=0;j<col;j++){

        if(nums[i][j]==1){

            count++;
            noOne++;
        }
    }

    if(ones<count){
        maxOne=i;
    }
    ones=max(ones,count);
}

if(noOne==-1){
    cout<<noOne;
}

cout<<"ans is ->"<<" "<<maxOne;

}