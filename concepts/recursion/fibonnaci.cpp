#include <bits/stdc++.h>
using namespace std;

// shaka sum of elements in array
int getSum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return getSum(n / 10) + n % 10;
    }
}

int sumArray(int arr[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return arr[0];
    }
    else
    {
        return arr[0] + sumArray(arr + 1, n - 1);
    }
}
int fibonnaci(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonnaci(n - 1) + fibonnaci(n - 2);
    }
}
int main()
{

    int numbers[4] = {2, 3, 4, 5};
    int n = 12345;
    // cout << fibonnaci(n);
    // cout << getSum(n);
    cout << sumArray(numbers, 4);
    return 0;
}