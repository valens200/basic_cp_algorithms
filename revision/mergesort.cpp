#include <bits/stdc++.h>
using namespace std;

void mergeArrays(int x[], int y[], int a[], int start, int end)
{
    int mid = (start + end) / 2;
    int i = start;
    int j = mid + 1;
    int k = start;
    while (i <= mid && j <= end)
    {
        if (x[i] < y[j])
        {
            a[k] = x[i];
            i++;
            j++;
        }
        else
        {
            a[k] = y[j];
            j++;
            k++;
        }
    }

    while (i <= mid)
    {
        a[k] = x[i];
        k++;
        i++;
    }

    while (j <= end)
    {
        a[k] = y[j];
        j++;
        k++;
    }
}

void mergeSort(int a[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int mid = (start + end) / 2;
    int x[100]; int y[100];
    for (int i = start; i <= mid; i++)
    {
        x[i] = a[i];
    }
    for (int i = mid + 1; i <= end; i++)
    {
        y[i] = a[i];
    }

    mergeSort(x, start, mid);
    mergeSort(y, mid + 1, end);
    mergeArrays(x, y, a, start, end);
}
int main()
{
    int a[] = {7, 3, 10, 5, 6, 2, -5};
    mergeSort(a, 0, 6);
    for (int i = 0; i < 7; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}