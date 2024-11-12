#include <bits/stdc++.h>

using namespace std;

bool compare(const pair<int, int> a, const pair<int, int> b)
{
    if (a.second == b.second)
    {
        return a.first < b.first;
    }
    return a.second < b.second;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<pair<int, int>> vec(n);

    for (int i = 0; i < n; i++)
    {
        cin >> vec[i].first >> vec[i].second;
    }

    sort(vec.begin(), vec.end(), compare);

    for (int i = 0; i < n; i++)
    {
        cout << vec[i].first << " " << vec[i].second << '\n';
    }

    return 0;
}