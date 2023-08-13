#include<bits/stdc++.h>

using namespace std;


void reverseString(vector* <char>& s){
    stack<char>st;
    int n=s.size();
    for(int i=0;i<n;i++){
            
            st.push(s[i]);
        }
        int j=0;
        while(st.size()!=0){
            s[j]=st.top();
            j++;
            st.pop();
        }
    }

int main(){

    vector<char>s{'h','e','l','l','o'};

    reverseString(s);

    cout<<s;

}