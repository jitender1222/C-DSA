#include <bits/stdc++.h>

#include <vector>

vector<int> termsOfAP(int x)
{

    vector<int> ans;

    int temp = 0;

    int n = 1, count = 0;

    while (count != x)
    {

        temp = ((3 * n) + 2);

        if (temp % 4 != 0)
        {

            ans.push_back(temp);

            count++;

            n++;
        }
        else
        {

            n++;
        }
    }

    return ans;
}