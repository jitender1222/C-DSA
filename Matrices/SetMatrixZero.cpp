#include<bits/stdc++.h>
using namespace std;


// uisng two arrays row and col TC-> o(m*n) Sc-> o(m+n) m->row n->col

// void setZeros(vector<vector<int>>&matrix,int row,int col){

//     vector<int>rowArr;
//     vector<int>colArr;

//     for(int i=0;i<row;i++){

//         for(int j=0;j<col;j++){

//             if(matrix[row][col]==0){

//                 rowArr.push_back(i);

//                 colArr.push_back(j);
//             }
//         }
//     }

//     for(int i=0;i<rowArr.size();i++){

//         int r=rowArr[i];

//         for(int j=0;j<col;j++){

//             matrix[r][j]=0;
//         }
//     }

    
//     for(int i=0;i<colArr.size();i++){

//         int c=colArr[i];

//         for(int j=0;j<col;j++){

//             matrix[j][c]=0;
//         }
//     }
// }


/************************************************************Nexxt Approach ****************************************************************/


// instead of using two arrays we can do this in a contant space

void setZeros(vector<vector<int>>& matrix,int row,int col){


    bool firstCol=false;
    bool firstrow=false;

    // traverse in the first row and col

    // check whether if 0 is present in each colmn of a first row.

    for(int j=0;j<col;j++){

        if(matrix[0][j]==0) firstrow=true;
    }

    // check whether if 0 is present in each colmn of a first row.

    for(int i=0;i<row;i++){

        if(matrix[i][0]==0) firstCol=true;
    }

    // for all the other row and column if we find any 0 then we have to make the first element of row and col to zero.

    for(int i=1;i<row;i++){

        for(int j=1;j<col;j++){

            if(matrix[i][j]==0){
                matrix[i][0]=0;
                matrix[0][j]=0;
            }
        }
    }

    // we have to update each and every row and colmn to zero

    for(int i=1;i<row;i++){
        for(int j=1;j<col;j++){

            // check whether the first element in a row or a column is 0 or not

            if(matrix[i][0]==0 || matrix[0][j]==0){
                matrix[i][j]=0;
            }
        }
    }

    // we have to check whther the first row or col which is true

    if(firstrow==true){

        for(int j=0;j<col;j++){
            matrix[0][j]=0;
        }
    }

    if(firstCol==true){
        for(int i=0;i<row;i++){
            matrix[i][0]=0;
        }
    }
}

// Tc->0(m*n) Sc-> 0(1);



int main(){

    vector<vector<int>>matrix{{1,1,1},{1,0,1},{1,1,1}};

    int row=matrix.size();
    int col=matrix[0].size();

    setZeros(matrix,row,col);

      for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<matrix[i][j]<<" ";
        }
    }
}