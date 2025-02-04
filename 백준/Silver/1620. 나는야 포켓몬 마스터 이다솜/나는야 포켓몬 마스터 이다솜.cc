#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;

    cin >> n >> m;

    vector<string> vec(n + 1);
    map<string, int> mp;

    for (int i = 1; i <= n; i++)
    {
        string s;

        cin >> s;

        vec[i] = s;
        mp[s] = i;
    }

    for (int i = 0; i < m; i++)
    {
        string s;

        cin >> s;

        if (isdigit(s[0]))
        {
            int index = stoi(s);
            cout << vec[index] << '\n';
        }
        else
        {
            cout << mp[s] << '\n';
        }
    }

    return 0;
}