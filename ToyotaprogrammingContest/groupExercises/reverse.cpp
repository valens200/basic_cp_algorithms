#include <bits/stdc++.h>
using namespace std;

int i = 0;
int reverse(char *arr, int n)
{
    int len = n;
    if (len <= 0)
    {
        cout << arr[0] << " ";
        return 0;
    }

    cout << arr[len] << " ";
    len--;
    reverse(arr, n - 1);
}
int main()
{
    char arr[4] = {"abc"};
    reverse(arr, sizeof(arr) / sizeof(arr[0]));
}