#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    while (n != 0)
    {
        int a, b;

        cin >> a >> b;

        int result = (a / b) * (a / b);

        cout << result << '\n';

        n--;
    }

    return 0;
}