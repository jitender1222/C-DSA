class Solution
{
public:
    int distinctSubsequences(string s)
    {
        int mod = 1e9 + 7;
        int n = s.length();
        vector<int> dp(n + 1);
        dp[0] = 1;
        vector<int> lastSeen(256, -1); // Initialize to -1, one value for each character

        for (int i = 1; i <= n; i++)
        {
            char ch = s[i - 1];
            dp[i] = (2 * dp[i - 1]) % mod;

            if (lastSeen[ch] != -1)
            {
                int ans = lastSeen[ch];
                dp[i] = (dp[i] - dp[ans - 1] + mod) % mod;
            }

            lastSeen[ch] = i; // Update the last seen index of this character
        }

        return dp[n];
    }
};
