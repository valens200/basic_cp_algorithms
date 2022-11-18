#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vector<int>> nvi;


int getNumber(int arr[], int n)
{
        vector<int> subset;
        nvi numbers;

    for (int b = 0; b < (1 << n); b++)
    {
        for (int i = 0; i < n; i++)
        {
            if (b & (1 << i))
                subset.push_back(i);
        }
    }

    for(int i = 0; i < subset.size(); i++){
        cout << subset[i] << endl;
    }
}
int main()
{
    int arr[4] = {2,3,4,5};
    getNumber(arr, 4);


    return 0;
}