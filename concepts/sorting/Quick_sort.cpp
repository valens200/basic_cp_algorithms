#include <bits/stdc++.h>
using namespace std;

/*
@author valens
*/

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}


void quickSort(int arr[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = partition(arr, low, high);
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