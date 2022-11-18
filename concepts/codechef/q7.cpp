#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vector<int>> nvi;

void getNumber(int n, int n2)
{
    int sum = n + n2;
    int found = 0;
    if (sum == 2)
    {
        cout << "Alice" << endl;
    }
    else
    {
        int i = 2;
        int res = 0;
        int number = 2;
        while (i < sum)
        {
            if (i != number && i % 2 != 0)
            {
                found = 1;
            }
            i++;
        }
        if (found == 0)
        {
            cout << "Alice" << endl;
        }
        else
        {
            cout << "Bob" << endl;
        }
    }
}
int main()
{
    int num;
    int n2;
    int test;
    cin >> test;
    string main;
    int i = 0;
    while (i < test)
    {
        
        cin >> num  >> main >> n2;
        getNumber(num, n2);
        i++;
    }

    return 0;
}