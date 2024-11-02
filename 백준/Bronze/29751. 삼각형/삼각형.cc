#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    double w, h;

    cin >> w >> h;

    cout << fixed;
    cout.precision(1);
    cout << w * h / 2 << '\n';

    return 0;
}