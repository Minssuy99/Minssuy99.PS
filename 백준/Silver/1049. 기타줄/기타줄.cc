#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;

    cin >> n >> m;

    vector<int> pakage(m);
    vector<int> single(m);

    for (int i = 0; i < m; i++)
    {
        cin >> pakage[i] >> single[i];
    }

    sort(pakage.begin(), pakage.end());
    sort(single.begin(), single.end());

    int cost_pakage_only = (n / 6) * pakage[0] + (n % 6 != 0 ? pakage[0] : 0);
    int cost_single_only = n * single[0];
    int cost_mixed = (n / 6) * pakage[0] + (n % 6) * single[0];

    int min_cost = min({cost_pakage_only, cost_single_only, cost_mixed});

    cout << min_cost << endl;

    return 0;
}