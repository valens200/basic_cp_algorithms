#include <bits/stdc++.h>
using namespace std;


vector<int> vi;
void replaceCharacter(string arr, int n)
{
    
    if (n == arr.size())
    {
        return;
    }
    // cout << "  " << to_chars() arr[n] <<  endl;
     
     return replaceCharacter(arr,  n+1);
}
int main()
{
    string arr = {"12345"};
    replaceCharacter(arr, 0);
    return 0;
}