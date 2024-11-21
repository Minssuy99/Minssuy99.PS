#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int a = 0;
    int b = 0;
    int result = 0;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;

        a += x;
        b += y;

        result = a - b;

        cout << result << '\n';
    }

    return 0;
}