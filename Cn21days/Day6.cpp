bool checkArmstrong(int n)

{

    // Write your code here

    int temp = n, count = 0;

    while (temp)
    {

        count++;

        temp = temp / 10;
    }

    int sum = 0;

    int m = n;

    while (m)

    {

        int rem = m % 10;

        sum += pow(rem, count);

        m /= 10;
    }

    if (sum == n)

        return true;

    else

        return false;
}