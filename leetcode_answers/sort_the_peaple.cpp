#include <bits/stdc++.h>
using namespace std;

vector<string> sortPeople(vector<string> names, vector<int> heights)
{

    int i = 0;
    string temp;
    int len = names.size();
    vector<string> finalNames;
    vector<pair<int, string>> pairs;
    while (i < len)
    {
        pairs.push_back({heights[i], names[i]});
        i++;
    }
    sort(pairs.rbegin(), pairs.rend());
    for (int k = 0; k < names.size(); k++)
    {
        finalNames.push_back(pairs[k].second);
    }

    return finalNames;
}
int main()
{

    // ["EPCFFt","RPJOFYZUBFSIYp","VOYGWWNCf","Vk","Sgizfdfrims","IEO","QTASHKQ","WSpmqvb"]
    vector<int> heights = {17233, 32521, 14087, 42738, 46669, 65662, 43204, 8224};
    vector<string> names = {"IEO", "Sgizfdfrims", "QTASHKQ", "Vk", "RPJOFYZUBFSIYp", "EPCFFt", "VOYGWWNCf", "WSpmqvb"};

    vector<string> name = sortPeople(names, heights);
    sortPeople(names, heights);
    for (auto name : name)
    {
        cout << name << endl;
    }

    return 0;
}