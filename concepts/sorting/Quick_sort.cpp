#include <bits/stdc++.h>
using namespace std;

void swap(int* n, int* m)
{
    int temp;
    temp = *n;
    *n = *m;
    *m = temp;
}
int partion(int arr[], int low, int high)
{
    int i = (low - 1);
    int pivot = arr[high];
    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i + 1], arr[pivot]);
    return (i + 1);
}

int quickSort(int arr[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = partion(arr, low, high);
        // cout << " mid " << mid <<endl;
        quickSort(arr, low, mid - 1);
        quickSort(arr, mid + 1, high);
    }
}
int main()
{
    int numbers[5] = {2, 3, 4, 1, 0};
    quickSort(numbers, 0, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << numbers[i] << endl;
    }
    int k = 3;
    int l = 5;
    swap(k, l);
    return 0;
}