#include <bits/stdc++.h>
using namespace std;

/*
@author valens
*/

void selctionSort(int arr[], int len)
{
    int i = 0;
    for (int i = 0; i < len; i++)
    {

        int position = i;
        int temp;
        int current_element = arr[i];
        for (int j = i + 1; j < len; j++)
        {
            if (arr[j] < current_element)
            {
                current_element = arr[j];
                position = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[position];
        arr[position] = temp;
    }

    for (int k = 0; k < len; k++)
    {
        cout << arr[k] << endl;
    }
}

void insertionSort(int arr[], int len)
{
    int i = 1;
    while (i < len)
    {
        int current_value = arr[i];
        int position = i;

        while (position != 0 && arr[position - 1] > current_value)
        {
            arr[position] = arr[position - 1];
            position--;
        }

        arr[position] = current_value;

        i++;
    }
    for (int k = 0; k < len; k++)
    {
        cout << arr[k] << endl;
    }
}

int main()
{
    int numbers[5] = {3, 4, 2, 33, 0};
    insertionSort(numbers, 5);

    return 0;
}