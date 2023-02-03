#include<bits/stdc++.h>
using namespace std;


int main(){

    stack<int>st;

    st.push(10);
    st.push(5);

    cout<<"TOp element is"<<" "<<st.top()<<endl;

    st.pop();

    if(st.empty()==true){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
}