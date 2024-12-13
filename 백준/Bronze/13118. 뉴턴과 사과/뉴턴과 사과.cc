#include <bits/stdc++.h>

using namespace std;

int main()
{
    int p[4];

    int x, y, r;

    int result = 0;

    cin >> p[0] >> p[1] >> p[2] >> p[3] >> x >> y >> r;

    for (int i = 0; i < 4; i++)
    {
        if (p[i] == x)
        {
            result = i + 1;
        }
    }

    cout << result;

    return 0;
}