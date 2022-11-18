#include <bits/stdc++.h>
using namespace std;
void swap(int a, int b)
{
    int temp;
    if (a > b)
    {
        temp = b;
        b = a;
        a = temp;
    }
}

void printArr(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << " " << endl;
}

void sort(int arr[], int n)
{
    int temp;
    int it = 0;
    int j = 0;

    while (it < n - 1)
    {
        cout << " " << endl;
        cout << " iteration " << it << endl;
        cout << " sorted array : " << endl;
        int check = 0;
        for (j = 0; j < n - 1; j++)
        {
            printArr(arr, n);
            cout << " j : " << j << endl;
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                check = 1;
            }
            if (check = 0)
            {
                break;
            }
        }

        it++;
    }
}
int main()
{
    int numbers[4] = {1, 2, 3, 4};
    // sort(numbers, 4);

    // int *ptr = 5;
    // *ptr = 7;
    return 2;
}