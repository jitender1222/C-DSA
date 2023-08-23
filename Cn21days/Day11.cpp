#include <bits/stdc++.h>

vector<vector<int>> numberPattern(int n)
{

    int start = 1;

    vector<vector<int>> ans;

    for (int row = 0; row < n; row++)

    {

        vector<int> res;

        for (int col = 0; col < n - row - 1; col++)

        {

            res.push_back(-1);
        }

        for (int col = 0; col < row + 1; col++)

        {

            res.push_back(start);

            if (start == 9)

            {

                start = 1;

                continue;
            }

            start++;
        }

        ans.push_back(res);
    }

    return ans;
}