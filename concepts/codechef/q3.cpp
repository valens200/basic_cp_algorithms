#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vector<int>> nvi;

void getNumber(int n)
{

    if (n % 2 == 0)
    {
        cout << " Yes" << endl;
    }
    else
    {
        cout << " No " << endl;
    }
}
int main()
{
    int num;
    int test;
    cin >> test;
    int i = 0;
    while (i < test)
    {
        cin >> num;
        getNumber(num);
        i++;
    }

    return 0;
}