#include <bits/stdc++.h>
using namespace std;

string Substring(string name1, string name2)
{
    string result = "No";
    char one = name2[0];
    for (int i = 0; i < name1.size(); i++)
    {
        if (name1[i] == one)
        {
            if (name1.substr(i, name2.size()) == name2)
            {
                result = "Yes";
                break;
            }
            
        }
    }
    return result;
}
int main()
{
    string name;
    string name2;
    cin >> name;
    cin >> name2;
    cout << Substring(name, name2) << endl;
}