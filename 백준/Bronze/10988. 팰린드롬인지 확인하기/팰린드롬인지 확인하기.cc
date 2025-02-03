#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;

    cin >> s;

    string r(s.rbegin(), s.rend());

    if (s == r)
        cout << "1";

    else
        cout << "0";

    return 0;
}
