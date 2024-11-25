#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, k;
    int result = 0;

    cin >> n >> m;

    vector<pair<int, int>> vec(n);

    for (int i = 0; i < n; i++)
    {
        cin >> vec[i].first >> vec[i].second;
    }

    while (m--)
    {
        cin >> k;

        for (int i = 0; i < n; i++)
        {
            if (vec[i].first <= k)
            {
                int temp = vec[i].first;
                vec[i].first = vec[i].second;
                vec[i].second = temp;
            }
        }
    }

    for (auto &a : vec)
    {
        result += a.first;
    }

    cout << result;

    return 0;
}