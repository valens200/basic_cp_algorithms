#include <bits/stdc++.h>
using namespace std;

/*
@author valens
*/
int binaryRecursion(int arr[], int low, int high, int target)
{

    if (low < high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            return binaryRecursion(arr, low, mid - 1, target);
        }
        else
        {
            return binaryRecursion(arr, mid + 1, high, target);
        }
    }
    return -1;
}
int binary(int arr[], int key)
{
    int len = sizeof(arr) / sizeof(arr[0]);
    int low = 0;
    int high = len;

    int mid = low + high / 2;
    if (low < high)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            high = mid - 1;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    cout << binaryRecursion(arr, 0, 5, 5);
}
