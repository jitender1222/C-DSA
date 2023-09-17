class Solution
{
public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n)
    {

        // Your code here
        if (n == 1)
            return 1;
        if (n == 0)
            return 0;
        n = n & (n - 1);

        if (n == 0)
            return 1;

        else
            return 0;
    }
};