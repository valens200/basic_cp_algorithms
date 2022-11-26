#include <bits/stdc++.h>
using namespace std;

int count(int n)
{

    if (n == 0)
    {
        return 0;
    }
    else
    {
        if (n % 10 == 0)
        {
            cout << n << endl;
            return count(n / 10) + 1;
        }
    }
}
bool check(int arr[], int len)
{
    if (len == 0 || len == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }

    return check(arr + 1, len - 1);
}
int main()
{
    int arr[4] = {1, 2, 3, 4};
    // cout <<check(arr, 4);
    cout << count(4000) << endl;

    return 0;
}