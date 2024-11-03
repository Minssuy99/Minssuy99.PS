#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int s = 0;
    int t = 0;

    for (int i = 0; i < 4; i++)
    {
        int number;
        cin >> number;
        s += number;
    }

    for (int i = 0; i < 4; i++)
    {
        int number;
        cin >> number;
        t += number;
    }

    if (s >= t)
        cout << s << '\n';
    else
        cout << t << '\n';

    return 0;
}