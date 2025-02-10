// .
// https://www.acmicpc.net/problem/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    int min = -987654321;
    int ret = 0;

    cin >> n >> m;

    vector<int> vec(n);

    for (int i = 0; i < n; i++)
    {
        int number;

        cin >> number;
        vec[i] = number;
    }

    for (int i = 0; i < n - 1; i++)
    {
        int number = m - vec[i];

        for (int j = i + 1; j < n; j++)
        {
            if (vec[j] == number)
            {
                ret++;
                vec[i] = min;
                vec[j] = min;
            }
        }
    }
    cout << ret << endl;

    return 0;
}