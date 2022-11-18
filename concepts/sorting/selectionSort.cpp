#include <bits/stdc++.h>
using namespace std;

void printArr(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}

void sort(int arr[], int len)
{
    int temp;
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            int targetIndex = i;
            if (arr[j] < arr[targetIndex])
            {
                targetIndex = j;
            }
            temp = arr[i];
            arr[i] = arr[targetIndex];
            arr[targetIndex] = temp;
        }
    }
    printArr(arr);
}

int main()
{
    int numbers[] = {5,2,4,7,8,1};
    sort(numbers, 6);
    return 0;
}