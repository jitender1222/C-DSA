class Solution
{
public:
    vector<int> rotate(int n, int d)
    {
        d %= 16;

        // cout<<d<<endl;

        int temp1 = n;
        int temp2 = 0;
        int d1 = d;
        int temp3 = n;
        int c = 0;

        while (d1 > 0)
        {
            temp1 *= 2;

            temp2 += pow(2, c) * (temp3 & 1);
            temp3 /= 2;
            c++;

            d1--;
        }

        // cout<<temp2<<endl;

        int t = 16 - d;

        temp2 = temp2 * pow(2, t);

        temp2 = (temp2 ^ temp3);

        // cout<<temp1<<" "<<temp2;

        return {temp1 % 65535, temp2 % 65535};
    }
};