#include <bits/stdc++.h>

int findCase(char ch)
{

    // Write your code here.

    if (ch >= 'a' && ch <= 'z')
    {

        return 0;
    }

    if (ch >= 'A' && ch <= 'Z')
    {

        return 1;
    }

    return -1;
}