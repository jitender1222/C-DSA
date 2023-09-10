class Solution
{
public:
    bool isLucky(int n)
    {
        if (n % 2 == 0)
            return false;
        int len = n;
        int skip = 2;
        while (skip <= len)
        {
            if (n % skip == 0)
                return false;
            n = n - n / skip;
            skip++;
            len = n;
        }

        return true;
    }
};