#include <bits/stdc++.h>
bool checkDiff(int *arr, int n, int K)
{
    // Write your code here.
    vector<int> a(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        a[i] += K;
    }
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]] = i;
    }
    for (int i = 0; i < n; i++)
    {
        if (mp.count(a[i]) > 0 && i != mp[a[i]])
        {
            return true;
        }
    }
    return false;
}