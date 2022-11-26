#include <bits/stdc++.h>
using namespace std;

int sum(int arr[], int len)
{

    if (len == 0)
    {
        return 0;
    }
    else
    {
        return arr[0] + sum(arr+1, len - 1);
    }
}
int main()
{

    int arr[4] = {3, 4, 5, 6};
    cout << sum(arr, 4);

    return 0;
}