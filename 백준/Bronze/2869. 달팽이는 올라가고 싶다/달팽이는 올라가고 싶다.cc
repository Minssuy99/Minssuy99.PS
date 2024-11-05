#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, v;

    int result = 0;

    cin >> a >> b >> v;

    if ((v - a) % (a - b) == 0)
    {
        result = (v - a) / (a - b);
    }
    else
    {
        result = (v - a) / (a - b) + 1;
    }

    cout << result + 1 << '\n';

    return 0;
}