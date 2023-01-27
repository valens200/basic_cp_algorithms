#include <bits/stdc++.h>
using namespace std;

void printArr(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
}



int selectionSOrt(int arr[], int len){
    for(int i = 0; i < len ; i++){
        int smallest = i;
        for(int j = i + 1; j < len  ; j++){
            if(arr[j] < arr[smallest]){
                smallest = j;
            }
        }

        int temp = arr[i];
        arr[smallest] = arr[i];
        arr[i] = temp;
    }

    printArr(arr, len);
}

int insertionSOrt(int arr[], int len)
{

    for (int i = 1; i < len; i++)
    {
        int current_val = arr[i];
        int position = i;

        while (position >= 0 && arr[position - 1] > current_val)
        {
            arr[position] = arr[position - 1];
            position--;
        }
        arr[position] = current_val;
    }

    printArr(arr, len);
}
int sort(int arr[], int len)
{   
    int it;
    int check = 0;
    while (it < len - 1)
    {
        for (int j = 0; j < len - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                check = 1;
            }
        }
        if (check = 0)
        {
            break;
        }
        it++;
    }
    printArr(arr, len);
}

int main()
{
    int arr[] = {4, 5, 63, 23, 0};
    selectionSOrt(arr, sizeof(arr) / sizeof(arr[0]));
}