#include <iostream>
using namespace std;

int sort(int arr[], int n)
{

    int temp;
    int j = 0;
    int i = 0;
    int check = 0;

    while (i < n)
    {

        for (j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                check = 1;
            }
        }
         if(check == 0){
            break;
         }
        i++;
    }

    

    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << endl;
    }
}
int main()
{

    int numbers[6] = {4,5,6,78,7,5};
    sort(numbers, 6);
    // int iteration, j, temp, n = 9;
    // int num[n] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // cout << " The unsorted array" << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << num[i] << "\t";
    // }
    // cout << endl;
    // for (iteration = 1; iteration < n; iteration++)
    // {
    //     cout << "Iteration=" << iteration << endl;
    //     int check = 0;
    //     for (j = 0; j < n - 1; j++)
    //     {
    //         if (num[j + 1] < num[j])
    //         {
    //             temp = num[j];
    //             num[j] = num[j + 1];
    //             num[j + 1] = temp;
    //             check = 1;
    //         }
    //         cout << endl;
    //         cout << "J=" << j << endl;
    //         for (int k = 0; k < n; k++)
    //         {
    //             cout << num[k] << "\t";
    //         }
    //         cout << endl;
    //     }
    //     if (check == 0)
    //     {
    //         break;
    //     }
    // }
    // cout << "The sorted array is " << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << num[i] << "\t";
    // }
    // cout << endl;

    return 0;
}
