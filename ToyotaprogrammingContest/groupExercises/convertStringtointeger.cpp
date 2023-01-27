#include <bits/stdc++.h>
using namespace std;

int convertStringToInt(char str[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    return convertStringToInt(str, n - 1) * 10 + str[n - 1] - '0';
}

int main()
{
    char number[] = {"12345"};
    cout << convertStringToInt(number, 5);
}