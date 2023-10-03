class Solution
{
public:
    string colName(long long int n)
    {
        std::string result = "";
        while (n > 0)
        {
            int remainder = (n - 1) % 26;
            result = char('A' + remainder) + result;
            n = (n - 1) / 26;
        }
        return result;
    }
};