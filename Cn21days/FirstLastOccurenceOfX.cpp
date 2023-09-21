class Solution
{
public:
    vector<int> find(int arr[], int n, int x)
    {
        vector<int> ans;
        vector<int> fail = {-1, -1};
        int start = 0;
        int end = n - 1;
        int count1 = 0, count2 = 0, count3 = 0;
        while (start <= end)
        {
            if (count1 == 0 && arr[start] != x)
                start++;
            else
            {
                if (count1 == 0)
                {
                    ans.push_back(start);
                    count1 = 1;
                }
            }
            if (count2 == 0 && arr[end] != x)
                end--;
            else
            {
                if (count2 == 0 && count1 == 0)
                {
                    ans.push_back(end);
                    count2 = 1;
                    count3 = 1;
                }
                else
                {
                    if (count2 == 0 && count1 == 1)
                    {
                        ans.push_back(end);
                        count2 = 1;
                    }
                }
            }
            if (count1 == 1 && count2 == 1 && count3 == 1)
            {
                reverse(ans.begin(), ans.end());
                return ans;
            }
            if (count1 == 1 && count2 == 1)
                return ans;
        }
        return fail;
    }
};