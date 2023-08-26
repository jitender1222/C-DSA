#include <bits/stdc++.h> 
vector<vector<int>> fahrenheitToCelsius(int s, int e, int w)
{
	//type your code here
    vector<vector<int>> res;
    for (int i = s ; i <= e ; i = i + w){
        vector<int> temp;
        temp.push_back(i);
        temp.push_back(((i-32)*5)/9);
        res.push_back(temp);
    }
    return res;
}