int linearSearch(int n, int num, vector<int> &arr)

{
    int ans;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] == num)
        {

            ans = i;

            break;
        }

        else
        {

            ans = -1;
        }
    }

    return ans;

    // Write your code here.
}