class Solution
{
public:
    // Function to count the number of ways in which frog can reach the top.
    map<int, int> x;
    const long long mod = 1000000007;
    long long count(int n, long long &sum)
    {
        if (x[n] >= 1)
            return x[n];
        if (n <= 1)
        {
            sum = sum + 1;
            return 1;
        }
        if (n == 2)
        {
            sum = sum + 2;
            return 2;
        }
        if (n == 3)
        {
            sum = sum + 4;
            return 4;
        }
        sum = sum + (count(n - 1, sum) + count(n - 2, sum) + count(n - 3, sum)) % mod, x[n] = sum;
        return sum;
    }
    long long countWays(int n)
    {

        // your code here
        if (n == 0)
            return 4;
        long long sum = 0;
        count(n, sum);
        return sum;
    }
};