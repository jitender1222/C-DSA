#include<bits/stdc++.h>

using namespace std;

int main()
{

    pair<int,int>p; // declare a pair of int data type

    pair<int,int>p2={1,2}; // declare a pair and initialize the value

    pair<int,int>p3=make_pair(1,2); // declare a pair and use of make pair function to put the value inside the pair

    pair<int,int>p4(1,2); // declare a pair and initialize the value

    // to print the value inside the Pair

    cout<<p2.first<<" "<<p2.second<<endl;

    pair<int,int>p5=p2;  // put the value of p2 inside the p5 by making the new copy whihc means if we change the value inside the p5 it does not change it inside the p2;

    pair<int,int>&p6=p2;

    // if we apply this now the value of p2 changes as we change the value of p6 beacuse now we pass it as a reference.

    

}