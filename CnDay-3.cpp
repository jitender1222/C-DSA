#include <iostream>

using namespace std;

int main()
{

    int n;

    cin >> n;

    int EvenSum = 0;

    int OddSum = 0;

    while (n > 0)
    {

        int ans = n % 10;

        if (ans % 2 == 0)
        {

            EvenSum = EvenSum + ans;
        }
        else
        {

            OddSum = OddSum + ans;
        }

        n = n / 10;
    }

    cout << EvenSum << " " << OddSum;
}