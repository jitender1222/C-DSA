int findDuplicate(vector<int> &arr, int n)
{

    // Write your code here.

    sort(arr.begin(), arr.end());

    int s;

    for (int i = 0; i < n; i++)

    {

        if (arr[i] == arr[i + 1])

        {

            s = i;

            break;
        }
    }

    return arr[s];
}