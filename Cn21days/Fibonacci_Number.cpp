class Solution
{
public:
    // Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n)
    {
        // code here
        vector<long long> ans;
        ans.push_back(1);
        if (n == 1)
            return ans;
        ans.push_back(1);
        if (n == 2)
            return ans;
        for (int i = 2; i < n; i++)
            ans.push_back(ans[i - 1] + ans[i - 2]);
        return ans;
    }
};