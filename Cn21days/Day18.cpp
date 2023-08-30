int removeDuplicates(vector<int> &arr, int n)
{

    int count = 0;

    for (int i = 0; i < arr.size(); i++)
    {

        if (arr[i] != arr[i + 1])
        {

            count++;
        }
    }

    return count;
}