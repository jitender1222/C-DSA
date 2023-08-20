#include <bits/stdc++.h>

string lookAndSaySequence(int n)

{

    if (n == 1)
        return "1";

    if (n == 2)
        return "11";

    String ans = "11";

    for (int i = 3; i <= n; i++)
    {

        ans += '#';

        int l = ans.size(), count = 1;

        string temp;

        for (int j = 1; j < l; j++)
        {

            if (ans[j] != ans[j - 1])
            {

                temp += (count + '0');

                temp += ans[j - 1];

                count = 1;
            }

            else

                count++;
        }

        ans = temp;
    }

    return ans;
}