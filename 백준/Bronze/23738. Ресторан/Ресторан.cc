#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;

    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'B')
        {
            cout << 'v';
        }
        else if (s[i] == 'E')
        {
            cout << "ye";
        }
        else if (s[i] == 'H')
        {
            cout << 'n';
        }
        else if (s[i] == 'P')
        {
            cout << 'r';
        }
        else if (s[i] == 'C')
        {
            cout << 's';
        }
        else if (s[i] == 'Y')
        {
            cout << 'u';
        }
        else if (s[i] == 'X')
        {
            cout << 'h';
        }
        else
        {
            cout << static_cast<char>(s[i] + 32);
        }
    }

    return 0;
}