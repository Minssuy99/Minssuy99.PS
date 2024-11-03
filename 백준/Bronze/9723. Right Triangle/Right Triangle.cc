#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int count = 1;

    int triangle[3];

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> triangle[i];
        }

        sort(triangle, triangle + 3);

        if (pow(triangle[2], 2) == pow(triangle[1], 2) + pow(triangle[0], 2))
        {
            cout << "Case #" << count << ": " << "YES" << '\n';
        }
        else
        {
            cout << "Case #" << count << ": " << "NO" << '\n';
        }

        count++;
    }

    return 0;
}