#include <bits/stdc++.h>
using namespace std;


vector<char> vi;
vector<char> replaceCharacter(char *arr, char target, char replace, int n)
{
    if (n == 0)
    {
        return  vi;
    }
    if (arr[0] != target)
    {
        vi.push_back(arr[0]);       
    }else{
        vi.push_back(replace);
    }
     return replaceCharacter(arr + 1, target, replace, n - 1);
}
int main()
{
    char arr[] = {"abchkdjhsdfjhajajajakjakja"};
    vector<char> result = replaceCharacter(arr, 'a',  'B',sizeof(arr) / sizeof(arr[0]));
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }   

    return 0;
}