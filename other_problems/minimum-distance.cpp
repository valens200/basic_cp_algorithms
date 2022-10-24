#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

void printArr(vi arr)
{
    int len = arr.size();
    cout << " length " << len << endl;
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << endl;
    }
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

int main()
{
    vi factors;
    int number, i, j;
    cin >> number;
    cout << " number " <<  number <<endl;
    for (i = 0; i <= number; i++)
    {
        if (number % i == 0)
        {
            factors.push_back(i);
        }else{
            continue;
        }
    }
    sort(factors);

    return 0;
}