#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef set<int> v1;

void sort(vi numbers)
{
    sort(numbers.begin(), numbers.end());
    int i = 0;

    while (i < numbers.size())
    {
        cout << numbers[i] << endl;
        i++;
    }
}
int geck(set<int> num1, set<int> num2)
{
    int i = 0;
    int digit;
    int count;
    if (num1.size() > num2.size())
    {
        digit = num1.size();
    }
    else
    {
        digit = num2.size();
    }
}

int numbers(set<int> num1, set<int> num2)
{

    queue<int> gen;
    for (auto i = num1.begin(); i != num1.end(); i++)
    {
        auto n = num2.find(*i);
        if (n != num2.end())
        {
            gen.push(*i);
        }
    }

    return gen.size();
}
void printInincreasingOrder(vi numbers)
{
    for (auto i = numbers.begin(); i != numbers.end(); i++)
    {
        cout << *i << endl;
    }
}

void getnumbers(int n)
{
    for (int b = 0; b < (1 << n); b++)
    {
        vector<int> subset;
        for (int i = 0; i < n; i++)
        {
            if (b & (1 << i))
                subset.push_back(i);
            cout << subset[i];
        }
    }
}

14,2,6,7,41,56,11,25,9
int main()
{
    getnumbers(100);

    cout << (1 << 2) << endl;

    return 0;
}