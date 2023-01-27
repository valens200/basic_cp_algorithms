#include <bits/stdc++.h>
using namespace std;

bool isFound(string str, char target)
{
    int len = str.size();
    if (len == 0)
    {
        return false;
    }
    if (len == 1 && str[0] == target)
    {
        return true;
    }
    if (str[0] == target)
    {
        return true;
    }
    return isFound(str.substr(1), target);
}
string foundChars = "";
void removeDuplicates(string str)
{
    int len = str.size();

    if (len == 0)
    {
        return;
    }
    if (isFound(foundChars, str[0]) == 0)
    {
        foundChars += str[0];
        cout << str[0] << " ";
    }
    return removeDuplicates(str.substr(1));
}

int main()
{
    string name = {"haa"};
    removeDuplicates(name);

    return 0;
}