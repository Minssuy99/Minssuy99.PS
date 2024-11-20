#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    double m;

    cin >> m;

    if (m <= 30)
    {
        cout << fixed;
        cout.precision(1);
        cout << m / 2 << '\n';
        return 0;
    }
    else
    {
        m -= 30;
        m = m * 3 / 2;

        m += 15;
        cout << fixed;
        cout.precision(1);
        cout << m << '\n';
    }

    return 0;
}