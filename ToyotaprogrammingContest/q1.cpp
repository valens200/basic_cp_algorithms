#include <bits/stdc++.h>
using namespace std;

int getNumber(string name)
{
    int sum = 0;
    for (int i = 0; i < name.size(); i++)
    {
        switch (name[i])
        {
        case 'v':
            sum += 1;
            break;
        case 'w':
            sum += 2;
            break;
        default:
            sum = sum;
            break;
        }
      
    }

    return sum;
}
int main()
{
    string name;
    cin >> name;
    cout << getNumber(name) << endl;
}