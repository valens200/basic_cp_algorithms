#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef set<int> v2;

void getnumber(v2 arr, int x)
{
    auto it = arr.find(x);
    if (it == arr.end())
    {
        cout << " no element found " << endl;
    }
    else
    {
        cout << " element found " << endl;
    }
}
int main()
{

    //bitsets

    bitset<10> s(string("101010101010"));
    cout << " number of ones " << s.count() <<endl;

    // sets

    cout  << "=======================================" << endl;
    set<int> numbers;
    numbers.insert(4);
    numbers.insert(6);
    cout << endl;
    cout << numbers.count(6);

    cout << " ===========================" << endl;

    // reverse(numbers.begin(), numbers.end());>

    for (auto n : numbers)
    {
        cout << n << endl;
    }

    numbers.erase(6);
    numbers.count(4);
    auto it = numbers.upper_bound(8);
    cout << " upper " << *it << endl;
    getnumber(numbers, 6);
}