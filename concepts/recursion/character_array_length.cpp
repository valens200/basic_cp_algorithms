#include <bits/stdc++.h>
using namespace std;


vector<char> vi;
int i = 0;
int  removeCharacter(char *arr, int n)
{
    if (n == 0)
    {
        return  i-1;
    }
    i++;
     return removeCharacter(arr, n - 1);
}
int main()
{
    char arr[] = {"abcde"};
    cout <<  removeCharacter(arr, sizeof(arr) / sizeof(arr[0]));
   

    return 0;
}