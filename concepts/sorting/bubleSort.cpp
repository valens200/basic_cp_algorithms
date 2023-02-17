#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int len)
{
    int i = 0;
    while (i < len)
    {
        cout << arr[i] << "\n";
    }
}
void bubleSort(int arr[], int length)
{
    int i = 0;
    int j = 0;

    while (i < length - 1)
    {
        while (j < length - 1)
        {

            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            j++;
        }
        i++;
    }
    print(arr, length);
}

int main()
{
    int arr[] = {34, 04523, 2, 30 };
    bubleSort(arr, 200);

    return 0;
}

// /*
// @author valens
// */

// #include <bits/stdc++.h>
// using namespace std;
// void swap(int a, int b)
// {
//     int temp;
//     if (a > b)
//     {
//         temp = b;
//         b = a;
//         a = temp;
//     }
// }

// void printArr(int arr[], int len)
// {
//     for (int i = 0; i < len; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << " " << endl;
// }

// void sort(int arr[], int n)
// {
//     int temp;
//     int it = 0;
//     int j = 0;

//     while (it < n - 1)
//     {

//         int check = 0;
//         for (j = 0; j < n - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//                 check = 1;
//             }
//             if (check = 0)
//             {
//                 break;
//             }
//         }

//         it++;
//     }
//             printArr(arr, n);
// }
// int main()
// {
//     int numbers[4] = {1, 1000, 3, 4};
//     sort(numbers, 4);
//     return 2;
// }