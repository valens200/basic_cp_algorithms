#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int romanToInt(string s)
{

    unordered_map<string, int> rom{
        {rom["I"] = 1},
        {rom["V"] = 5},
        {rom["X"] = 10},
        {rom["L"] = 50},
        {rom["C"] = 100},
        {rom["D"] = 500},
        {rom["M"] = 1000}

    };
    cout << rom["I"] << endl;
}
int main()
{
    cout << " hello world " << endl;

    return 0;
}