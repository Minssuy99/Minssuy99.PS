#include <bits/stdc++.h>
using namespace std;

bool compareStrings(const string &a, const string &b)
{
    if (a.size() != b.size())
    {
        return a.size() < b.size();
    }
    else if (a[0] != b[0])
    {
        return a[0] < b[0];
    }
    else
    {
        return a < b;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<string> dic;

    for (int i = 0; i < n; i++)
    {
        string word;
        cin >> word;
        dic.push_back(word);
    }

    sort(dic.begin(), dic.end(), compareStrings);
    dic.erase(unique(dic.begin(), dic.end()), dic.end());

    for (const auto &word : dic)
    {
        cout << word << "\n";
    }

    return 0;
}