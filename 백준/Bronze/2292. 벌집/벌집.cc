#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    unsigned int n;
    int count = 1;
    int range = 1;

    cin >> n;

    if (n == 1)
    {
        cout << "1" << '\n';
        return 0;
    }

    while (range < n)
    {
        range += 6 * count;
        count++;
    }

    cout << count << '\n';

    return 0;
}