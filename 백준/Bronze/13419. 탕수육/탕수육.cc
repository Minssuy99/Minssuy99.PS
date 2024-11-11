#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;
        string first;
        string second;

        cin >> s;

        for (int k = 0; k < s.length(); k++)
        {
            if (k % 2 != 0)
            {
                first += s[k];
            }
            else
            {
                second += s[k];
            }
        }

        if (s.length() % 2 != 0)
        {
            cout << second << first << '\n';
            cout << first << second << '\n';
        }
        else
        {
            cout << second << '\n';
            cout << first << '\n';
        }
    }

    return 0;
}