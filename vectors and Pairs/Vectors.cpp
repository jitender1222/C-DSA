#include<bits/stdc++.h>
using namespace std;

// vectors are continous block of memory it is  similar to array but their size is dynamically increases .

int main(){

    int a[5]; // declare an array of size 5;

    vector<int>v; // declare a vector

    vector<int>v1={1,2,3,4,5} // intialize the vector

    vector<int> v2{1,2,2,4,4} // initailaize the vector

    vector<int>v3(10);  // inistialize thhe vector of siize 10

    vector<int>v4(10,3) // initailaize the vector of size 10 with the value 3.

    // v.push_back -> o(1)
    // v.pop_back -> o(1)
    // v.size() -> o(1)

    //  when we make the new copy of for the vector then it become o(n)

    vector<int>v5=v2; // o(n)


    // we can declare 10^5 or 6 size of the array inside the int main function because inside the local memory the size is stored on the stack.

    //  local memory -> int a[100000] .

    // when we declare it globally the size is stored inside the heap memory. 

    //  global memory -> int a[100000] .

}