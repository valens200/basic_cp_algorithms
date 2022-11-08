#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

void printArr(vi arr)
{
    int min = arr[1] - arr[0];
    cout << " min distance " << min << endl;
}
void sort(vi arr)
{
    int i;
    int len = arr.size();
    for (i = 1; i < len; i++)
    {
        int current_val = arr[i];
        int position = i;
        while (position > 0 && arr[position - 1] > current_val)
        {
            arr[position] = arr[position - 1];
            position--;
        }
        arr[position] = current_val;
    }

    printArr(arr);
}




int isDigit(int arr[2], int number){
    int sum = 0;
    int i = 0;
    while(i < 5){
        sum += arr[i];
        i++;
    }
    if(sum <= number){
        return 1;
    }else{
        return 0;
    }
}

int main()
{
    vi factors;
    int number, i, j;
    cin >> number;
    int numbers[2] = {3,4};

    // for (i = 1; i <= number; i++)
    // {
    //     if (number % i == 0)
    //     {
    //         factors.push_back(i);
    //         cout << factors[i];
    //     }
    // }

    // sort(factors);
    cout << isDigit(numbers, number);

    return 0;
}