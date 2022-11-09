#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

int  isNormal(int number)
{
    vi factors;
    int i = 0;
    int result = 1;
    while (i <= number)
    {
        if (number % i == 0)
        {
            cout << i <<endl;
            factors.push_back(i);
        }
        i++;
    }
    while(i < number){
        if(factors[i] % 2 != 0){
            result =  0;
            cout << factors[i];
        }
          cout << factors[i];
        i++;
    }

    return result;
}

int main()
{

    int number = 6;
    cout << isNormal(number);

    return 0;
}