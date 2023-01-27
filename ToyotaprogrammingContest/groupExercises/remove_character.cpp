#include <bits/stdc++.h>
using namespace std;


vector<char> vi;
vector<char> removeCharacter(char *arr, char target, int n)
{
    if(n == 0){
     return vi;
   }
   if(arr[0] != target){
    vi.push_back(arr[0]);
   }
   return removeCharacter(arr+1, target, n-1);
}
int main()
{
    char arr[] = {"abchkdjhsdfjhajajajakjakja"};
    vector<char> result = removeCharacter(arr, 'a', sizeof(arr) / sizeof(arr[0]));
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }

    return 0;
}