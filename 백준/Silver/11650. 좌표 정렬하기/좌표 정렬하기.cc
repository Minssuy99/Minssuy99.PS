#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;

    cin >> n;

    vector<pair<int, int>> vec;

    for (int i = 0; i < n; i++)
    {
        int a, b;

        cin >> a >> b;

        vec.emplace_back(a, b);
    }

    sort(vec.begin(), vec.end());

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i].first << " " << vec[i].second << '\n';
    }

    return 0;
}