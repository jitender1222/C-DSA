/*
Given a array of N strings, find the longest common prefix among all strings present in the array.

*/

#include<bits/stdc++.h>

using namespace std;

int main(){

vector<string>arr={"geeksforgeeks", "geeks", "geek","geezer"};

sort(arr.begin(),arr.end());
int n=arr.size();
        string a="";
        for(int i=0;i<arr[0].size();i++)
        {
            if(arr[0][i]==arr[n-1][i])
            {
                a+=arr[0][i];
            }
            else
            {
                break;
            }
        }
        if(a.size()>0) 
        cout<<a;
        else
        cout<<"-1";
}