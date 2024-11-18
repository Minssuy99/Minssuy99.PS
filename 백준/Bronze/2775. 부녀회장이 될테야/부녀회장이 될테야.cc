#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    while (n--)
    {
        int k, m;
        cin >> k >> m;

        vector<vector<int>> vec(k + 1, vector<int>(m + 1));

        for (int i = 1; i <= m; i++)
        {
            vec[0][i] = i;
        }

        for (int i = 1; i <= k; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                vec[i][j] = vec[i - 1][j] + vec[i][j - 1];
            }
        }

        cout << vec[k][m] << '\n';
    }

    return 0;
}