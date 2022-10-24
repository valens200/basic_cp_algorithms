#include <bits/stdc++.h>
using namespace std;

void printArr(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}

void sort(int arr[])
{
  int temp;
    for (int i = 0; i < 5  ; i++)
    {
        int middle = i;
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[j] > arr[middle])
            {
                middle = j;
        }
                temp = arr[j];
                arr[j] = arr[middle];
                arr[middle] = temp;
    }
}
        printArr(arr);
}

int  main(){
    int numbers[] = {34, 23, 45, 5657, 78};
    sort(numbers);
    return 0;
}