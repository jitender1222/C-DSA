#include<bits/stdc++.h>

using namespace std;


// iterators store the elemennt in the continuous memory 

// auto is a keyword which can assume the dataype by own.

int main(){

    vector<int>v{1,2,3,4,5}; // initilaize the vector

    vector<int>:: iterator it=v.begin(); // make the iterator it whihc is pointing to the first element

    cout<<(*it); // gives the first element of an array

    cout<<(*(it+1))<<endl; // gives the second element of an array


    for(it=v.begin(); it!=v.end();it++){

        // accesing thr value with thhe help of iterators

        cout<<*it<<endl;

        // it++ -> points to next iterator 
        // it+1 -> points to the next memory location
    }

    // Note -> in case of map and set always use it++ beacuse there the element is not arrange in the continous memory location.

    vector<pair<int,int>>v_p={{2,3},{3,4},{4,5}};  // initialize pair of vector

    vector<pair<int,int>>:: iterator it1;   // make the iterator  // in case of auto keyword we dont have to write thiss also

    for(it1=v_p.begin();it1!=v_p.end();it1++) {

        cout<<(*it1).first<<" "<<(*it1).second<<endl;  // running the loop to print the value
    }

    for(it1=v_p.begin();it1!=v_p.end();it1++) {

        cout<<(it1)->first<<" "<<(it1)->second<<endl;  // we can also use -> to print the value
    }

     for(auto it1=v_p.begin();it1!=v_p.end();it1++) {

        cout<<(it1)->first<<" "<<(it1)->second<<endl;  // we can also use -> to print the value
    }

}

//  to resize the vector we can use v.resize()

// v.resize(3);


// v.emplace() -> inside this we have to pass two value first the postion where we want to put the value 2. the value which we have to pass.