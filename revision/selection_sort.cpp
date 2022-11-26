#include <bits/stdc++.h>
using namespace std;

int sort(int arr[], int len)
{

    int i = 0;
    int j = 1;

    int temp;
    while (i < len)
    {
        int position = i;
        for (int j = i + 1; j < len; j++)
        {
            if (arr[position] > arr[j])
            {
                position = j;
            }
            // if(arr[i] > arr[j]){

            // }
        }
        temp = arr[position];
        arr[position] = arr[i];
        arr[i] = temp;
        i++;
    }

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    int numbers[4] = {3, 44, 9, 0};
    sort(numbers, 4);
}