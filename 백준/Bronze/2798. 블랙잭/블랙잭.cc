#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    int best = 0;

    cin >> n >> m;

    vector<int> vec(n);

    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                int value = vec[i] + vec[j] + vec[k];

                if (value <= m)
                {
                    if (best < value)
                    {
                        best = value;
                    }
                }
            }
        }
    }

    cout << best;

    return 0;
}