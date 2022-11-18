#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vector<int>> nvi;


void getNumber(int n)
{

   if(n % 2 == 0){
    cout << " Yes " <<endl;
   }else{
    cout << " No " << endl;
   }
}
int main()
{
    int n;
    int test;
    cin >> test;
    cin >> n;
    getNumber(n);


    return 0;
}